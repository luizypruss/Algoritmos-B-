#include <iostream>
#include <string>
using namespace std;

struct Aluna {
    int matricula;
    string nome;
    float nota;
};

int main() {
    Aluna aluno;

    cout << "Matricula: ";
    cin >> aluno.matricula;

    cout << "Nome: ";
    cin.ignore();
    getline(cin, aluno.nome);

    cout << "Nota: ";
    cin >> aluno.nota;

    cout << "\n--- DADOS ---\n";
    cout << "Matricula: " << aluno.matricula << endl;
    cout << "Nome: " << aluno.nome << endl;
    cout << "Nota: " << aluno.nota << endl;

    return 0;
}
