#include "ElDisciplina.hpp"
#include "Disciplina.hpp"
#include <stdio.h>

ElDisciplina::ElDisciplina(){
    prox = NULL;
    ante = NULL;
    p = NULL;
}
ElDisciplina::~ElDisciplina(){
    
}
void ElDisciplina::setProxima(ElDisciplina *proxima){
    prox = proxima;
}
void ElDisciplina::setAnterior(ElDisciplina *anterior){
    ante = anterior;
}
void ElDisciplina::setDisciplina(Disciplina *disc){
    p = disc;
}
Disciplina* ElDisciplina::getDisciplina(void){
    return p;
}
ElDisciplina* ElDisciplina::getProxima(void){
    return prox;
}
ElDisciplina* ElDisciplina::getAnterior(void){
    return ante;
}