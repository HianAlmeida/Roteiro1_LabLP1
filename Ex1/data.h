#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
using namespace std;

class Data{
    private:
        int dia, mes, ano;
    public:
        Data();
        Data(int dia, int mes, int ano);
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        int getDia();
        int getMes();
        int getAno();
        void avancarDia();
};


#endif // DATA_H_INCLUDED
