

class Disciplina;
class ElDisciplina{
    private:
    ElDisciplina *prox;
    ElDisciplina *ante;
    Disciplina *p;

    public:
    ElDisciplina();
    ~ElDisciplina();
    void setProxima(ElDisciplina *proxima);
    void setAnterior(ElDisciplina *anterior);
    void setDisciplina(Disciplina *disc);
    Disciplina* getDisciplina(void);
    ElDisciplina* getProxima(void);
    ElDisciplina* getAnterior(void);
};