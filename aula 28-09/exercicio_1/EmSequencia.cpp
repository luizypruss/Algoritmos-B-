//fazer um programa e dentro dele um método que receba uma palavra (do tipo string) e uma letra (do tipo char).
//  O método deve contar quantas vezes a letra aparece na palavra e exibir essa quantidade;

#include <iostream>
#include <string>

using namespace std;

void contadorDeLetra (string palavra, char letra) {
    int contador = 0; 
    int posicao = 0;  //(posição 0)
    
    while (posicao < palavra.length()) {
        
        
        char letraAtual = palavra[posicao];

        if (letraAtual == letra) { // valida se é a letra a
            contador = contador + 1;
        }

        posicao = posicao + 1;
    }


    cout << "A letra aparece: " << contador << " vez(es)." << endl;

}

int main() {
    
    contadorDeLetra("abacate", 'a');

    return 0;
}

