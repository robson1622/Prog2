
class Universidade;
class ListaDisciplina;
class Disciplina;
class Departamento
{
private:
    char *nome;
    Universidade *universidade;
    ListaDisciplina *lista;

public:

    Departamento();
    ~Departamento();
    void addDisciplina(Disciplina *disc);
    void printDisciplinas();
    void setUniversidade(Universidade* universidadeN);
    void setNome(const char *nomeN);
    char* getNome(void);
};