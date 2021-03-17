#include "Principal.hpp"
#include <stdio.h>
#include <time.h>

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

Principal::Principal(){
    idAluno = 0;
    idUniversidade = 0;
    idProfessor = 0;
    idDepartamento = 0;
    idDisciplina = 0;
}

void Principal::inicializar(){
    menu();
}

void Principal::listarAlunos(){
    lAlunos.listarAlunos();
    menuExe();
}

void Principal::listarProfessores(){

}

void Principal::listarDisciplinas(){

}

void Principal::listarDepartamentos(){

}

void Principal::listarUniversidades(){

}

void Principal::cadAluno(){
    system("clear");
    lAlunos.cadAluno();
    cout<<"Cadastrado com sucesso"<<endl;
    menuCad();
}

void Principal::cadProfessor(){

}

void Principal::cadDisciplina(){

}

void Principal::cadDepartamento(){

}

void Principal::cadUniversidade(){

}

void Principal::gravarTudo(){

}

void Principal::gravarAlunos(){
    system("clear");
    lAlunos.gravarAlunos();
    cout<<"Gravado com sucesso"<<endl;
    menuGravar();
}

void Principal::gravarProfessores(){

}

void Principal::gravarDisciplinas(){

}

void Principal::gravarDepartamentos(){

}

void Principal::gravarUniversidades(){

}

void Principal::recuperarTudo(){
    recuperarAlunos();
    recuperarDepartamentos();
    recuperarDisciplinas();
    recuperarProfessores();
}

void Principal::recuperarAlunos(){
    lAlunos = lAlunos.recuperarAlunos();
    menuRecuperar();
}

void Principal::recuperarProfessores(){

}

void Principal::recuperarDisciplinas(){

}

void Principal::recuperarDepartamentos(){

}

void Principal::recuperarUniversidades(){

}

void Principal::menuCad(){
    int opcao;
    cout<<"Selecione o que deseja cadastrar. "<<endl;
    cout<<" 1 Cadastrar Aluno ;"<<endl;
    cout<<" 2 Cadastrar Professor ;"<<endl;
    cout<<" 3 Cadastrar Disciplina ;"<<endl;
    cout<<" 4 Cadastrar Departamento ;"<<endl;
    cout<<" 5 Cadastrar Universidade ;"<<endl;
    cout<<" 0 para menu anterior"<<endl;
    cin>>opcao;
    system("clear");
    switch(opcao){
        case 0 :
            menu();
            break;
        case 1 :
            cadAluno();
            break;
        case 2 :
            cadProfessor();
            break;
        case 3 :
            cadDepartamento();
            break;
        case 4 :
            cadDisciplina();
            break;
        case 5 :
            cadUniversidade();
            break;
        default:
            menuCad();
            break;
    }

}

void Principal::menuExe(){
    int opcao;
    cout<<"O que deseja fazer ? "<<endl;
    cout<<"1 para Listar todos(as) os(as) anlunos(as) ;"<<endl;
    cout<<"2 para Listar todos(as) os(as) professore(as) ;"<<endl;
    cout<<"3 para Listar todos os departamentos"<<endl;
    cout<<"4 para Listar todas as Universidade"<<endl;
    cout<<"0 para menu anterior"<<endl;
    cin>>opcao;
    system("clear");
    switch(opcao){
        case 0 :
            menu();
            break;
        case 1 :
            listarAlunos();
            break;
        case 2 :
            listarProfessores();
            break;
        case 3 :
            listarDisciplinas();
            break;
        case 4 :
            listarDepartamentos();
            break;
        case 5 :
            listarUniversidades();
            break;
        default:
            menuExe();
            break;
    }
}

void Principal::menuGravar(){
    int opcao;
    cout<<"Selecione o que deseja gravar. "<<endl;
    cout<<" 1 Gravar Aluno ;"<<endl;
    cout<<" 2 Gravar Professor ;"<<endl;
    cout<<" 3 Gravar Disciplina ;"<<endl;
    cout<<" 4 Gravar Departamento ;"<<endl;
    cout<<" 5 Gravar Universidade ;"<<endl;
    cout<<" 0 para menu anterior"<<endl;
    cin>>opcao;
    system("clear");
    switch(opcao){
        case 0 :
            menu();
            break;
        case 1 :
            gravarAlunos();
            break;
        case 2 :
            gravarProfessores();
            break;
        case 3 :
            gravarDepartamentos();
            break;
        case 4 :
            gravarDisciplinas();
            break;
        case 5 :
            gravarUniversidades();
            break;
        default:
            menuGravar();
            break;
    }
}

void Principal::menuRecuperar(){
    int opcao;
    cout<<"Selecione o que deseja Recuperar. "<<endl;
    cout<<" 1 Recuperar Aluno ;"<<endl;
    cout<<" 2 Recuperar Professor ;"<<endl;
    cout<<" 3 Recuperar Disciplina ;"<<endl;
    cout<<" 4 Recuperar Departamento ;"<<endl;
    cout<<" 5 Recuperar Universidade ;"<<endl;
    cout<<" 6 Recuperar Tudo ;"<<endl;
    cout<<" 0 para menu anterior"<<endl;
    cin>>opcao;
    system("clear");
    switch(opcao){
        case 0 :
            menu();
            break;
        case 1 :
            recuperarAlunos();
            break;
        case 2 :
            recuperarProfessores();
            break;
        case 3 :
            recuperarDepartamentos();
            break;
        case 4 :
            recuperarDisciplinas();
            break;
        case 5 :
            recuperarUniversidades();
            break;
        case 6 :
            recuperarTudo();
            break;
        default:
            menuGravar();
            break;
    }
}

void Principal::menu(){
    int opcao;
    cout<<"Bem vindo ao sistema academico (Versao 8.0)"<<endl;
    cout<<"1 para ir ao Menu de Cadastro"<<endl;
    cout<<"2 para ir ao Menu de Recuperar"<<endl;
    cout<<"3 para ir ao Menu de Gravacao"<<endl;
    cout<<"4 para ir ao Menu de Execucao"<<endl;
    cout<<"5 para sair"<<endl;
    cin>>opcao;
    system("clear");
    switch (opcao)
    {
    case 1 :
        menuCad();
        break;
    case 2 :
        menuRecuperar();
        break;
    case 3 :
        menuGravar();
        break;
    case 4 :
        menuExe();
        break;
    case 5 :
        break;    
    default:
        menu();
        break;
    }
}


Principal::~Principal(){
}
