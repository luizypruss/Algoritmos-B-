#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct {
    int codigo;
    string anoPublicacao;
    int quantidadePaginas;
} Livro;

int main() {
    int opcao;
    Livro umLivro;
    vector<Livro> lista;

    do {
        cout << "MENU" << endl;
        cout << "1 - Cadastrar livro" << endl;
        cout << "2 - Exibir livros com 100 pg ou mais" << endl;
        cout << "3 - Sair" << endl;
        cin >> opcao;

        switch (opcao) {
            case 1 :
                cout << "Cadastrando um livro.... " << endl;
                cout << "Codigo do livro: ";
                cin >> umLivro.codigo;
                cout << "Ano publicacao [aaaa]: ";
                cin >> umLivro.anoPublicacao;
                cout >> "Quantas paginas: ";
                cin >> umLivro.quantidadePaginas;

                lista.push_back(umLivro);
                break;
            case 2 :
                cout << "Livros com mais de 100 pags.... " << endl;
                for (int i = 0; i < lista.size(); i++) {
                    if (lista[i].quantidadePaginas >= 100) {
                        cout << "Codigo: " << lista[i].codigo << endl;
                        cout << "Ano publicacao: " << lista[i].anoPublicacao << endl;
                        cout << "Qtd paginas: " << lista[i].quantidadePaginas << endl;
                        cout << "-------------------" << endl;
                    }
                }
                break;
            case 3 : 
                cout << "Sistema encerrado..." << endl;
                break;
            default :
                cout << "Opcao invalida.... " << endl;    
        }
    } while (opcao != 3);
    return 1;
}
