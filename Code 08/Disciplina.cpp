#include "Disciplina.hpp"
#include "Departamento.hpp"
#include "Aluno.hpp"
#include "ListaAlunos.hpp"
#include <string.h>
#include <stdlib.h>

#include <iostream>
using std::cout;
using std::endl;

Disciplina::Disciplina(const char *nomeN,Departamento *dpN,int numero_alunosN):lista(NULL),numero_alunos(45),cont_alunos(0){
    inicializar(nomeN,dpN);
    numero_alunos = numero_alunosN;
}

Disciplina::Disciplina()
{
    cont_alunos = 0;
    numero_alunos = 45;
}

Disciplina::~Disciplina(){
    free(nome);
    lista->~ListaAlunos();
    
}
void Disciplina::setNota01(Aluno *p,float nota){
    if(lista->setNota01(nota,p))
        cout<<"Nota atribuida =]"<<endl;
    else
        cout<<"Aluno não encontrado na lista, nota não atribuida =["<<endl;
}

void Disciplina::setNota02(Aluno *p,float nota){
    if(lista->setNota02(nota,p))
        cout<<"Nota atribuida =]"<<endl;
    else
        cout<<"Aluno não encontrado na lista, nota não atribuida =["<<endl;
}

void Disciplina::setNota03(Aluno *p,float nota){
    if(lista->setNota03(nota,p))
        cout<<"Nota atribuida =]"<<endl;
    else
        cout<<"Aluno não encontrado na lista, nota não atribuida =["<<endl;
}

void Disciplina::setNFatltas(Aluno *p,int faltas){
    if(lista->setNFaltas(faltas,p))
        cout<<"Nota atribuida =]"<<endl;
    else
        cout<<"Aluno não encontrado na lista, nota não atribuida =["<<endl;
}

void Disciplina::printDesempenhoAluno(Aluno *p){
    lista->printDesempenho(p);
}

void Disciplina::listaAlunos(){
    lista->listarAlunos();
    
}

void Disciplina::setNAlunos(int numero_alunosN){
    numero_alunos = numero_alunosN;
}
void Disciplina::inicializar(const char *nomeN,Departamento *dpN){
    nome = (char*) malloc(sizeof(char) * strlen(nomeN));
    strcpy(nome,nomeN);
    dp = dpN;
}
void Disciplina::addAluno(Aluno *aluno){
    if(cont_alunos < numero_alunos){
        lista->incluirAluno(aluno);
        cout<<"Aluno adicionado a disciplina com sucesso."<<endl;
    }
    else
        cout<<"O número de alunos já chegou ao máximo de "<<numero_alunos<<".\n"<<endl;
    cont_alunos++;
}

char* Disciplina::getNome(){
    return nome;
}

