#include "ElDepartamento.hpp"
#include "Departamento.hpp"
#include "ListaDepartamentos.hpp"
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;


ListaDepartamentos::ListaDepartamentos()
{
    primeira = atual = NULL;
}
void ListaDepartamentos::addDepartamento(Departamento *dpto){
    ElDepartamento *nova = new ElDepartamento;
    nova->setDepartamento(dpto);
    if( primeira == NULL){
        primeira = nova;
        atual = nova;
    }
    else{
        atual->setProxima(nova);
        nova->setAnterior(atual);
        atual = nova;
    }
}
void ListaDepartamentos::removerDepartamento(Departamento *dpto){
    ElDepartamento *aux = primeira;
    int flag = 1;
    while (aux != NULL)
    {
        if(dpto == aux->getDepartamento()){
            ElDepartamento *trocador = aux->getAnterior();
            trocador->setProxima(aux->getProxima());
            if( aux == atual )
                atual = trocador;
            delete aux;
            flag = 0;
            cout<<dpto->getNome()<<" removido da lista com sucesso"<<endl;
        }
        aux = aux->getProxima();
    }
    if(flag){
        cout<<dpto->getNome()<<" não se encontra na lista de departamentos da universidade"<<endl;
    }
}
void ListaDepartamentos::listarDepartamentos(void){
    ElDepartamento *aux = primeira;
    Departamento *nomes;
    int i = 1;
    while (aux != NULL)
    {
        nomes = aux->getDepartamento();
        cout<<" "<<i<<" : "<<nomes->getNome()<<endl;
        aux = aux->getProxima();
    }
    
}
Departamento* ListaDepartamentos::procurarDepartamento(/* Implementar no futuro */){
    return NULL;
}

ListaDepartamentos::~ListaDepartamentos()
{
    while (atual != NULL)
    {
        atual = primeira;
        primeira = primeira->getProxima();
        delete atual;
    }
    
}