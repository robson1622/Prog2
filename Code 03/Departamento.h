#pragma once

class Departamento{
    private:
    char nome[130];

    public:
    Departamento(const char *nomeN);
    Departamento();
    void inicializa(const char *nomeN);
    char* get_nome();
    ~Departamento();

};