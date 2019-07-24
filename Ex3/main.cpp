#include "empregado.cpp"
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    Empregado empregado1;
    string nome;
    double salario;
    cout << "Digite o nome do empregado: "<<endl;
    cin >> nome;
    empregado1.setNome(nome);
    cout << "Digite o sobrenome do empregado: "<<endl;
    cin >> nome;
    empregado1.setSobrenome(nome);
    cout << "Nome: "<<empregado1.getNome()<<
    " "<<empregado1.getSobrenome()<<endl;

    cout << "Salario do funcionario: "<<endl;
    cin >> salario;
    empregado1.setSalario(salario);
    cout << "Salario anual: "<< empregado1.salarioAnual()<<endl;
    empregado1.aumentoPercentual(10);
    cout << "Salario anual apos aumento de 10%: "<< empregado1.salarioAnual()<<endl;
    return 0;


}
