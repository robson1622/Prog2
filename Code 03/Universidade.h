#pragma once
#include <string.h>
#include "Departamento.h"


class Universidade{
    private:
    char nome[30];
    Departamento dpto;

    public:
    Universidade(const char *nomeN);
    Universidade();
    void inicializa(const char *nomeN);
    char* get_nome();
};