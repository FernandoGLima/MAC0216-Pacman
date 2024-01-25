#ifndef Labirinto
#define Labirinto
#include <iostream>
#include <fstream>
#include "arquivo.h"
#define MAX 256

class labirinto{
    private:
        int cont, i, j, qntd_fantasmas, linhas, colunas;
        int pos_X_pacm, pos_Y_pacm;
        char linhas_arq[MAX];

    public:
        /*!
        *\brief Método: labirinto
        *Irá criar a classe labirinto
        */
        labirinto();
        /*!
        *\brief Método ~labirinto
        *Irá destruir a classe labirinto
        */      
        ~labirinto();
        /*!
        *\brief Atributo publico: tabuleiro
        *  É uma matriz que irá conter o labirinto.
        */
        char tabuleiro[MAX][MAX];
        /*!
        \brief Método: le_tabuleiro
        * Irá ler as linhas do arquivo que contém o labirinto e atribuir a uma matriz o labirinto
        *
        * \param arq: (Arquivo) Um ponteiro do tipo arquivo que irá apontar para o arquivo que deseja-se abrir
        */
        void le_tabuleiro(Arquivo *arq);
        /*!
        * \brief Método: set_pacm
        *Irá calcular qual deve ser a posição inicial do pacman e colocar o pacman lá
        */
        void set_pacm();
        /*!
        *\brief Método: conta_fantasma
        * Irá contar a quantidade de fantasmas presentes no labirinto
        * 
        * \return retorno: (int) Retorna o número que representa a quantidade de fantasmas presentes no labirinto
        */
        int conta_fantasmas();
        /*!
        *\brief Método: get_linhas
        *Irá retornar a quantidade de linhas da matriz que contém o labirinto
        *
        *\return retorno: (int) a quantidade de linhas da matriz que cóntem o labirinto.
        */
        int get_linhas();
        /*!
        *\brief Método: get_colunas
        *Irá retornar a quantidade de colunas da matriz que contém o labirinto
        *
        *\return retorno: (int) a quantidade de colunas da matriz que cóntem o labirinto.
        */
        int get_colunas();
        /*!
        *\brief Método: get_posicao_inicia_x_pacs
        *Irá retornar a coordenada x(linha da matriz) da posição inicial aonde se encontra o pacman
        *
        * \return retorno: (int) Retorna um número que reprsenta a coordenada x (linha da matriz) aonde
        * se encontra o pacman.
        */
        int get_posicao_inicial_X_pacs();
        /*!
        *\brief Método: get_posicao_inicia_y_pacs
        *Irá retornar a coordenada y(coluna da matriz) da posição inicial aonde se encontra o pacman
        *
        * \return retorno: (int) Retorna um número que reprsenta a coordenada y (coluna da matriz) aonde
        * se encontra o pacman.
        */
        int get_posicao_inicial_y_pacs();
};



#endif