#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include<string>

class Pessoa{
    private:
        std::string nome;
        int idade;
        std::string telefone;
    public:
        void setNome(std::string nome);
        void setIdade(int idade);
        void setTelefone(std::string telefone);
        std::string getNome();
        int getIdade();
        std::string getTelefone();

};


#endif // PESSOA_H_INCLUDED
