#include "Universidade.hpp"
#include "Departamento.hpp"
#include <stdlib.h>
#include <string.h>
#include "ListaDepartamentos.hpp"

#include <iostream>
using std::cout;
using std::endl;

Universidade::Universidade(){
    lista = new ListaDepartamentos;
}
Universidade::~Universidade(){
    delete lista;
}
void Universidade::addDpto(Departamento *dptoN){
    lista->addDepartamento(dptoN);
}
void Universidade::listarDepartamentos(void){
    cout<<"Departamentos associados a "<<nome<<endl;
    lista->listarDepartamentos();
}
void Universidade::setNome(const char *nomeN){
    nome =(char*) malloc(sizeof(char) * strlen(nomeN));
    strcpy(nome,nomeN);
}   
char* Universidade::getNome(void){
    return nome;
}
