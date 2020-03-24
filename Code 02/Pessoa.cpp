#include "Pessoa.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

Pessoa::Pessoa(int diaN, int mesN, int anoN,const char *nomeN){
    inicializa(diaN,mesN,anoN,nomeN);
}

Pessoa::Pessoa(){
    inicializa(0,0,0,0);
}

void Pessoa::inicializa(int diaN, int mesN, int anoN,const char *nomeN){
    dia = diaN;
    mes = mesN;
    ano = anoN;
    if(nomeN)
        strcpy(nome,nomeN);

}
void Pessoa::calcula_idade(int diaAT, int mesAT, int anoAT){
    if((mes == mesAT && dia >= diaAT) || mes > mesAT)
        idade = anoAT - ano;
    else
        idade = anoAT - ano -1;
    cout<<"Idade de "<<nome<<" seria "<<idade<<endl;
}

int Pessoa::info_idade(void){
    return idade;
}


