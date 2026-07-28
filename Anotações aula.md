Revisão: Debugar? Fazer o código passo a passo
em casa precisa instalar o gith para mandar para o github o código
Precisa instalar o compilador c ou c++  (Devcpp: baixa o compilador, ninjew64) g++ no terminal.(para conseguir compilar o programa. Quando da o F11 chama esse programas. 
MAPA DE DESENVOLVMENTO DE PROGRAMAÇÃO:
-ALGORITMOS A estrutura do programa, estruturas primitivas(ler, escrever, atribuir)
Programas C extensão (final do arquivo) ".c" 
C++ extensão ".cpp"

Diferença:
### C.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;
    printf("digite sua idade: ");
    scanf("%d", &idade);
    
    int anosDormidos; 
    
    // O cálculo está correto, mas vamos garantir que a divisão seja inteira limpa
    anosDormidos = idade / 3;
    
    // CORREÇÃO: Faltava a vírgula (,) antes da variável anosDormidos no printf
    printf("voce dormiu %d anos\n", anosDormidos);
    
    // CORREÇÃO: O padrão em C para indicar sucesso é retornar 0 (e faltava fechar a chave da main)
    return 0;
}

### Cpp.
//programacpp


#include <iostream>

using namespace std;

int main(){
    int idade;
    cout << "Digite sua idade";
    cin >> idade;
    int anosDormidos;
    anosDormidos = (int)idade/3;
    cout << "voce ja dormiu" << anosDormidos <<"anos";
return 1;

}


### OBS: return 0 é como o robô dizer: "Chefe, terminei tudo certinho e deu tudo certo!" (Sucesso).

return 1 é como o robô dizer: "Terminei, mas aconteceu algum problema no meio do caminho" (Erro ou alerta).
