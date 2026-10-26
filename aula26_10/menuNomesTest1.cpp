#include <algorithm>
#include <iostream>
#include <fstring>
#include <limits>
#include <string>
#include <vector>
 // todo o programa precisamos de um banco e o nosso nomes.txt
using namespace std;

void inserir(vector<string>& nomes) {
    string nome;

    cout << "Digite o nome: ";
    getline(cin, nome);

    if (nome.empty()) { // nome vazio
        cout << "O nome nao pode ser vazio.\n"; // só pode inserir se somente se estuver na estrutura
        return;
    }

    nomes.push_back(nome);
    cout << "Nome inserido com sucesso.\n";
}

void listar(const vector<string>& nomes) { // quando eu altero vetor usa o & 
    if (nomes.empty()) {
        cout << "Nenhum nome cadastrado.\n";
        return;
    }

    cout << "\nNomes cadastrados:\n";
    for (int i = 0; i < static_cast<int>(nomes.size()); i++) {
        cout << i + 1 << " - " << nomes[i] << "\n";
    }
}

void pesquisar(const vector<string>& nomes) {
    string nome;

    cout << "Digite o nome que deseja pesquisar: ";
    getline(cin, nome);

    vector<string>::const_iterator encontrado = find (nomes.begin(), nomes.end(), nome); // encontra( olha do inicio ao fim do vetor nomes) no vetor nome no inico ao fim o vector nome, o o encontrado é diferente do fim da estrutura é encontrado
    // :const_iterator variável iteradora
    if (encontrado != nomes.end()) {
        cout << "Nome encontrado.\n";
    } else {
        cout << "Nome nao encontrado.\n";
    }
}

void remover(vector<string>& nomes) { // para remover precisa encontrar antes, tem o & comercial pe se eu remover tenho que alterar retorno
    string nome;

    cout << "Digite o nome que deseja remover:";
    getline(cin, nome);

    vector<string>::iterator encontrado = find(nomes.begin(), nomes.end(), nome); //se o encontrado é diferente do fim

    if (encontrado != nomes.end()) {
        nomes.erase(encontrado);
        cout << "Nome removido com sucesso.\n";
    } else {
        cout << "Nome nao encontrado.\n";
    }
}
// toda vez que coloca no vetor bota no arquivo, turou do vetor tira do arquivo, ao abrir o arquivo precisa perguntar se tem gente no arquivo (teremos que refatorar)

void carregarBase (string nomeBase,vector<string>&nomes){
    ifstrem arquivo; // abrindo o arquivo  nomEBase
    arquivo.open (nomeBase) //abrindo o arquivo e colocando no vetor, se não existe o arquivo temos que criar

    if(!arquivo){ // abriu não encontrou return
        return;

    }
    // le o arquivo captura as frases
    string linha;
    while (arquivo.eof()){ // enquanto um arquivo não chegar no fim


    }

    arquivo.close(); //fechou só vai funcionar o close se o arquivo existir

}
int main() {
    vector<string> nomes;
    int opcao;
    string nomeBase = "base.csv";

    // carregar a base de dados para a estrutura, sempre que eu alterar o vetor preciso alterar o arquivo
    do {
        cout << "\n===== MENU =====\n";
        cout << "1 - Inserir nome\n";
        cout << "2 - Listar nomes\n";
        cout << "3 - Pesquisar nome\n";
        cout << "4 - Remover nome\n";
        cout << "5 - Sair\n";
        cout << "Escolha uma opcao: ";
        if (!(cin >> opcao)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Digite um numero entre 1 e 5.\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        switch (opcao) {
            case 1:
                inserir(nomes);
                //atualizar base de dados
                break;
            case 2:
                listar(nomes);
                break;
            case 3:
                pesquisar(nomes);
                break;
            case 4:
                remover(nomes);
                //atualizar a base de dados
                break;
            case 5:
                cout << "Programa encerrado.\n";
                break;
            default:
                cout << "Opcao invalida.\n";
        }
    } while (opcao != 5);

    return 0;
}
