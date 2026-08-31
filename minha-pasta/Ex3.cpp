/*Exercicio 03 - Busca por matricula
  encontrado (ou -1 se nao encontrar).
 */

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
    cout << "\ LISTA DE ALUNOS " << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nAluno " << (i + 1) << endl;
        cout << "Nome......: " << vet[i].nome << endl;
        cout << "Matricula.: " << vet[i].matricula << endl;
        cout << "Nota......: " << vet[i].nota << endl;
    }
}

float calcularMedia(Aluno vet[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) soma += vet[i].nota;
    return soma / n;
}

// Percorre o vetor procurando a matricula. Assim que encontra,
// "return i" ja encerra a funcao na hora, devolvendo o indice.
// Se o for terminar e nunca tiver encontrado, cai no "return -1" de fora.
int buscarPorMatricula(Aluno vet[], int n, int matricula) {
    for (int i = 0; i < n; i++) {
        if (vet[i].matricula == matricula) {
            return i; // achou! devolve a posicao e sai da funcao
        }
    }
    return -1; // nao achou
}

int main() {
    Aluno alunos[TOTAL_ALUNOS];
    bool jaCadastrou = false;
    int opcao;

    do {
        system("cls");
        cout << "===== MENU - BUSCA POR MATRICULA =====" << endl;
        cout << "1 - Cadastrar os 5 alunos" << endl;
        cout << "2 - Listar alunos cadastrados" << endl;
        cout << "3 - Calcular media geral das notas" << endl;
        cout << "4 - Buscar aluno por matricula" << endl;
        cout << "5 - Sair" << endl;
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
                if (jaCadastrou)
                    cout << "\nMedia geral: " << calcularMedia(alunos, TOTAL_ALUNOS) << endl;
                else
                    cout << "\nCadastre os alunos primeiro!" << endl;
                break;
            case 4:
                if (jaCadastrou) {
                    int matriculaBuscada;
                    cout << "\nDigite a matricula: ";
                    cin >> matriculaBuscada;

                    int indice = buscarPorMatricula(alunos, TOTAL_ALUNOS, matriculaBuscada);

                    if (indice != -1) {
                        cout << "\nAluno encontrado!" << endl;
                        cout << "Nome......: " << alunos[indice].nome << endl;
                        cout << "Matricula.: " << alunos[indice].matricula << endl;
                        cout << "Nota......: " << alunos[indice].nota << endl;
                    } else {
                        cout << "\nNenhum aluno com essa matricula." << endl;
                    }
                } else {
                    cout << "\nCadastre os alunos primeiro!" << endl;
                }
                break;
            case 5:
                cout << "Encerrando..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
                break;
        }

        if (opcao != 5) system("pause");
    } while (opcao != 5);

    return 0;
}
