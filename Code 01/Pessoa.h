
#include<stdio.h>
#include<stdlib.h>

class Pessoa
{
    private:
    int dia;
    int mes;
    int ano;
    int idade;

    public:
    Pessoa(int diaN, int mesN, int anoN);
    void calcula_idade(int diaAT, int mesAT, int anoAT);
    int info_idade(void);

};