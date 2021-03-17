
class Aluno;
class Disciplina;
class ElAluno;
class ListaAlunos
{
private:
    ElAluno *primeiro;
    ElAluno *atual;

public:

    ListaAlunos();
    bool setNota01(float n01,Aluno *p);
    bool setNota02(float n02,Aluno *p);
    bool setNota03(float n03,Aluno *p);
    bool setNFaltas(int n_faltas,Aluno *p);
    float getNota01(Aluno *p);
    float getNota02(Aluno *p);
    float getNota03(Aluno *p);
    int getNFaltas(Aluno *p);
    void printDesempenho(Aluno *p);
    void cadAluno();
    void incluirAluno(Aluno *p);
    void gravarAlunos();
    ListaAlunos recuperarAlunos(void);
    void removerAluno(Aluno *p);
    void listarAlunos();
    bool verificarAlunoLista(Aluno *p);
    Aluno* getAluno();
    ~ListaAlunos();

};