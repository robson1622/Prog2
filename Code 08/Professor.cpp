#include "Professor.hpp"
#include "Departamento.hpp"
#include "ListaDisciplina.hpp"
#include "Disciplina.hpp"
#include <stdio.h>


Professor::Professor(void):dpto(NULL){
    lista = new ListaDisciplina();
}

Professor::Professor(int idN):Pessoa(idN),dpto(NULL){
    if(lista==NULL)
        lista = new ListaDisciplina();
}

void Professor::adicionarDisciplina(Disciplina *nova){
    lista->addDisciplina(nova);
}

void Professor::inforDisciplinasMinistradas(void){
    lista->listarDisciplinas();
}

void Professor::setDepartamento(Departamento *novo){
    dpto = novo;
}

Departamento* Professor::getDepartamento(void){
    return dpto;
}