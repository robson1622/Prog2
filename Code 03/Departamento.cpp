#include "Departamento.h"
#include <string.h>

Departamento::Departamento(const char *nomeN){
    inicializa(nomeN);
}
Departamento::Departamento(){
    inicializa(0);
}
void Departamento::inicializa(const char *nomeN){
    if(nomeN)
        strcpy(nome,nomeN);
}
char* Departamento::get_nome(){
    return nome;
}
Departamento::~Departamento(){

}