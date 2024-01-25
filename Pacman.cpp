#include "Pacman.h"

using namespace std;

    int x_pac, y_pac, status_pac;

    pacman::pacman(int x_pac, int y_pac){
        this->x_pac=x_pac;
        this->y_pac=y_pac;
        status_pac=VIVO;
    }

    void pacman::set_posicao_pacman(int x_pac, int y_pac){
        this->x_pac=x_pac;
        this->y_pac=y_pac;
    }

    int pacman::get_posicao_X_pac(){
        return x_pac;
    }

    int pacman::get_posicao_Y_pac(){
        return y_pac;
    }

    void pacman::set_morreu_pacman(){
        status_pac=MORTO;
    }

    int pacman::get_status_pacman(){
        return status_pac;
    }
