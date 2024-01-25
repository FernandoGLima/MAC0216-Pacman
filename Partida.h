#ifndef Partida
#define Partida
#include <fstream>
#include <iostream>
#define MAX 256

class partida{
    private:
        int qntd_pac_dot_comidos, total_pac, aux_linha, aux_coluna, linha_partida, coluna_partida, status;
        char tabuleiro_match[MAX][MAX], direction_match;

    public:

    /*!
    *\brief Método: partida
    *Cria a classe partida ja instanciando o número 0 para as variaveis, uma que representa o total de pac-dots
     *no labirinto e para a outra variavel que representa o total de pac-dots comidos.
    */
    partida();
    /*!
    *\brief Método: ~partida
    * Destroi a classe partida
    */
    ~partida();
    /*!
    *\brief Método: printa_tabuleiro_Real
    * Irá imprimir na saída padrão o tabuleiro com a posição dos personagens atualizada.
    * 
    * \param tabuleiro_match: (char) Uma matriz que contém o labirinto com os personagens.
    * \param linha_partida: (int) número que representa a quantidade de linhas da matriz.
    */
    void printa_tabuleiro_Real(char tabuleiro_match[MAX][MAX], int linha_partida);
    /*!
    *\brief Método: aumenta_pac_dot
    * Irá incrementar em uma unidade a quantidade de pac-dots comidos pelo pacman.
    */
    void aumenta_pac_dot();
    /*!
    *\brief Método: total_qnts_pac_dot
    * Irá percorrer todo o tabuleiro e contar a quantidade de pac-dots tem em tal partida.
    * 
    * \param tabuleiro_match: (char) A matriz que contém o labirinto.
    * \param linha_partida: (int) Número que representa a quantidade de linhas da matriz.
    * \param coluna_partida: (int) Número que representa a quantidade de colunas da matriz
    * \return retorno: (int) Retorna a quantidade de pac-dots presentes no tabuleiro.
    */
    int total_qnts_pac_dot(char tabuleiro_match[MAX][MAX], int linha_partida, int coluna_partida);
    /*!
    *\brief Método: printa_resultado
    * Após encerrado o jogo, seja por toque de fantasma-pacman ou por o pacman ter comido todos os
    * pac-dots, irá printar a matriz resultado do fim do jogo. Irá também imprimir uma mensagem ou acusando
    * game-over e a quantidade total de pac-dots obtidos ou uma mensagem de parabéns e a quantidade total de
    * pac-dots obtidos.
    * \param status: (int) Esse número indica se o pacman está vivo (status=1) ou morto (status=0).
    * \param tabuleiro_match: (char) A matriz que contém o labirinto e os personagens.
    * \param linha_partida: (int) Número que representa a quantidade de linhas da matriz.
    */
    void printa_resultado(int status, char tabuleiro_match[MAX][MAX], int linha_partida);
    /*!
    *\brief devolve_direcao
    * Irá imprimir na saída padrão(tela) a mensagem perguntando qual será o próximo movimento do usuário
    * dando as instruções (a - esquerda, d- direita, w - cima, s - baixo) e receberá da entrada padrão(teclado)
    * o caracter que indica o próximo movimento.
    * 
    * \return retorno: (char) Devolve o caracter que indica o próximo movimento do pacman.
    */
    char devolve_direcao();
};


#endif