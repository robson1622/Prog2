

class Aluno;
class DesempenhoAluno;
class ElAluno
{
private:
    DesempenhoAluno *desem;
    ElAluno *prox;
    ElAluno *ante;
    Aluno *p;

public:
    ElAluno(/* args */);
    void setProximo(ElAluno *proximo);
    void setAnterior(ElAluno *anterior);
    void setAluno(Aluno *novoAluno);
    ElAluno* getProximo(void); 
    ElAluno* getAnterior(void);
    Aluno* getAluno(void);
    //Funcoes de Desempenho aluno
    void setPrimeiraNota(float n1);
    void setSegundaNota(float n2);
    void setNotaFinal(float n3);
    void setNFaltas(int n);
    void printInfor(void);
    float getPrimeiraNota(void);
    float getSegundaNota(void);
    float getNotaFinal(void);
    int getNFaltas(void);
    //---------------//
    ~ElAluno();
};
