#include "Pessoa.hpp"
#include <time.h>
#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

Pessoa::Pessoa(int diaN,int mesN,int anoN,const char *nomeN){
    inicializar(diaN,mesN,anoN,nomeN);
}

Pessoa::Pessoa(int idN){
    id = idN;
}

Pessoa::Pessoa(){
}

Pessoa::~Pessoa(){
    free(nome);
}
void Pessoa::setNome(const char* nomeN){
    nome = (char*) malloc(sizeof(char) *strlen(nomeN));
    strcpy(nome,nomeN);
}

void Pessoa::printInfor(){
    cout<<nome<<"\n"<<"Nascimento : "<<nascimento[0]<<"/"<<nascimento[1]<<"/"<<nascimento[2]<<"  |  Idade"<<idade<<endl;
}

void Pessoa::setId(int idN){
    id = idN;
}

char* Pessoa::getNome(void){
    return nome;
}

void Pessoa::inicializar(int diaN,int mesN,int anoN,const char* nomeN){
    nascimento[0] = diaN;
    nascimento[1] = mesN;
    nascimento[2] = anoN;
    Calc_idade();
    nome = (char*) malloc(sizeof(char) * strlen(nomeN));
    strcpy(nome,nomeN);
}

void Pessoa::Calc_idade(){
    struct tm *p;
    time_t seconds;

    time(&seconds);
    p = localtime(&seconds);
    idade = p->tm_year + 1900 - nascimento[2];
    if(p->tm_mon + 1 < nascimento[2])
        idade--;
    else if(p->tm_mon + 1 == nascimento[2])
        if( p->tm_mday < nascimento[0])
            idade--;
}

int Pessoa::getId(void){
    return id;
}

int Pessoa::getIdade(void){
    return idade;
}