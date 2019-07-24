#ifndef DESPESA_H_INCLUDED
#define DESPESA_H_INCLUDED
#include<string>
class Despesa{
    private:
        double valor;
        std::string tipoDeGasto;
    public:
        void setValor(double valor);
        void setTipoDeGasto(std::string tipoDeGasto);
        double getValor();
        std::string getTipoDeGasto();
};


#endif // DESPESA_H_INCLUDED
