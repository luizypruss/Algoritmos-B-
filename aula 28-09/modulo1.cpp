//modulo1.cpp
#include <iostream>
#include <string>
#include <ctime>
#define TAM 100000

#include "util.h"

using namespace std;

int main() {
    int vetor[TAM];

    popularVetor(vetor, TAM);
    exibirVetor(vetor, TAM);

    return 1;
}
