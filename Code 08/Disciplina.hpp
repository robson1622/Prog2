
class Departamento;
class Aluno;
class ListaAlunos;
class Disciplina
{
private:
    char *nome;
    int numero_alunos;
    int cont_alunos;
    Departamento *dp;

public:

    ListaAlunos *lista;

    Disciplina(const char *nomeN,Departamento *dpN,int numero_alunosN = 45);
    Disciplina();
    ~Disciplina();
    void setNota01(Aluno *p,float nota);
    void setNota02(Aluno *p,float nota);
    void setNota03(Aluno *p,float nota);
    void setNFatltas(Aluno *p,int faltas);
    void printDesempenhoAluno(Aluno *p);
    void setNAlunos(int numero_alunosN);
    void inicializar(const char *nomeN,Departamento *dpN);
    void addAluno(Aluno *aluno);
    void listaAlunos();
    char* getNome();
};
