#include "Aluno.hpp"

#include <iostream>
using std::cout;
using std::endl;

Aluno::Aluno(){
}

Aluno::~Aluno(){
}

void Aluno::setUniversidade(Universidade *uni){
    universidade = uni;
}
Universidade* Aluno::getUniversidade(){
    return universidade;
}

void Aluno::setRA(int RAN){
    RA = RAN;
}
void Aluno::printInforAluno(){
    printInfor();
}
int Aluno::getRA(){
    return RA;
}