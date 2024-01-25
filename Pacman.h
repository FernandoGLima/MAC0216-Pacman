#ifndef Pacman
#define Pacman
#include <iostream>
#include <fstream>
#define VIVO 1;
#define MORTO 0;

class pacman{
    private:
        int x_pac, y_pac;
        int status_pac;

    public:
        /*!
        *\brief Método: pacman
        * Cria a classe pacman, atribui ao status do pacman de que ele esta vivo e atribui a x_pac e y_pac
        * as coordenadas do pacman no tabuleiro.
        * 
        * \param x_pac: (int) Número que representa a coordenada X (linha - vertical) no tabuleiro
        * \param y_pac: (int) Número que representa a coordenada y (coluna - horizontal) no tabuleiro 
        */
        pacman(int x_pac, int y_pac);
        /*!
        *\brief Método: ~pacman
        *Destroi a classe pacman.
        */
        ~pacman();
        /*!
        *\brief Método: set_posicao_pacman
        * Irá atribuir as variaveis x_pac e y_pac (que indicam a posicao do pacman) a nova posicao do pacman
        * 
        * \param x_pac: (int) Número que representa a coordenada X (vertical- na matriz) antiga 
        * \param y_pac: (int) Número que representa a coordenada Y (horizontal - na matriz) antiga 
        */
        void set_posicao_pacman(int x_pac, int y_pac);
        /*!
        *\brief Método: set_morreu_pacman
        * Irá atribuir ao atributo status_pac o número 0, ou seja, irá indicar que o pacman morreu.
        */
        void set_morreu_pacman();
        /*!
        *\brief Método: get_status _pacman
        *Irá retornar o status do pacman, ou seja, se ele esta vivo ou morto.
        *
        * \return retorno: (int) Retorna 1 se estiver vivo ou 0 se estiver morto.
        */
        int get_status_pacman();
        /*!
        *\brief Método: get_posicao_X_pac
        *Irá retornar a coordenada X(linha - Vertical) do pacman.
        *
        * \return retorno: (int) Retorna um número que é a coordenada da linha da matriz onde se encontra
        * o pacman.
        */
        int get_posicao_X_pac();
        /*!
        *\brief Método: get_posicao_Y_pac
        * Irá retornar a coordernada Y(coluna - horizontal) do pacman.
        * 
        * \return retorno: (int) Retorna um número que é a coordenada da coluna onde se encontra o pacman
        */
        int get_posicao_Y_pac();
};

#endif