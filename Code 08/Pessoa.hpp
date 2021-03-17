
class Pessoa{
    protected:
        int nascimento[3];
        int id;
        int idade;
        char *nome;
        void Calc_idade();

    public:
        Pessoa(int diaN,int mesN,int anoN,const char* nomeN="");
        Pessoa(int idN);
        Pessoa();
        ~Pessoa();
        void inicializar(int diaN,int mesN,int anoN,const char* nomeN="");
        void setNome(const char* nomeN);
        void printInfor(void);
        void setId(int idN);
        char* getNome(void);
        int getIdade(void);
        int getId(void);
        int* getDataNascimento(void);
};