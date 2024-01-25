#include "Labirinto.h"
#define MAX 256

using namespace std;

    int cont, linhas, colunas, pos_X_pacm, pos_Y_pacm, qntd_fantasmas, i, j;
    char tabuleiro[MAX][MAX], linhas_arq[MAX];

    void labirinto::le_tabuleiro(Arquivo *arq){
        while(arq->arq.getline(linhas_arq, MAX)){
                while(linhas_arq[cont]!='\0'){
                    tabuleiro[linhas][cont]=linhas_arq[cont];
                    cont++;
                }
                colunas=cont;
                cont=0;
                linhas++;
             }
    }

    void labirinto::set_pacm(){
        pos_X_pacm=linhas/2;
        pos_Y_pacm=colunas/2;
        tabuleiro[pos_X_pacm][pos_Y_pacm]='C';
    }

    int labirinto::conta_fantasmas(){
        for(i=0; i<linhas; i++){
            for(j=0; j<colunas; j++){
                if(tabuleiro[i][j]=='F'){
                    qntd_fantasmas++;
                }
            }
        }
        return qntd_fantasmas;
    }

    int labirinto::get_posicao_inicial_X_pacs(){
        return pos_X_pacm;
    }

    int labirinto::get_posicao_inicial_y_pacs(){
        return pos_Y_pacm;
    }

    int labirinto::get_linhas(){
        return linhas;
    }

    int labirinto::get_colunas(){
        return colunas;
    }

    labirinto::labirinto(){
            cont=0;
            colunas=0;
            linhas=0;
            qntd_fantasmas=0;
        }