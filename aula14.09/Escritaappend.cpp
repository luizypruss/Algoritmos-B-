#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

#include "../00-Utilidades/meusMetodos.h"

int main() {
    //solicita pro usuario nome do arquivo origem
    string nomeArquivo;
	cout << "Informe nome do arquivo que recebera os nomes: ";
	cin >> nomeArquivo;
	fflush(stdin);
	//esse arquivo toda vez que roda pega os já existentes 
    //abrir arquivo para escrita
	ofstream procuradorArquivo; //escrever na variável procuradorArquivo
    //arquivo sendo aberto para append ou inserir no final
    procuradorArquivo.open(nomeArquivo, ios::out | ios::app); // abriu e entre esse tem um loop ou para ler ou para escrever para pendar porque tem as diretivas ios::out eios::app
 
	string nome;
	while (true) {
		cout << "Digite um nome para guardar no arquivo ou fim para encerrar: ";
		getline(cin,nome);
		fflush(stdin); //descarregando o teclado

		nome = paraMaiusculo(nome); //comando na biblioteca 
		if (nome == "FIM"){ // se o nome tiver palavra fim, pegando o nome e jogando para dentro do procurador, dentro do arquivo, ele vai para o arquivo quando eu fecho ou quando do flush (descarga)
			break;
		}
		procuradorArquivo << nome << endl;
	}
	procuradorArquivo.close(); //fechou diz pro sistema pode deixar os outros mexer
    return 1;
}
