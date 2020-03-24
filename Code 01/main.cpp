#include "Pessoa.h"
//Este codigo e referente aos slides n 01.

int main(){
    Pessoa newton(4,1,1643);
    Pessoa eintein(14,3,1879);
    int dia = 2,mes = 3,ano = 2020;

    newton.calcula_idade(dia,mes,ano);
    eintein.calcula_idade(dia,mes,ano);

    printf("Idade Newton %d \nIdade Eintein %d\n",newton.info_idade(),eintein.info_idade());
}
