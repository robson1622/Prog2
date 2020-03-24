#pragma once
#include "Universidade.h"
#include <iostream>

class Pessoa
{
    private:
    int dia;
    int mes;
    int ano;
    int idade;
    Universidade *uni;
    Departamento *dpto;
    char nome[30];

    public:
    Pessoa(int diaN, int mesN, int anoN,const char *nomeN);
    Pessoa();
    void inicializa(int diaN, int mesN, int anoN,const char *nomeN);
    void calcula_idade();
    void set_uni(Universidade *uniN);
    void set_dpto(Departamento *dptoN);
    void print_infor();
    int get_idade();

};