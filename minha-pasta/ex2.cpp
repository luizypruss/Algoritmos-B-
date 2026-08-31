/*Exercicio 02 - Media das notas
A partir do exercício anterior, crie uma **função com retorno** que receba o vetor de alunos e retorne a **média geral das notas**.
 que calcula a media geral das notas.*/

#include <iostream>
#include <string>
using namespace std;

const int TOTAL_ALUNOS = 5;

struct Aluno {
    string nome;
    int matricula;
    float nota;
};

void cadastrarAlunos(Aluno vet[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\n--- Cadastro do aluno " << (i + 1) << " ---" << endl;
        cin.ignore();
        cout << "Nome: ";
        getline(cin, vet[i].nome);
        cout << "Matricula: ";
        cin >> vet[i].matricula;
        cout << "Nota: ";
        cin >> vet[i].nota;
    }
}

void listarAlunos(Aluno vet[], int n) {
    cout << "\n LISTA DE ALUNOS " << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nAluno " << (i + 1) << endl;
        cout << "Nome......: " << vet[i].nome << endl;
        cout << "Matricula.: " << vet[i].matricula << endl;
        cout << "Nota......: " << vet[i].nota << endl;
    }
}


float calcularMedia(Aluno vet[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vet[i].nota; // soma += x  e' o mesmo que  soma = soma + x
    }
    float media = soma / n;
    return media;
}

int main() {
    Aluno alunos[TOTAL_ALUNOS];
    bool jaCadastrou = false;
    int opcao;

    do {
        system("cls"); //limpar
        cout << " MENU - MEDIA DAS NOTAS " << endl;
        cout << "1 - Cadastrar os 5 alunos" << endl;
        cout << "2 - Listar alunos cadastrados" << endl;
        cout << "3 - Calcular media geral das notas" << endl;
        cout << "4 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarAlunos(alunos, TOTAL_ALUNOS);
                jaCadastrou = true;
                break;
            case 2:
                if (jaCadastrou) listarAlunos(alunos, TOTAL_ALUNOS);
                else cout << "\nCadastre os alunos primeiro!" << endl;
                break;
            case 3:
                if (jaCadastrou) {
                  
                    float media = calcularMedia(alunos, TOTAL_ALUNOS);
                    cout << "\nMedia geral da turma: " << media << endl;
                } else {
                    cout << "\nCadastre os alunos primeiro!" << endl;
                }
                break;
            case 4:
                cout << "Encerrando..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
                break;
        }

        if (opcao != 4) system("pause");
    } while (opcao != 4);

    return 0;
}
