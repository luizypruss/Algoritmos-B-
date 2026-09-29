#include <iostream>
#include "data.h" //módulo de data

using namespace std;

int main() {
    
    cout << "Testando 25/12/2026: ";     // Teste 1: Uma data correta
    validarData("25", "12", "2026");

    
    cout << "Testando 30/02/2026: "; // Teste 2: Fevereiro com dias a mais (Invalida)
    validarData("30", "02", "2026");

    return 0;
}
