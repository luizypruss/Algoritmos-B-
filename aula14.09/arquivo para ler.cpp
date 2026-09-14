#include <iostream>
#include <fstream> // precisa dessa biblioteca para ler arquivo
#include <string>
using namespace std; 

int main() {
    //abrir um arquivo texto e exibir seu conteudo na tela
    //lendo qualquer arquivo txt
    //solicita pro usuario nome do arquivo origem
	//char nomeArquivo[200];
    string nomeArquivo;
	cout << "Informe nome do arquivo que quer exibir na tela: ";
	cin >> nomeArquivo;
    
    //abrir arquivo para leitura
	//https://www.tutorialspoint.com/cplusplus/cpp_files_streams
	ifstream procuradorArquivo; //tipo de arquivo para leitura o i no início input 
    procuradorArquivo.open(nomeArquivo); 

    if (!procuradorArquivo) {
        cout << "Arquivo não localizado. Programa encerrado." << endl;
        exit(0);
    } 
 
	//le o arquivo capturando as frases
	string linha;
	while (!procuradorArquivo.eof()) { // enquanto o procurador não chegar no final do arquivo eof (endoffile)
		getline(procuradorArquivo,linha); //lendo a linha inteira
		// procuradorArquivo >> frase; //lendo palavra por palavra da linha 
		cout << linha << endl;
		//tratar a linha e extrair dados dela
	}

	procuradorArquivo.close();

    return 1;
}
