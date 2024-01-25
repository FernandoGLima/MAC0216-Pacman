#ifndef arquivo
#define arquivo
#include <iostream>
#include <fstream>
#define MAX 256

class Arquivo{
    private:
    
    public:
        /*!
        *\brief Atributo público: arq
        * É um objeto da classe fstream que é responsável pela abertura do arquivo.
        */
        std::fstream arq;
        /*!
        *\brief Método: Arquivo
        *Cria a classe arquivo
        */
        Arquivo();
        /*!
        *\brief Método: ~Arquivo
        *Destroi a classe arquivo.
        */
        ~Arquivo();
        /*!
        *\brief Método: abrearquivo
        * Irá abrir o arquivo passado na linha de comando.
        * 
        * \param argc: (int) Um número que representa a quantidade de argumentos com os quais a função main
        * foi chamada na linha de comando.
        * \param argv: (char**) É um vetor de strings, a string contém o parametro passado na linha de comando
        */
        void abrearquivo(int argc, char **argv);
        /*!
        *\brief Método: fecha_arquivo
        * Irá fechar o arquivo passado na linha de comando.
        */
        void fecha_arquivo();
};
#endif