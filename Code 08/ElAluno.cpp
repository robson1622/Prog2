#include "ElAluno.hpp"
#include "Aluno.hpp"
#include "DesempenhoAluno.hpp"
#include <stdio.h>

ElAluno::ElAluno():
prox(NULL),
ante(NULL),
p(NULL),
desem(NULL)
{
}
void ElAluno::setProximo(ElAluno *proximo){
    prox = proximo;
}
void ElAluno::setAnterior(ElAluno *anterior){
    ante = anterior;
}
void ElAluno::setAluno(Aluno *novoAluno){
    p = novoAluno;
    desem = new DesempenhoAluno();
}
ElAluno* ElAluno::getProximo(void){
    return prox;
} 
ElAluno* ElAluno::getAnterior(void){
    return ante;
}
Aluno* ElAluno::getAluno(void){
    return p;
}

void ElAluno::setPrimeiraNota(float n1){
    desem->setPrimeiraNota(n1);
}

void ElAluno::setSegundaNota(float n2){
    desem->setSegundaNota(n2);
}

void ElAluno::setNotaFinal(float n3){
    desem->setNotaFinal(n3);
}

void ElAluno::setNFaltas(int n){
    desem->setNFaltas(n);
}

void ElAluno::printInfor(void){
    desem->printInfor();
}

float ElAluno::getPrimeiraNota(void){
    return desem->getPrimeiraNota();
}

float ElAluno::getSegundaNota(void){
    return desem->getSegundaNota();
}

float ElAluno::getNotaFinal(void){
    return desem->getNotaFinal();
}

int ElAluno::getNFaltas(void){
    return desem->getNFaltas();
}
ElAluno::~ElAluno()
{
}