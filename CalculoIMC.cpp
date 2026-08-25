#include <limits>
#include <iostream> //equivalente ao stdio.h do C
#include <string>   //equivalente ao string.h do C
#include <vector>

using namespace std;

#include "meusTipos.h"

int main() {
    IndiceMassaCorporal pessoaTMP;
    vector<IndiceMassaCorporal> atletas;
    int quantidadeAtletas;

    cout << "Quantos atletas quer monitorar o IMC? ";
    cin >> quantidadeAtletas;
    
    // LIMPEZA AQUI: Limpa o '\n' deixado pela leitura da quantidade de atletas
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //rotina de persistencia em RAM 
  
    for (int i = 0; i < quantidadeAtletas; i++ ) {                               //Cria um laço de repetição. Ele vai começar com o contador i valendo 0 e vai repetir tudo o que está dentro dele enquanto i for menor que a quantidade de atletas que o usuário escolheu. A cada repetição, aumenta i em 1 (i++).
        cout << "Nome atleta: ";
        getline(cin, pessoaTMP.nome);                                           // Lê o nome completo digitado (incluindo espaços, como "João Silva") e guarda dentro do campo nome da nossa ficha temporária (pessoaTMP.nome).

        
        do {                                                                   //Inicia um bloco de repetição obrigatório (faça). Tudo o que estiver aqui dentro vai rodar pelo menos uma vez. Ele serve para validar se a altura digitada está correta.
            cout << "Altura (m) : ";                                           //Mostra a mensagem pedindo a altura na tela.
            cin >> pessoaTMP.altura;                                           //Lê o número que o usuário digitou e guarda dentro do campo altura da ficha temporária (pessoaTMP.altura).
            if (pessoaTMP.altura < 0.30 || pessoaTMP.altura > 2.70) {         //Teste lógico: Se (if) a altura for menor que 0.30 metros OU (||) a altura for maior que 2.70 metros, significa que o usuário digitou algo absurdo.
                cout << "Altura invalida. Redigite.....\n";                   //Se o teste acima for verdadeiro, exibe essa mensagem de erro na tela avisando que a altura está errada. O \n pula uma linha.
            }
        } while (pessoaTMP.altura < 0.30 || pessoaTMP.altura > 2.70);         //Condição do laço: Ele diz ao programa "volte para o do e peça a altura novamente enquanto a altura digitada for inválida 
                                                                              //(menor que 0.30 ou maior que 2.70)". Se a altura for válida (ex: 1.75), ele sai do laço e continua o programa.

        cout << "Peso (kg)   :";                                             //Mostra a mensagem pedindo o peso do atleta na tela.
        cin >> pessoaTMP.peso;                                               //Lê o valor digitado e guarda dentro do campo peso da ficha temporária (pessoaTMP.peso).

        // LIMPEZA AQUI: Limpa o '\n' deixado pela leitura do peso antes do próximo getline
        cin.ignore(numeric_limits<streamsize>::max(), '\n');                  //Limpa novamente o "Enter" (\n) que sobrou na memória após a leitura do peso (número). Isso garante que, se o laço for rodar de novo para o próximo atleta, o getline do nome funcione perfeitamente.

        atletas.push_back( pessoaTMP );                                       //Pega a ficha temporária (pessoaTMP) que agora está totalmente preenchida com nome, altura e peso válidos, e a adiciona (empurra para o fim) na lista atletas.
    }
    
    //rotina de calculo do IMC = peso / (altura × altura)
    float imc;                                                                //Cria uma variável com casas decimais chamada imc para guardar o resultado do cálculo matemático.
    
    for (int i = 0; i < atletas.size(); i++) {                                //Abre um novo laço for para exibir os resultados. Ele vai de 0 até o tamanho atual da lista de atletas (atletas.size()). Se você cadastrou 3 atletas, ele vai rodar 3 vezes.
        cout << "Nome atleta: " << atletas[i].nome << endl;                   //Mostra na tela o nome do atleta que está guardado na posição [i] da lista. O endl serve para pular de linha.
        //rotina de calculo do imc
        imc = atletas[i].peso / (atletas[i].altura * atletas[i].altura);     //Realiza o cálculo do IMC do atleta da posição [i]. A fórmula é: peso dividido por altura vezes altura. O resultado é guardado na variável imc.
        cout << "IMC        : " << imc << endl;                              //exibe o resultado do cálculo do IMC na tela e pula uma linha.
    }

    return 1;
}


## "meusTipos.h"
  typedef struct {
    string nome;
    float altura;  //metros
    float peso;    //kilos
} IndiceMassaCorporal;
