#include "Pessoa.h"

Pessoa::Pessoa(int diaN, int mesN, int anoN){
    dia = diaN;
    mes = mesN;
    ano = anoN;
    idade = -1;
}

void Pessoa::calcula_idade(int diaAT, int mesAT, int anoAT){
    if((mes == mesAT && dia >= diaAT) || mes > mesAT)
        idade = anoAT - ano;
    else
        idade = anoAT - ano -1;
}

int Pessoa::info_idade(void){
    return idade;
}


