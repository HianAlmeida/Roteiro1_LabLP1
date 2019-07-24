#ifndef CONTROLEDEGASTOS_H_INCLUDED
#define CONTROLEDEGASTOS_H_INCLUDED
#include"despesa.cpp"
class ControleDeGastos{
    private:
        Despesa despesa[100];
    public:
        ControleDeGastos();
        void setDispesas(Despesa d, int pos);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(std::string tipo);
};



#endif // CONTROLEDEGASTOS_H_INCLUDED
