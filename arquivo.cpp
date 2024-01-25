#include "arquivo.h"
#define MAX 256

using namespace std;

        fstream arq;

        void Arquivo::abrearquivo(int argc, char **argv){
            arq.open(argv[1], ios::in);
        }

        void Arquivo::fecha_arquivo(){
            arq.close();
        } 

        Arquivo::Arquivo(){
        }
        
    