#include "ListaDisciplina.hpp"
#include "ElDisciplina.hpp"
#include "Disciplina.hpp"
#include <iostream>
using std::cout;
using std::endl;

ListaDisciplina::ListaDisciplina(){
    primeiro = NULL;
    atual = NULL;
}
void ListaDisciplina::addDisciplina(Disciplina *nova){
    ElDisciplina *lista = new ElDisciplina();
    lista->setDisciplina(nova);
    if(primeiro == NULL){
        primeiro = lista;
        atual = lista;
    }
    else{
        atual->setProxima(lista);
        lista->setAnterior(atual);
        atual = lista;
    }
}
void ListaDisciplina::removerDisciplina(Disciplina *disc){
    ElDisciplina *aux = primeiro;
    int flag = 1;
    while (aux != NULL)
    {
        if(aux->getDisciplina() == disc){
            ElDisciplina *trocador = aux->getAnterior();
            trocador->setProxima(aux->getProxima());
            trocador = aux->getProxima();
            trocador->setAnterior(aux->getAnterior());
            cout<<"Disciplina removida com sucesso"<<endl;
            delete aux;
            flag = 0;
            break;
        }
        aux = aux->getProxima();
    }
    if(flag){
        cout<<"Disciplina não encontrada nesta lista"<<endl;
    }
    
}
void ListaDisciplina::listarDisciplinas(void){
    ElDisciplina *aux = primeiro;
    int i = 1;
    while(aux != NULL){
        Disciplina *p = aux->getDisciplina();
        cout<<i<<" : "<<p->getNome()<<endl;
        i++;
        aux = aux->getProxima();
    }
}

ListaDisciplina::~ListaDisciplina(){
    while(primeiro != NULL){
        atual = primeiro;
        primeiro = primeiro->getProxima();
        delete atual;
    }
}