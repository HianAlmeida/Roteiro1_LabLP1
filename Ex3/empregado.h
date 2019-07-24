#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED
#include <string>
class Empregado{
    private:
        std::string nome, sobrenome;
        double salario;
    public:
        Empregado(std::string nome, std::string sobrenome, double salario);
        Empregado();
        void setNome(std::string nome);
        void setSobrenome(std::string sobrenome);
        void setSalario(double salario);
        std::string getNome();
        std::string getSobrenome();
        double getSalario();
        double salarioAnual();
        void aumentoPercentual(double porcentagem);
};

#endif // EMPREGADO_H_INCLUDED
