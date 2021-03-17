#pragma once
#include "Pessoa.hpp"

class Universidade;
class Aluno:public Pessoa{
private:
    int RA;
    Universidade *universidade;
public:
    Aluno();
    ~Aluno();
    void setUniversidade(Universidade *uni);
    Universidade* getUniversidade();
    void setRA(int RAN);
    void printInforAluno();
    int getRA();
};
