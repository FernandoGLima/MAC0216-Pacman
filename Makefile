all: 	
		g++ -Wall -c -o Pacman.o Pacman.cpp
		g++ -Wall -c -o arquivo.o arquivo.cpp
		g++ -Wall -c -o Personagem.o Personagem.cpp
		g++ -Wall -c -o Partida.o Partida.cpp
		g++ -Wall -c -o Labirinto.o Labirinto.cpp
		g++ -Wall -c -o Fantasma.o Fantasma.cpp
		ar -rcv libclasses.a Pacman.o Partida.o Personagem.o arquivo.o Labirinto.o Fantasma.o
		g++ -Wall -c -o ep4_main.o ep4_main.cpp
		g++ -Wall -o ep4_main ep4_main.cpp libclasses.a -lgtest -lpthread

tests:
		g++ -Wall -c -o Pacman.o Pacman.cpp
		g++ -Wall -c -o arquivo.o arquivo.cpp
		g++ -Wall -c -o Personagem.o Personagem.cpp
		g++ -Wall -c -o Partida.o Partida.cpp
		g++ -Wall -c -o Labirinto.o Labirinto.cpp
		g++ -Wall -c -o Fantasma.o Fantasma.cpp
		ar -rcv libclasses.a Pacman.o Partida.o Personagem.o arquivo.o Labirinto.o Fantasma.o
		g++ -Wall -DFLAG_TESTE -c -o ep4_main.o ep4_main.cpp
		g++ -Wall -DFLAG_TESTE -o ep4_main ep4_main.cpp libclasses.a -lgtest -lpthread

doc:
		doxygen Doxyfile

clean:
		rm -rf *.o