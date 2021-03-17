#include <stdlib.h>

class ListaDepartamentos;
class Departamento;
class Universidade
{
private:
    char *nome;
    ListaDepartamentos *lista;
    
public:
    Universidade();
    ~Universidade();
    void addDpto(Departamento *dptoN);
    void listarDepartamentos(void);
    void setNome(const char *nomeN);
    char* getNome(void);
};
