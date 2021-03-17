#include "ElDepartamento.hpp"
#include "Disciplina.hpp"

ElDepartamento::ElDepartamento()
{
}
void ElDepartamento::setProxima(ElDepartamento *proxima){
    prox = proxima;
}
void ElDepartamento::setAnterior(ElDepartamento *anterio){
    ante = anterio;
}
void ElDepartamento::setDepartamento(Departamento *dpto){
    p = dpto;
}
ElDepartamento* ElDepartamento::getProxima(void){
    return prox;
}
ElDepartamento* ElDepartamento::getAnterior(void){
    return ante;
}
Departamento* ElDepartamento::getDepartamento(void){
    return p;
}
ElDepartamento::~ElDepartamento()
{
}