Desafio em arquivo txt  (LER ARQUIVOS E ESCREVER)
Fazer um programa em C ou C++ que:
i) Abra e leia um arquivo txt contendo um texto qualquer (CARREGAR)
ii) Analise palavra por palavra do arquivo (LER)
iii) compare a palavra lida do arquivo, com lista de stopwords = [A,O,AS,OS]
iv) salve toda e qualquer palavras em um arquivo de saída, chamdado arquivoSemStopWords.txt

  A ideia geral e principal é: 
i) carrega os stopWords do arquivo stopWords.txt em uma lista de stopwords. (blacklist: arquivo texto onde colocamos as palavras bloquadas)
ii) ler aquivo  e suas palavras
iii) comparar a palavra lida com as palavras na lista de stopWords
iv) descarregar em arquivo de saída as palavras do texto que não foram stopWods (deixar só essência da coisa)

(Serão 3 arquivos stopwords .txt e  dele criar uma lista na memória, um [vetor], criar 

cultura in [a,as,e,o,os,um,uns,uma,umas]
/*Desafio em arquivo txt  (LER ARQUIVOS E ESCREVER)
Fazer um programa em C ou C++ que:
i) Abra e leia um arquivo txt contendo um texto qualquer (CARREGAR)
ii) Analise palavra por palavra do arquivo (LER)
iii) compare a palavra lida do arquivo, com lista de stopwords = [A,O,AS,OS]
iv) salve toda e qualquer palavras em um arquivo de saída, chamdado arquivoSemStopWords.txt

  A ideia geral e principal é: 
i) carrega os stopWords do arquivo stopWords.txt em uma lista de stopwords. (blacklist: arquivo texto onde colocamos as palavras bloquadas)
ii) ler aquivo  e suas palavras
iii) comparar a palavra lida com as palavras na lista de stopWords
iv) descarregar em arquivo de saída as palavras do texto que não foram stopWods (deixar só essência da coisa)

(Serão 3 arquivos stopwords .txt e  dele criar uma lista na memória, um [vetor], criar 
vou precisar de 2 arquivos o que vai ler o original, e o arquivo stopwords)
cultura in [a,as,e,o,os,um,uns,uma,umas]
(arquivos precisam estar na mesma pasta parafuncionar)
*/ 
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#include "util.h"

int main() {
    //rotina que carrega os stop words do arquivo para listaStopWords
    ifstream arquivoStopWords;
    vector<string> listaStopWords;
    arquivoStopWords.open("stopWords.txt");
    if (!arquivoStopWords) {
        cout << "Arquivo de stop words nao localizado. Programa encerrado." << endl;
        exit(0);
    } 

    //le o arquivo capturando as frases
	string linha;
	while (!arquivoStopWords.eof()) {
		getline(arquivoStopWords,linha); //lendo a linha inteira
        //colocar a linha para maiusculo
        linha = paraMaiusculoStringComRetorno(linha);

        listaStopWords.push_back(linha);
		
	}
	arquivoStopWords.close();
    //fim rotina que carrega os stop words do arquivo para listaStopWords


    //rotina que exiba os stop words inseridos na listaStopWords
    for (int i = 0; i < listaStopWords.size(); i++) {
        cout << listaStopWords[i] << ", ";
    }
    cout << "\n\n\n";
    //fim rotina que exiba os stop words inseridos na listaStopWords
    

    //rotina que abre e le arquivo original palavra por palavra
    ifstream arquivoTextoOriginal; //imput que lê
    string nomeArquivo;
    cout << "Digite caminho e nome do arquivo: ";
    cin >> nomeArquivo;
    arquivoTextoOriginal.open(nomeArquivo);

    if (!arquivoTextoOriginal) {
        cout << "Arquivo original para tratamento de stop words nao localizado. Programa encerrado." << endl;
        exit(0);
    } 

    ofstream arquivoTextoSemStopWords; //(imput é pra ler)
    arquivoTextoSemStopWords.open("arquivoTextoSemStopWords.txt");
    
    //para cada palavra lida, comparar na listaStopWords
    bool encontrou;
    string palavra;
    // O próprio '>>' faz a leitura e já serve como condição de parada segura
    while (arquivoTextoOriginal >> palavra) {
        // Aqui você analisa a palavra desejada
        palavra = paraMaiusculoStringComRetorno(palavra);
        
        //caso a palavra lida nao esteja na lista, adiciona-la no arquivo de saida
        encontrou = false;
        for (int i = 0; i < listaStopWords.size(); i++) {
            if (palavra == listaStopWords[i]) {
                encontrou = true;
                break;
            }
        }

        if (!encontrou) {
            arquivoTextoSemStopWords << palavra << " ";
        }
    }

    arquivoTextoOriginal.close();
    arquivoTextoSemStopWords.close();

    return 1;
}
