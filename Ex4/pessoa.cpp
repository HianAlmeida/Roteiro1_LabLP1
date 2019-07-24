#include"pessoa.h"

void Pessoa::setNome(std::string nome){
    this->nome = nome;
}
void Pessoa::setIdade(int idade){
    this->idade = idade;
}
void Pessoa::setTelefone(std::string telefone){
    this->telefone = telefone;
}
std::string Pessoa::getNome(){
    return nome;
}
int Pessoa::getIdade(){
    return idade;
}
std::string Pessoa::getTelefone(){
    return telefone;
}
