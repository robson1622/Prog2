
class Departamento;
class ElDepartamento;
class ListaDepartamentos
{
private:
    ElDepartamento *primeira;
    ElDepartamento *atual;

public:
    ListaDepartamentos();
    void addDepartamento(Departamento *dpto);
    void removerDepartamento(Departamento *dpto);
    void listarDepartamentos(void);
    Departamento* procurarDepartamento(/* Implementar no futuro */);
    ~ListaDepartamentos();
};

