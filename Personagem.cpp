#include "Personagem.h"

using namespace std;

    int linhas_table, colunas_table, posicao_X_ant, posicao_Y_ant, x_novo, y_novo;
    int aux1, aux2;
    char direcao, tabs_copia[MAX][MAX], tabs_auxiliar[MAX][MAX];

    
    personagem::personagem(){
    }
     
    void personagem::set_tabuleiro_principal(int linhas_table, int colunas_table, char tabs_copia[MAX][MAX]){
       this->colunas_table=colunas_table; this->linhas_table=linhas_table;
        for(aux1=0; aux1<linhas_table; aux1++){
            for(aux2=0; aux2<colunas_table; aux2++){
                tabuleiro_principal[aux1][aux2]=tabs_copia[aux1][aux2];
                tabs_auxiliar[aux1][aux2]=tabs_copia[aux1][aux2];
                if(tabs_auxiliar[aux1][aux2]=='F'){
                    tabs_auxiliar[aux1][aux2]==' ';
                }
                if(tabs_auxiliar[aux1][aux2]=='C'){
                    tabs_auxiliar[aux1][aux2]==' ';
                }
            }
        }
    }

    int personagem::anda_personagem(int posicao_X_ant, int posicao_Y_ant, char direcao){
            if(direcao=='a'){
                if(posicao_Y_ant-1<0){
                    if(tabuleiro_principal[posicao_X_ant][colunas_table-1]=='.'){
                        tabuleiro_principal[posicao_X_ant][colunas_table-1]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        y_novo=colunas_table-1;
                        x_novo=posicao_X_ant;
                        return 3;
                    }
                    else if(tabuleiro_principal[posicao_X_ant][colunas_table-1]=='F'){
                        tabuleiro_principal[posicao_X_ant][colunas_table-1]='X';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        y_novo=colunas_table-1;
                        x_novo=posicao_X_ant;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant][colunas_table-1]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        y_novo=colunas_table-1;
                        x_novo=posicao_X_ant;
                        return 1;
                    }
                }
                else{
                    if(tabuleiro_principal[posicao_X_ant][posicao_Y_ant-1]=='*'){
                        y_novo=posicao_Y_ant;
                        x_novo=posicao_X_ant;
                       return 0;
                     }
                    else if(tabuleiro_principal[posicao_X_ant][posicao_Y_ant-1]=='.'){
                       tabuleiro_principal[posicao_X_ant][posicao_Y_ant-1]='C';
                       tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        y_novo=posicao_Y_ant-1;
                        x_novo=posicao_X_ant;
                        return 3;
                    }
                    else if(tabuleiro_principal[posicao_X_ant][posicao_Y_ant-1]=='F'){
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant-1]='X';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        y_novo=posicao_Y_ant-1;
                        x_novo=posicao_X_ant;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant-1]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        y_novo=posicao_Y_ant-1;
                        x_novo=posicao_X_ant;
                        return 1;
                    }
                }
            }
            
            else if(direcao=='d'){
                if(posicao_Y_ant+1>=colunas_table){
                    if(tabuleiro_principal[posicao_X_ant][0]=='.'){
                        tabuleiro_principal[posicao_X_ant][0]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant;
                        y_novo=0;
                        return 3;
                    }
                    else if(tabuleiro_principal[posicao_X_ant][0]=='F'){
                        tabuleiro_principal[posicao_X_ant][0]='X';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant;
                        y_novo=0;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant][0]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant;
                        y_novo=0;
                        return 1;
                    }
                }

                else{
                    if(tabuleiro_principal[posicao_X_ant][posicao_Y_ant+1]=='*'){
                        y_novo=posicao_Y_ant;
                        x_novo=posicao_X_ant;
                       return 0;
                     }
                    else if(tabuleiro_principal[posicao_X_ant][posicao_Y_ant+1]=='.'){
                       tabuleiro_principal[posicao_X_ant][posicao_Y_ant+1]='C';
                       tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant;
                        y_novo=posicao_Y_ant+1;
                        return 3;
                    }
                    else if(tabuleiro_principal[posicao_X_ant][posicao_Y_ant+1]=='F'){
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant+1]='X';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant;
                        y_novo=posicao_Y_ant+1;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant+1]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant;
                        y_novo=posicao_Y_ant+1;
                        return 1;
                    }
                }
            }

            else if(direcao=='w'){
                if(posicao_X_ant-1<0){
                    if(tabuleiro_principal[linhas_table-1][posicao_Y_ant]=='.'){
                        tabuleiro_principal[linhas_table-1][posicao_Y_ant]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=linhas_table-1;
                        y_novo=posicao_Y_ant;
                        return 3;
                    }
                    else if(tabuleiro_principal[linhas_table-1][posicao_Y_ant]=='F'){
                        tabuleiro_principal[linhas_table-1][posicao_Y_ant]='X';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=linhas_table-1;
                        y_novo=posicao_Y_ant;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[linhas_table-1][posicao_Y_ant]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=linhas_table-1;
                        y_novo=posicao_Y_ant;
                        return 1;
                    }
                }

                else{
                    if(tabuleiro_principal[posicao_X_ant-1][posicao_Y_ant]=='*'){
                        y_novo=posicao_Y_ant;
                        x_novo=posicao_X_ant;
                       return 0;
                     }
                    else if(tabuleiro_principal[posicao_X_ant-1][posicao_Y_ant]=='.'){
                       tabuleiro_principal[posicao_X_ant-1][posicao_Y_ant]='C';
                       tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant-1;
                        y_novo=posicao_Y_ant;
                        return 3;
                    }
                    else if(tabuleiro_principal[posicao_X_ant-1][posicao_Y_ant]=='F'){
                        tabuleiro_principal[posicao_X_ant-1][posicao_Y_ant]='X';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant-1;
                        y_novo=posicao_Y_ant;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant-1][posicao_Y_ant]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant-1;
                        y_novo=posicao_Y_ant;
                        return 1;
                    }
                }
            }

            else{
                if(posicao_X_ant+1>=linhas_table){
                    if(tabuleiro_principal[0][posicao_Y_ant]=='.'){
                        tabuleiro_principal[0][posicao_Y_ant]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=0;
                        y_novo=posicao_Y_ant;
                        return 3;
                    }
                    else if(tabuleiro_principal[0][posicao_Y_ant]=='F'){
                        tabuleiro_principal[0][posicao_Y_ant]='X';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=0;
                        y_novo=posicao_Y_ant;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[0][posicao_Y_ant]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=0;
                        y_novo=posicao_Y_ant;
                        return 1;
                    }
                }

                else{
                    if(tabuleiro_principal[posicao_X_ant+1][posicao_Y_ant]=='*'){
                        y_novo=posicao_Y_ant;
                        x_novo=posicao_X_ant;
                       return 0;
                     }
                    else if(tabuleiro_principal[posicao_X_ant+1][posicao_Y_ant]=='.'){
                       tabuleiro_principal[posicao_X_ant+1][posicao_Y_ant]='C';
                       tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant+1;
                        y_novo=posicao_Y_ant;
                        return 3;
                    }
                    else if(tabuleiro_principal[posicao_X_ant+1][posicao_Y_ant]=='F'){
                        tabuleiro_principal[posicao_X_ant+1][posicao_Y_ant]='X';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant+1;
                        y_novo=posicao_Y_ant;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant+1][posicao_Y_ant]='C';
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        x_novo=posicao_X_ant+1;
                        y_novo=posicao_Y_ant;
                        return 1;
                    }
                }
            }
    }


    int personagem::get_x_novo(){
        return x_novo;
    }

    int personagem::get_y_novo(){
        return y_novo;
    }


    int personagem::anda_fantasma(int posicao_X_ant, int posicao_Y_ant, char direcao){
            if(direcao=='a'){
                if(posicao_Y_ant-1<0){  
                    if(tabuleiro_principal[posicao_X_ant][colunas_table-1]=='C'){
                        tabuleiro_principal[posicao_X_ant][colunas_table-1]='X';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        y_novo=colunas_table-1;
                        x_novo=posicao_X_ant;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant][colunas_table-1]='F';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        y_novo=colunas_table-1;
                        x_novo=posicao_X_ant;
                        return 1;
                    }
                }

                else{
                    if(tabuleiro_principal[posicao_X_ant][posicao_Y_ant-1]=='*'){
                        y_novo=posicao_Y_ant;
                        x_novo=posicao_X_ant;
                       return 0;
                    }
                    else if(tabuleiro_principal[posicao_X_ant][posicao_Y_ant-1]=='C'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant-1]='X';
                            if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                                tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                            }
                            else{
                                tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                             }
                            y_novo=posicao_Y_ant-1;
                            x_novo=posicao_X_ant;
                            return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant-1]='F';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                                tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                            }
                            else{
                                tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                             }
                        y_novo=posicao_Y_ant-1;
                        x_novo=posicao_X_ant;
                        return 1;
                    }
                }
            }

            else if(direcao=='d'){
                if(posicao_Y_ant+1>=colunas_table){
                     if(tabuleiro_principal[posicao_X_ant][0]=='C'){
                        tabuleiro_principal[posicao_X_ant][0]='X';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=posicao_X_ant;
                        y_novo=0;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant][0]='F';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=posicao_X_ant;
                        y_novo=0;
                        return 1;
                    }
                }

                else{
                    if(tabuleiro_principal[posicao_X_ant][posicao_Y_ant+1]=='*'){
                        y_novo=posicao_Y_ant;
                        x_novo=posicao_X_ant;
                       return 0;
                     }
                    else if(tabuleiro_principal[posicao_X_ant][posicao_Y_ant+1]=='C'){
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant+1]='X';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=posicao_X_ant;
                        y_novo=posicao_Y_ant+1;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant][posicao_Y_ant+1]='F';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=posicao_X_ant;
                        y_novo=posicao_Y_ant+1;
                        return 1;
                    }
                }
            }

            else if(direcao=='w'){
                if(posicao_X_ant-1<0){
                    if(tabuleiro_principal[linhas_table-1][posicao_Y_ant]=='C'){
                        tabuleiro_principal[linhas_table-1][posicao_Y_ant]='X';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=linhas_table-1;
                        y_novo=posicao_Y_ant;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[linhas_table-1][posicao_Y_ant]='F';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=linhas_table-1;
                        y_novo=posicao_Y_ant;
                        return 1;
                    }
                }

                else{
                    if(tabuleiro_principal[posicao_X_ant-1][posicao_Y_ant]=='*'){
                        y_novo=posicao_Y_ant;
                        x_novo=posicao_X_ant;
                       return 0;
                     }
                    else if(tabuleiro_principal[posicao_X_ant-1][posicao_Y_ant]=='C'){
                        tabuleiro_principal[posicao_X_ant-1][posicao_Y_ant]='X';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=posicao_X_ant-1;
                        y_novo=posicao_Y_ant;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant-1][posicao_Y_ant]='F';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=posicao_X_ant-1;
                        y_novo=posicao_Y_ant;
                        return 1;
                    }
                }
            }

            else{
                if(posicao_X_ant+1>=linhas_table){
                    if(tabuleiro_principal[0][posicao_Y_ant]=='C'){
                        tabuleiro_principal[0][posicao_Y_ant]='X';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=0;
                        y_novo=posicao_Y_ant;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[0][posicao_Y_ant]='F';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=0;
                        y_novo=posicao_Y_ant;
                        return 1;
                    }
                }

                else{
                    if(tabuleiro_principal[posicao_X_ant+1][posicao_Y_ant]=='*'){
                        y_novo=posicao_Y_ant;
                        x_novo=posicao_X_ant;
                       return 0;
                     }
                    else if(tabuleiro_principal[posicao_X_ant+1][posicao_Y_ant]=='C'){
                        tabuleiro_principal[posicao_X_ant+1][posicao_Y_ant]='X';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=posicao_X_ant+1;
                        y_novo=posicao_Y_ant;
                        return 2;
                    }
                    else{
                        tabuleiro_principal[posicao_X_ant+1][posicao_Y_ant]='F';
                        if(tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=='.'){
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]='.';
                        }
                        else{
                            tabuleiro_principal[posicao_X_ant][posicao_Y_ant]=' ';
                        }
                        x_novo=posicao_X_ant+1;
                        y_novo=posicao_Y_ant;
                        return 1;
                    }
                }
            }
    }

    void personagem::retira_pac_dot(int posicao_X_ant, int posicao_Y_ant){
        tabs_auxiliar[posicao_X_ant][posicao_Y_ant]=' ';
    }