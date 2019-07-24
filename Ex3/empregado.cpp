#include "empregado.h"

Empregado::Empregado(std::string nome, std::string sobrenome, double salario){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}
Empregado::Empregado(){
    salario = 0;
    sobrenome = "";
    nome = "";
}
void Empregado::setNome(std::string nome){
    this->nome = nome;
}
void Empregado::setSobrenome(std::string sobrenome){
    this->sobrenome = sobrenome;
}
void Empregado::setSalario(double salario){
    salario>0 ? this->salario = salario : this->salario = 0;
}
std::string Empregado::getNome(){
    return nome;
}
std::string Empregado::getSobrenome(){
    return sobrenome;
}
double Empregado::getSalario(){
    return salario;
}
double Empregado::salarioAnual(){
    return salario*12;
}
void Empregado::aumentoPercentual(double porcentagem){
    salario =  salario+(salario*porcentagem/100);
}
