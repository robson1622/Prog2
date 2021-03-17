#include "ListaAlunos.hpp"
#include "DesempenhoAluno.hpp"
#include "ElAluno.hpp"
#include "Disciplina.hpp"
#include "Aluno.hpp"
#include <string.h>

#include <fstream>
using std::ofstream;
using std::ifstream;
#include <iostream>
using namespace std;
using std::cout;
using std::endl;
using std::cin;

ListaAlunos::ListaAlunos():primeiro(NULL),atual(NULL){
}
bool ListaAlunos::setNota01(float n01,Aluno *p){
    ElAluno *aux = primeiro;
    while(aux != NULL){
        if(p == aux->getAluno()){
            aux->setPrimeiraNota(n01);
            return true;
        }
        aux = aux->getProximo();
    }
    return false;
}
bool ListaAlunos::setNota02(float n02,Aluno *p){
    ElAluno *aux = primeiro;
    while(aux != NULL){
        if(p == aux->getAluno()){
            aux->setSegundaNota(n02);
            return true;
        }
        aux = aux->getProximo();
    }
    return false;
}
bool ListaAlunos::setNota03(float n03,Aluno *p){
    ElAluno *aux = primeiro;
    while(aux != NULL){
        if(p == aux->getAluno()){
            aux->setNotaFinal(n03);
            return true;
        }
        aux = aux->getProximo();
    }
    return false;
}
bool ListaAlunos::setNFaltas(int n_faltas,Aluno *p){
    ElAluno *aux = primeiro;
    while(aux != NULL){
        if(p == aux->getAluno()){
            aux->setNFaltas(n_faltas);
            return true;
        }
        aux = aux->getProximo();
    }
    return false;
}
float ListaAlunos::getNota01(Aluno *p){
    ElAluno *aux = primeiro;
    while(aux != NULL){
        if(p == aux->getAluno()){
            return aux->getPrimeiraNota();
        }
        aux = aux->getProximo();
    }
    cout<<"Aluno nao encontrado"<<endl;
    return -1;
}
float ListaAlunos::getNota02(Aluno *p){
    ElAluno *aux = primeiro;
    while(aux != NULL){
        if(p == aux->getAluno()){
            return aux->getSegundaNota();
        }
        aux = aux->getProximo();
    }
    cout<<"Aluno nao encontrado"<<endl;
    return -1;
}
float ListaAlunos::getNota03(Aluno *p){
    ElAluno *aux = primeiro;
    while(aux != NULL){
        if(p == aux->getAluno()){
            return aux->getNotaFinal();
        }
        aux = aux->getProximo();
    }
    cout<<"Aluno nao encontrado"<<endl;
    return -1;
}
int ListaAlunos::getNFaltas(Aluno *p){
    ElAluno *aux = primeiro;
    while(aux != NULL){
        if(p == aux->getAluno()){
            return aux->getNFaltas();
        }
        aux = aux->getProximo();
    }
    cout<<"Aluno nao encontrado"<<endl;
    return -1;
}
void ListaAlunos::printDesempenho(Aluno *p){
    bool flag = false;
    ElAluno *aux = primeiro;
    while(aux != NULL){
        if(p == aux->getAluno()){
            aux->printInfor();
            flag = true;
        }
        aux = aux->getProximo();
    }
    if(!flag)
        cout<<"Aluno nao encontrado na lista =["<<endl;

}
void ListaAlunos::cadAluno(){
    ElAluno *novoNo = new ElAluno();
    Aluno *novoAl = new Aluno();
    char nome[150];
    int ra;

    cout<<"Digite o nome do Aluno..."<<endl;
    cin>>nome;
    cout<<"Digite o Registro Academico (RA)..."<<endl;
    cin>>ra;
    novoAl->setRA(ra);
    novoAl->setNome(nome);
    novoNo->setAluno(novoAl);

    if(primeiro == NULL){
        primeiro = novoNo;
        atual = primeiro;
    }
    else{
        atual->setProximo(novoNo);
        novoNo->setAnterior(atual);
        novoNo->setProximo(NULL);
        atual = novoNo;
    }
}

void ListaAlunos::incluirAluno(Aluno *p){
    ElAluno *novoNo = new ElAluno();
    novoNo->setAluno(p);
    if(primeiro == NULL){
        primeiro = novoNo;
        atual = primeiro;
    }
    else{
        atual->setProximo(novoNo);
        novoNo->setAnterior(atual);
        novoNo->setProximo(NULL);
        atual = novoNo;
    }
}

void ListaAlunos::gravarAlunos(){
    ofstream GravadorAlunos ( "alunos.dat", ios::out );
    if ( !GravadorAlunos ){
        cout<<" Arquivo não pode ser aberto "<<endl;
        fflush (stdin);
        getchar();
        return;
    }

    ElAluno* aux;
    Aluno * pauxAluno;
    aux = primeiro;
    while ( aux != NULL){
        pauxAluno = aux->getAluno();
        GravadorAlunos<<pauxAluno->getId()<<'\n'
                        <<pauxAluno->getRA()<<'\n'
                        <<pauxAluno->getNome()<<endl;
        aux = aux->getProximo();
    }
    GravadorAlunos.close ( );
}

ListaAlunos ListaAlunos::recuperarAlunos(void){
    ifstream recuperador("alunos.dat",ios::in);
    if(!recuperador)
        cout<<"Não foi possivel carregar a lista de alunos"<<endl;
    else
        cout<<"Recuperado com sucesso.! \n"<<endl;
    Aluno *aux;
    int id;
    int RA;
    char nome[150];
    ListaAlunos lista;

    while(!recuperador.eof()){
        recuperador>>id>>RA>>nome;
        if(0 != strcmp(nome,"")){
            aux = new Aluno();
            aux->setNome(nome);
            aux->setRA(RA);
            aux->setId(id);
            lista.incluirAluno(aux);
        }
    }
    recuperador.close();
    return lista;
}
void ListaAlunos::removerAluno(Aluno *p){
    ElAluno *aux = primeiro;
    while(aux != NULL){
        if(p == aux->getAluno()){
            ElAluno *trocador = aux->getAnterior();
            if(aux->getAnterior() != NULL){
                trocador->setProximo(aux->getProximo());
                if(aux->getProximo() != NULL){
                    trocador = aux->getProximo();
                    trocador->setAnterior(aux->getAnterior());
                }
                else
                    atual = trocador;
                delete aux;
            }
            break;
        }
        aux = aux->getProximo();
    }
}

void ListaAlunos::listarAlunos(){
    ElAluno *aux = primeiro;
    Aluno *al;

    if(primeiro == NULL)
        cout<<"Lista vazia =["<<endl;
    else
        while(aux!=NULL){
            al = aux->getAluno();
            cout<<"Nome : "<<al->getNome()<<"    RA : "<<al->getRA()<<endl;
            aux = aux->getProximo();
        }
}

bool ListaAlunos::verificarAlunoLista(Aluno *p){
    ElAluno *aux = primeiro;
    while(aux != NULL){
        if(aux->getAluno() == p)
            return 1;
    }
    return 0;
}
ListaAlunos::~ListaAlunos(){
    
}