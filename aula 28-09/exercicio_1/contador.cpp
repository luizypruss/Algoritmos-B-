#include "contador.h" // arquivo criado
#include <iostream>

using namespace std;

void contadorDeLetra(string palavra, char letra) {
    int contador = 0; 
    int posicao = 0; 
    
    while (posicao < palavra.length()) { //length tamanho da palavra 
        char letraAtual = palavra[posicao];

        if (letraAtual == letra) { 
            contador = contador + 1;
        }

        posicao = posicao + 1;
    }

    cout << "Essa letra aparece: " << contador << " vezes." << endl;
}
