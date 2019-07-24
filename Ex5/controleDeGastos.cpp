#include"controleDeGastos.h"
#include<iostream>

ControleDeGastos::ControleDeGastos(){
    for(int i=0; i<100; i++){
        despesa[i].setValor(0);
        despesa[i].setTipoDeGasto("");
    }
}
void ControleDeGastos::setDispesas(Despesa d, int pos){
    double valor = d.getValor();
    std::string tipo = d.getTipoDeGasto();
    despesa[pos].setValor(valor);
    despesa[pos].setTipoDeGasto(tipo);
}
double ControleDeGastos::calculaTotalDeDespesas(){
    double soma = 0;
    for(int i = 0; i<100; i++){
        soma += despesa[i].getValor();
    }
    return soma;
}
bool ControleDeGastos::existeDespesaDoTipo(std::string tipo){
    for(int i = 0; i<100; i++){
        if(tipo == despesa[i].getTipoDeGasto()){
            return true;
        }
    }
    return false;
}
