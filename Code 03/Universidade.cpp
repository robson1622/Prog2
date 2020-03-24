#include "Universidade.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string.h>

Universidade::Universidade(const char *nomeN){
    inicializa(nomeN);
}
Universidade::Universidade(){
    inicializa(NULL);
}
void Universidade::inicializa(const char *nomeN){
    if(nomeN)
        strcpy(nome,nomeN);
}
char* Universidade::get_nome(){
        return nome;
}