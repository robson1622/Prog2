
class Disciplina;
class ElDisciplina;
class ListaDisciplina
{
private:
    ElDisciplina *primeiro;
    ElDisciplina *atual;

public:
    ListaDisciplina();
    void addDisciplina(Disciplina *nova);
    void removerDisciplina(Disciplina *disc);
    void listarDisciplinas(void);
    Disciplina* getDisciplina(void);
    ~ListaDisciplina();
};
