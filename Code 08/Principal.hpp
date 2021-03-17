#include "Universidade.hpp"
#include "Departamento.hpp"
#include "ListaDepartamentos.hpp"
#include "Aluno.hpp"
#include "ListaAlunos.hpp"
#include "Disciplina.hpp"
#include "ListaDisciplina.hpp"

class Principal
{
private:
    int idAluno;
    int idUniversidade;
    int idProfessor;
    int idDepartamento;
    int idDisciplina;

    ListaDisciplina lDisciplinas;
    ListaAlunos lAlunos;
    ListaDepartamentos lDepartamento;
   // ListaProfessores lProfessores;

public:
    Principal();
    void inicializar();
    void listarAlunos();
    void listarProfessores();
    void listarDisciplinas();
    void listarDepartamentos();
    void listarUniversidades();
    void cadAluno();
    void cadProfessor();
    void cadDisciplina();
    void cadDepartamento();
    void cadUniversidade();
    void gravarTudo();
    void gravarAlunos();
    void gravarProfessores();
    void gravarDisciplinas();
    void gravarDepartamentos();
    void gravarUniversidades();
    void recuperarTudo();
    void recuperarAlunos();
    void recuperarProfessores();
    void recuperarDisciplinas();
    void recuperarDepartamentos();
    void recuperarUniversidades();
    void menuCad();
    void menuExe();
    void menuGravar();
    void menuRecuperar();
    void menu();
    ~Principal();
};