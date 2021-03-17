#include "Universidade.hpp"
#include "Departamento.hpp"
#include "Disciplina.hpp"
#include "ListaDisciplina.hpp"
#include "ElDisciplina.hpp"
#include <stdlib.h>
#include <string.h>

#include <iostream>
using std::cout;
using std::endl;

Departamento::Departamento(){
    lista = new ListaDisciplina();
}

Departamento::~Departamento()
{
    free(nome);
    delete lista;
}

void Departamento::addDisciplina(Disciplina *disc){
    lista->addDisciplina(disc);
}

void Departamento::printDisciplinas(){
    cout<<"Disciplinas associadas ao : "<<nome<<endl;
    lista->listarDisciplinas();
}

void Departamento::setUniversidade(Universidade* universidadeN){
    universidade = universidadeN;
}

void Departamento::setNome(const char *nomeN){
    nome = (char*) malloc(sizeof(char) * strlen(nomeN));
    strcpy(nome,nomeN);
}

char* Departamento::getNome(void){
    return nome;
}
