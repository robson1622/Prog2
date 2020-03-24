#include "Principal.h"

Principal::Principal(void){

    newton.inicializa(4,1,1643,"Isac Newton");
    einstein.inicializa(14,3,1879,"Einstein");
    simao.inicializa(3,10,1976,"Jean Simao");

    utfpr.inicializa("UTFPR");
    princeton.inicializa("Princeton");
    cambridge.inicializa("Cambridge");

    dainf.inicializa("Dainf");
    mat.inicializa("Matematica");
    fis.inicializa("Fisica");

}
void Principal::inicializar(void){

    simao.set_uni(&utfpr);
    newton.set_uni(&cambridge);
    einstein.set_uni(&princeton);

    simao.set_dpto(&dainf);
    newton.set_dpto(&mat);
    einstein.set_dpto(&fis);

    simao.print_infor();
    newton.print_infor();
    einstein.print_infor();
}

Principal::~Principal(){
    
}



