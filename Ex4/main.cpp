#include<iostream>
#include"pessoa.cpp"

using namespace std;
int main(){
    Pessoa p1, p2;
    string nome;
    int idade;

    cout<<"Nome: "<<endl;
    cin>>nome;
    p2.setNome(nome);
    cout<<"Idade: "<<endl;
    cin>>idade;
    p2.setIdade(idade);
    cout<<"Telefone: "<<endl;
    cin>>nome;
    p2.setTelefone(nome);
    cout<<"Nome: "<<p2.getNome()<<endl;
    cout<<"Idade: "<<p2.getIdade()<<endl;
    cout<<"Telefone: "<<p2.getTelefone()<<endl;
    p1.setIdade(26);
    p1.setNome("Joao");
    p1.setTelefone("83 99615-6363");
    cout<<"Nome: "<<p1.getNome()<<endl;
    cout<<"Idade: "<<p1.getIdade()<<endl;
    cout<<"Telefone: "<<p1.getTelefone()<<endl;

    return 0;

}
