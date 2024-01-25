#include "Partida.h"

using namespace std;

    int qntd_pac_dot_comidos, total_pac, aux_linha, linha_partida, aux_coluna, coluna_partida, status;
    char tabuleiro_match[MAX][MAX], direction_match='a';


    partida::partida(){
        qntd_pac_dot_comidos=0;
        total_pac=0;
    }

    void partida::aumenta_pac_dot(){
        qntd_pac_dot_comidos++;
    }

    int partida::total_qnts_pac_dot(char tabuleiro_match[MAX][MAX], int linha_partida, int coluna_partida){
        for(aux_linha=0; aux_linha<linha_partida; aux_linha++){
            for(aux_coluna=0; aux_coluna<coluna_partida; aux_coluna++){
                if(tabuleiro_match[aux_linha][aux_coluna]=='.'){
                    total_pac++;
                }
            }
        }
        return total_pac;
    }

    void partida::printa_tabuleiro_Real(char tabuleiro_match[MAX][MAX], int linha_partida){
        for(aux_linha=0; aux_linha<linha_partida; aux_linha++){
            cout << tabuleiro_match[aux_linha] << endl;
        }
    }

    void partida::printa_resultado(int status, char tabuleiro_match[MAX][MAX] , int linha_partida){
        for(aux_linha=0; aux_linha<linha_partida; aux_linha++){
            cout << tabuleiro_match[aux_linha] << endl;
        }
        if(status==0){
            cout << "Game Over ! Pontos= " << qntd_pac_dot_comidos << endl;   
        }
        else{
            cout << "Congratulations! Pontos= " << qntd_pac_dot_comidos << endl;
        }
    }

    char partida::devolve_direcao(){
        cout << "Direção (a - esquerda, d - direita, w - cima, s - baixo):" << endl;
        cin >> direction_match;

        return direction_match;
    }