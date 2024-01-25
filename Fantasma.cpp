#include "Fantasma.h"
#include <random>

using namespace std;


    int x_fantasma, y_fantasma;
    double probabilidade;
    char direct_fant;

    void fantasma::set_posicao_fantasma(int x_fantasma, int y_fantasma){
        this->x_fantasma=x_fantasma;
        this->y_fantasma=y_fantasma;
    }

    fantasma::fantasma(){
        x_fantasma=0;
        y_fantasma=0;
    }

    int fantasma::get_x_fantasma_(){
        return x_fantasma;
    }
    int fantasma::get_y_fantasma_(){
        return y_fantasma;
    }

    char fantasma::direcao_f(){
            probabilidade=(double) rand()/ (double) RAND_MAX;
            if(probabilidade <= 0.25){
                direct_fant='a';
            }
            else if(probabilidade <= 0.5){
                direct_fant='w';
            }
            else if(probabilidade <= 0.75){
                direct_fant='d';
            }
            else if(probabilidade <= 1){
                direct_fant='s';
            }

            return direct_fant;
    }