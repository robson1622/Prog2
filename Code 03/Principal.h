#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class Principal{
    private:
    Pessoa newton;
    Pessoa einstein;
    Pessoa simao;

    Universidade utfpr;
    Universidade princeton;
    Universidade cambridge;

    Departamento dainf;
    Departamento mat;
    Departamento fis;
    
    public:
    Principal();
    ~Principal();
    void inicializar();
};