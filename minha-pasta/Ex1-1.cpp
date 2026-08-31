#include <iostream>
#include <string>

using namespace std;

const int TOTAL_ALUNOS = 5;

struct Aluno {
    string nome;
    int matricula;
    float nota;
};

int main() {
    Aluno alunos[TOTAL_ALUNOS];
    int n = 0;
    int op;

    do {
        cout << "1 - Cadastrar aluno" << endl;
        cout << "2 - Listar alunos" << endl;
        cout << "3 - Sair" << endl;
        cin >> op;

        if (op == 1) {
            if (n < TOTAL_ALUNOS) {
                cin.ignore(); // Limpa o buffer para o getline funcionar direito
                cout << "Nome: ";
                getline(cin, alunos[n].nome);
                
                cout << "Matricula: ";
                cin >> alunos[n].matricula;
                
                cout << "Nota: ";
                cin >> alunos[n].nota;
                
                n++;
            } else {
                cout << "Limite de 5 alunos atingido!" << endl;
            }
        }

        if (op == 2) {
            for (int i = 0; i < n; i++) {
                cout << "Matricula: " << alunos[i].matricula 
                     << " - Nome: " << alunos[i].nome 
                     << " - Nota: " << alunos[i].nota << endl;
            }
        }

    } while (op != 3);

    return 0;
}
