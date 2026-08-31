// Cadastro simples de alunos ex 1
#include <iostream>
#include <string>

using namespace std;

const int TOTAL_ALUNOS = 5;

struct Aluno {
    string nome;
    int matricula;
    float nota;
};

// Função VOID cadastro dos 5 alunos
void cadastrarAlunos(Aluno vet[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\n--- Cadastro do aluno " << (i + 1) << " ---" << endl;
        
        cin.ignore(); // Limpa o buffer do teclado antes do getline
        cout << "Nome: ";
        getline(cin, vet[i].nome);
        
        cout << "Matricula: ";
        cin >> vet[i].matricula;
        
        cout << "Nota: ";
        cin >> vet[i].nota;
    }
}

// VOID  listando os alunos cadastrados
void listarAlunos(Aluno vet[], int n) {
    cout << "\n LISTA DE ALUNOS" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nAluno " << (i + 1) << endl;
        cout << "Nome......: " << vet[i].nome << endl;
        cout << "Matricula.: " << vet[i].matricula << endl;
        cout << "Nota......: " << vet[i].nota << endl;
    }
}

int main() {
    Aluno alunos[TOTAL_ALUNOS];
    bool jaCadastrou = false;
    int opcao;

    do {
        system("cls"); //limpar 
        
        cout << " MENU - CADASTRO DE ALUNOS" << endl;
        cout << "1 - Cadastrar os 5 alunos" << endl;
        cout << "2 - Listar alunos cadastrados" << endl;
        cout << "3 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarAlunos(alunos, TOTAL_ALUNOS);
                jaCadastrou = true;
                break;
                
            case 2:
                if (jaCadastrou) {
                    listarAlunos(alunos, TOTAL_ALUNOS);
                } else {
                    cout << "\nCadastre os alunos primeiro (opcao 1)!" << endl;
                }
                break;
                
            case 3:
                cout << "Encerrando..." << endl;
                break;
                
            default:
                cout << "Opcao invalida!" << endl;
                break;
        }

        if (opcao != 3) {
            system("pause"); 
        }

    } while (opcao != 3);

    return 0;
}
