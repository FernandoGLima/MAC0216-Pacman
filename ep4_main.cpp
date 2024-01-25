#include <iostream>
#include <fstream>
#include <gtest/gtest.h>
#include "arquivo.h"
#include "Labirinto.h"
#include "Fantasma.h"
#include "Pacman.h"
#include "Personagem.h"
#include "Partida.h"
#define VIVO 1;
#define MORTO 0;

using namespace std;

#ifdef FLAG_TESTE
TEST(Pac, seria1){
    pacman *pac_test;
    pac_test= new pacman(2, 3);

    int status_test;

    pac_test->set_morreu_pacman();
    status_test= pac_test->get_status_pacman();

    ASSERT_EQ(status_test, 0);
}

TEST(pac, andou){
    pacman *fpac_test;
    fpac_test= new pacman(2, 3);
    int x_test;

    fpac_test->set_posicao_pacman(3, 2);
    x_test=fpac_test->get_posicao_X_pac();
    ASSERT_EQ(x_test, 3);
}
#endif

int main(int argc, char **argv){

    #ifdef FLAG_TESTE
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS(); 
    #endif

    Arquivo  *arq;
    arq= new Arquivo;
    partida *match;
    match= new partida;
    labirinto *tabs;
    tabs= new labirinto;

    int i=0, j=0, qntd_ghost, g=0, linha, coluna, x_pac_ini, y_pac_ini, x_anterior, y_anterior, x_posterior;
    int y_posterior, status, dots=1, resultado_anda=1;
    char direction;
    
    arq->abrearquivo(argc, argv);
    tabs->le_tabuleiro(arq);
    linha=tabs->get_linhas();
    coluna=tabs->get_colunas();
    
    tabs->set_pacm();
    x_pac_ini=tabs->get_posicao_inicial_X_pacs();
    y_pac_ini=tabs->get_posicao_inicial_y_pacs();
    pacman *pacs;
    pacs= new pacman(x_pac_ini, y_pac_ini);

    personagem *personag;
    personag= new personagem();

    personag->set_tabuleiro_principal(linha, coluna, tabs->tabuleiro);

    qntd_ghost=tabs->conta_fantasmas();

    fantasma *Ghost_busters[qntd_ghost];

    for(i=0; i<linha; i++){
       for(j=0; j<coluna; j++){
            if(tabs->tabuleiro[i][j]=='F'){
                qntd_ghost=qntd_ghost-1;
                Ghost_busters[g]= {new fantasma};
                Ghost_busters[g]->set_posicao_fantasma(i, j);
                g++;
            }
        }
    }

    status=pacs->get_status_pacman();
    dots=match->total_qnts_pac_dot(personag->tabuleiro_principal, linha, coluna);

    while(status==1 && dots!=0){
        match->printa_tabuleiro_Real(personag->tabuleiro_principal, linha);

        for(i=0; i<g; i++){
            x_anterior= Ghost_busters[i]->get_x_fantasma_();
            y_anterior= Ghost_busters[i]->get_y_fantasma_();
            direction=  Ghost_busters[i]->direcao_f();

            resultado_anda= personag->anda_fantasma(x_anterior, y_anterior, direction);

            x_posterior= personag->get_x_novo();
            y_posterior= personag->get_y_novo();
            Ghost_busters[i]->set_posicao_fantasma(x_posterior, y_posterior);

            if(resultado_anda==2){
                pacs->set_morreu_pacman();
                status= pacs->get_status_pacman();
            }
        }


        x_anterior= pacs->get_posicao_X_pac();
        y_anterior= pacs->get_posicao_Y_pac();
        direction=match->devolve_direcao();
        resultado_anda= personag->anda_personagem(x_anterior, y_anterior, direction);
        x_posterior= personag->get_x_novo();
        y_posterior= personag->get_y_novo();
        pacs->set_posicao_pacman(x_posterior, y_posterior);
        if(resultado_anda==3){
            match->aumenta_pac_dot();
            dots--;
        }
        if(resultado_anda==2){
            pacs->set_morreu_pacman();
            status= pacs->get_status_pacman();
        }
    }

    match->printa_resultado(status, personag->tabuleiro_principal, linha);

    arq->fecha_arquivo(); 
    
    return 0;
}
