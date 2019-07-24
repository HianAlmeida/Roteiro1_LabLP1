#include"controleDeGastos.cpp"
#include<iostream>
using namespace std;
int main(){
    ControleDeGastos gasto1 = ControleDeGastos();
    Despesa despesa1;

    despesa1.setTipoDeGasto("Cinema");
    despesa1.setValor(60);


    gasto1.setDispesas(despesa1, 2);

    despesa1.setTipoDeGasto("Comida");
    despesa1.setValor(1500);

    gasto1.setDispesas(despesa1, 5);

    despesa1.setTipoDeGasto("Transporte");
    despesa1.setValor(40);

    gasto1.setDispesas(despesa1, 9);

    cout<<"Existe dispesa do tipo Uber? "<<gasto1.existeDespesaDoTipo("Uber")<<endl;
    cout<<"Existe dispesa do tipo Transporte? "<<gasto1.existeDespesaDoTipo("Transporte")<<endl;
    cout<<"Total de despesas: "<<gasto1.calculaTotalDeDespesas()<<endl;





}
