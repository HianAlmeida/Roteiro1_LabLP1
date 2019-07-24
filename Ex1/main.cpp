#include"data.cpp"
#include<iostream>

int main(){
    Data d1 = Data();
    Data d2 = Data(29, 8, 2000);

    cout<<"Dia: "<<d1.getDia()<<endl;
    cout<<"Mes: "<<d1.getMes()<<endl;
    cout<<"Ano: "<<d1.getAno()<<"\n"<<endl;

    d2.setDia(31);
    d2.setMes(16);
    d2.setAno(-3);

    cout<<"Dia: "<<d2.getDia()<<endl;
    cout<<"Mes: "<<d2.getMes()<<endl;
    cout<<"Ano: "<<d2.getAno()<<"\n"<<endl;

    d1.avancarDia();
    d1.avancarDia();

    cout<<"Dia: "<<d1.getDia()<<endl;
    cout<<"Mes: "<<d1.getMes()<<endl;
    cout<<"Ano: "<<d1.getAno()<<"\n"<<endl;

    d2.avancarDia();
    d2.avancarDia();

    cout<<"Dia: "<<d2.getDia()<<endl;
    cout<<"Mes: "<<d2.getMes()<<endl;
    cout<<"Ano: "<<d2.getAno()<<"\n"<<endl;


    return 0;
}
