#include"data.h"

Data::Data(){
 dia = 1;
 mes = 1;
 ano = 0001;
}
Data::Data(int dia, int mes, int ano){
    setDia(dia);
    setMes(mes);
    setAno(ano);
}
void Data::setDia(int dia){
    0<dia && dia<32 ? this->dia = dia : this->dia = 1;
}
void Data::setMes(int mes){
    0<mes && mes<13 ? this->mes = mes : this->mes = 1;
}
void Data::setAno(int ano){
    0<ano ? this-> ano = ano : this->ano = 0001;
}
int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}
void Data::avancarDia(){
    dia++;
    if(dia>=32){
        dia = 1;
        mes++;
    }
    if(mes>=13){
        mes = 1;
        ano++;
    }
}

