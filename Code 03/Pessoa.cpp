#include "Pessoa.h"
#include <string.h>
#include <time.h>
using std::cout;
using std::endl;
using std::cin;

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
    calcula_idade();

}
void Pessoa::calcula_idade(){
    time_t mytime= time(NULL); 
    struct tm tm = *localtime(&mytime);

    int diaAT = tm.tm_mday;
    int mesAT = tm.tm_mon + 1;
    int anoAT = tm.tm_year + 1900;
    if((mes == mesAT && dia >= diaAT) || mes > mesAT)
        idade = anoAT - ano;
    else
        idade = anoAT - ano -1;
}
void Pessoa::set_uni(Universidade *uniN){
    uni = uniN;
}
void Pessoa::set_dpto(Departamento *dptoN){
    dpto = dptoN;
}
int Pessoa::get_idade(){
    return idade;
}
void Pessoa::print_infor(){
    cout<<nome<<"\n Trabalha na Universidade : "<<uni->get_nome()<<"\n Idade : "<<idade<<"\n No deppartamento : "<<dpto->get_nome()<<endl;
}


