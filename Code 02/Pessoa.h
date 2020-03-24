#include<stdio.h>
#include<stdlib.h>

class Pessoa
{
    private:
    int dia;
    int mes;
    int ano;
    int idade;
    char nome[30];

    public:
    Pessoa(int diaN, int mesN, int anoN,const char *nomeN);
    Pessoa();
    void inicializa(int diaN, int mesN, int anoN,const char *nomeN);
    void calcula_idade(int diaAT, int mesAT, int anoAT);
    int info_idade(void);

};