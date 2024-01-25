#ifndef Fantasma
#define Fantasma
#include <iostream>
#include <fstream>
#include <random>

class fantasma{
    private:
        int x_fantasma;
        int y_fantasma;
        double probabilidade;
        char direct_fant;

    public:
        /*!
        *\brief Método: fantasma
        * Irá criar a classe fantasma
        */
        fantasma();
        /*!
        *\brief Método ~fantasma
        *Irá destroir a classe fantasma.
        */
        ~fantasma();
        /*!
        *\brief Método: set_posicao_fantasma
        * Irá atribuir as variaveis x_fantasma e y_fantasma as coordenadas x e y (linha e coluna, respectivamente)
        * da matriz aonde se encontra o fantasma ou a nova posicao do fantasma.
        * 
        * \param x_fantasma: (int) Representa a coordenada x (linha) da matriz aonde se encontra o fantasma (ou a nova posicao)
        * \param y_fantasma: (int) Representa a coordenada y (coluna) da matriz aonde se encontra o fantasma (ou a nova posicao)
        */
        void set_posicao_fantasma(int x_fantasma, int y_fantasma);
        /*!
        *\brief Método: get_x_fantasma
        * Irá retornar a coordenada x (linha da matriz - vertical) do fantasma.
        * 
        * \return retorno: (int) Retorna um número que indica a coordenada da linha da matriz aode se
        * encontra o fantasma
        */
        int get_x_fantasma_();
        /*!
        *\brief Método: get_y_fantasma
        * Irá retornar a coordenada y (coluna da matriz - horizontal) do fantasma.
        * 
        * \return retorno: (int) Retorna um número que indica a coordenada da coluna da matriz aode se
        * encontra o fantasma
        */
        int get_y_fantasma_();
        /*!
        *\brief Método: direcao_f
        * Irá gerar um número pseudo-aleatório dentro do intervalo [0,1], que irá indicar a posição que
        * aquele fantasma vai se mover. Intervalo [0,0.25] irá para a esquerda, [0.25, 0.5] irá para cima, 
        * [0.5, 0.75] irá para direita e [0.75, 1] irá para baixo.
        * 
        * \return retorno: (char) retorna o caracter que indica qual será o proximo movimento do fantasma
        * 'a'-esquerda,'d'-direita,'w'-cima,'s'-baixo. 
        */
        char direcao_f();

};
  
#endif