
class Departamento;
class ElDepartamento
{
private:
    ElDepartamento *prox;
    ElDepartamento *ante;
    Departamento *p;
public:
    ElDepartamento();
    void setProxima(ElDepartamento *proxima);
    void setAnterior(ElDepartamento *anterio);
    void setDepartamento(Departamento *dpto);
    ElDepartamento* getProxima(void);
    ElDepartamento* getAnterior(void);
    Departamento* getDepartamento(void);
    ~ElDepartamento();
};
