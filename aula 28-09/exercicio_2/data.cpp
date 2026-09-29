#include "data.h" //arquivo criado  com arquivo que validei
#include <iostream>
#include <string>

using namespace std;

void validarData(string dia, string mes, string ano) {
    

    string limiteDias = "31"; //numero total de dias que o mês consegue ter

    
    if (mes == "04" || mes == "4" || mes == "06" || mes == "6" ||  //meses que limite é "30"
        mes == "09" || mes == "9" || mes == "11") {
        limiteDias = "30";
    }
    
    else if (mes == "02" || mes == "2") { //condição só para o mês de fevereiro que vai apenas até 28 
        limiteDias = "28";
    }

    
    if (mes > "12" || mes < "01" || ano == "0" || ano == "0000" || dia < "01") { // validações (Mês inválido ou Ano zerado)
        cout << "DATA INVALIDA" << endl;
        return; 
    }

    
    if (dia <= limiteDias) { // Se o dia for menor ou igual ao limite permitido
        cout << "DATA VALIDA" << endl;
    } else {
        cout << "DATA INVALIDA" << endl;
    }
}
