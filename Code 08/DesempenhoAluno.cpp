#include <stdio.h>
#include "DesempenhoAluno.hpp"
#include "Aluno.hpp"
#include "Disciplina.hpp"

#include <iostream>
using std::cout;
using std::endl;

DesempenhoAluno::DesempenhoAluno()
{
    notas[0] = 0;
    notas[1] = 0;
    notas[2] = 0;
    numero_faltas = 0;
}
void DesempenhoAluno::setAluno(Aluno *p){
    alun = p;
}

void DesempenhoAluno::setPrimeiraNota(float n1){
    notas[0] = n1;
}
void DesempenhoAluno::setSegundaNota(float n2){
    notas[1] = n2;
}
void DesempenhoAluno::setNotaFinal(float n3){
    notas[2] = n3;
}
void DesempenhoAluno::setNFaltas(int n){
    numero_faltas = n;
}
void DesempenhoAluno::printInfor(void){
    cout<<"Desempenho do aluno(a) "<<alun->getNome()<<" : \n"<<" Nota 01 : "<<notas[0]<<"\n Nota 02 : "<<notas[1]<<"\n Nota 03 : "<<notas[2]<<"\n Número de faltas :"<<numero_faltas<<endl;
}
float DesempenhoAluno::getPrimeiraNota(void){
    return notas[0];
}
float DesempenhoAluno::getSegundaNota(void){
    return notas[1];
}
float DesempenhoAluno::getNotaFinal(void){
    return notas[2];
}
int DesempenhoAluno::getNFaltas(void){
    return numero_faltas;
}
DesempenhoAluno::~DesempenhoAluno()
{
}