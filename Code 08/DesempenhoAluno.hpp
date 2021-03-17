
class Disciplina;
class Aluno;
class DesempenhoAluno
{
private:
    float notas[3];
    int numero_faltas;
    Aluno *alun;

public:
    DesempenhoAluno();
    void setAluno(Aluno *p);
    void setPrimeiraNota(float n1);
    void setSegundaNota(float n2);
    void setNotaFinal(float n3);
    void setNFaltas(int n);
    void printInfor(void);
    float getPrimeiraNota(void);
    float getSegundaNota(void);
    float getNotaFinal(void);
    int getNFaltas(void);
    ~DesempenhoAluno();
};
