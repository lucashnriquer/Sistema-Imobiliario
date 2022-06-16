#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include <Imovel.h>

using namespace std;

class Apartamento : public Imovel
{
    public:
        Apartamento();
        Apartamento(string,double,int,int,string,string,string,string,string,double,double,int,int,int,string);
        double getArea();
        double getValorCondominio();
        int getNumQuartos();
        int getAndar();
        int getVagasGaragem();
        string getPosicao();

        void setArea(double);
        void setValorCondominio(double);
        void setNumQuartos(int);
        void setAndar(int);
        void setVagasGaragem(int);
        void setPosicao(string);

    private:
        double area, valorCondominio;
        int numQuartos, andar, vagasGaragem;
        string posicao;
};

#endif // APARTAMENTO_H
