#include "Pricipal.h"
using std::cout;
using std::endl;
using std::cin;

Pricipal::Pricipal(void){
    newton.inicializa(4,1,1643,"Isac Newton");
    einstein.inicializa(14,3,1879,"Einstein");
    simao.inicializa(3,10,1976,"Jean Simao");
    
    cout<<"Dia mes e ano atual"<<endl;
    cin>>diaAtual>>mesAtual>>anoAtual;
}
void Pricipal::inicializar(void){
    newton.calcula_idade(diaAtual,mesAtual,anoAtual);
    einstein.calcula_idade(diaAtual,mesAtual,anoAtual);
    simao.calcula_idade(diaAtual,mesAtual,anoAtual);
}



