#ifndef Personagem
#define Personagem
#include <fstream>
#include <iostream>
#define MAX 256


class personagem{
    protected:
    int linhas_table, colunas_table, posicao_X_ant, posicao_Y_ant, aux1, aux2, x_novo, y_novo;  
    char direcao, tabs_copia[MAX][MAX], tabs_auxiliar[MAX][MAX];

    public:
    /*!
    *\brief Método: personagem
    *Irá criar a classe personagem.
    */    
    personagem();
    /*!
    *\brief Método: ~personagem
    * Irá destruir a classe personagem.
    */
    ~personagem();
    /*!
    *\brief Método: set_tabuleiro_principal
    * Irá atribuir a uma matriz o labirinto, esta matriz sera utilizada para a movimentação dos personagens
    * Além disso irá atribuir a uma matriz secundaria também o labirinto, porém sem os personagens, esta
    * será útil na implementação dos movimentos do personagem
    * 
    * \param linhas_table: (int) Número que representa a quantidade de linhas do labirinto
    * \param colunas_table: (int) Número que representa a quantidade de colunas do labirinto.
    * \param tabs_copia: (char [max][max]) que representa uma matriz que contém o labirinto.
    */
    void set_tabuleiro_principal(int linhas_table, int colunas_table, char tabs_copia[MAX][MAX]);
    /*!
    *\brief Método: anda_personagem
    * Será responsável pela movimentação do pacman,irá verificar caso haja um choque com o fantasma ou com 
    * a parade ou caso o pacman coma um pac-dot.
    * 
    * \param posicao_X_ant: (int) Representa a coordenada da linha da matriz aonde estava o pacman antes de se movimentar
    *\param posicao_Y_ant: (int) Representa a coordenada da coluna da matriz aonde estava o pacman antes de se movimentar
    * \param direcao: (char) Caracter que representa qual direcao o pacman deve se mover.
    * 
    * \return retorno: (int) Retorna um número que indica qual foi a situação que ocorreu com o pacman
    * retorna (0) se ele chocou-se com a parede, (1) se movimentou para um espaço vazio, (2) se chocou com 
    * um fantasma e (3) se comeu um pac-dot
    */
    int anda_personagem(int posicao_X_ant, int posicao_Y_ant, char direcao);
    /*!
    *\brief Atributo publico: tabuleiro_principal
    * Matriz que contém o labirinto e que servirá para movimentar os personagens.
    */
    char tabuleiro_principal[MAX][MAX];
    /*!
    *\brief Método: get_x_novo
    * Irá retornar a coordenada da linha da matriz aonde se encontra o fantasma ou o pacman (depende do main).
    * 
    * \return retorno: (int) Número que representa a coordenada da linha da matriz aonde se encontra um personagem
    */
    int get_x_novo();
    /*!
    *\brief Método: get_y_novo
    * Irá retornar a coordenada da coluna da matriz aonde se encontra o fantasma ou o pacman (depende do main).
    * 
    * \return retorno: (int) Número que representa a coordenada da coluna da matriz aonde se encontra um personagem
    */
    int get_y_novo();
    /*!
    \brief Método: anda_fantasma
    * Será responsável pela movimentação do fantasma, e irá verificar se houve choque com o pacman, com a parede
    * ou se movimentou normal
    * 
    *\param posicao_X_ant: (int) Representa a coordenada da linha da matriz aonde estava o fantasma antes de se movimentar
    *\param posicao_Y_ant: (int) Representa a coordenada da coluna da matriz aonde estava o fantasma antes de se movimentar
    *\param direcao: (char) Caracter que representa qual direcao o fantasma deve se mover.
    * 
    * \return retorno: (int) Retorna um inteiro que indica qual situação ocorreu após movimentar o fantasma,
    * retorna (0) se ele bateu em uma parede, (1) se ele movimentou-se normalmente e (2) se ele bateu no pacman
    */
    int anda_fantasma(int posicao_X_ant, int posicao_Y_ant, char direcao);
    /*!
    *\brief Método: retira_pac_dot
    * Irá retirar um pac-dot do tabuleiro auxiliar indicando que o pacman ja comeu aquele pac-dot
    * 
    *\param posicao_X_ant: (int) Representa a coordenada da linha da matriz do pac-dot comido.
    *\param posicao_Y_ant: (int) Representa a coordenada da coluna da matriz do pac-dot comido 
    */
    void retira_pac_dot(int posicao_X_ant, int posicao_Y_ant);

};

#endif