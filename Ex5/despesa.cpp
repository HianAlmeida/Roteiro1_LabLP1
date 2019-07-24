#include"despesa.h"

void Despesa::setValor(double valor){
    this->valor = valor;
}
void Despesa::setTipoDeGasto(std::string tipoDeGasto){
    this->tipoDeGasto = tipoDeGasto;
}
double Despesa::getValor(){
    return valor;
}
std::string Despesa::getTipoDeGasto(){
    return tipoDeGasto;
}
