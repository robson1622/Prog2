#include "Pessoa.hpp"

class Departamento;
class ListaDisciplina;
class Disciplina;
class Professor:public Pessoa{
    private:
        Departamento *dpto;
        ListaDisciplina *lista;
        
    public:
        Professor(void);
        Professor(int idN);
        void adicionarDisciplina(Disciplina *nova);
        void inforDisciplinasMinistradas(void);
        void setDepartamento(Departamento *novo);
        Departamento* getDepartamento(void);
        
};