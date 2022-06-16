#ifndef CASA_H
#define CASA_H

#include <Imovel.h>

class Casa : public Imovel
{
    public:
        Casa();
        Casa(string, double, int,int,string,string,string,string,string,int, int, double, double);
        int getNumPavimentos();
        int getNumQuartos();
        double getAreaTerreno();
        double getAreaConstruida();
        void setNumeroPavimentos(int);
        void setNumeroQuartos(int);
        void setAreaTerreno(double);
        void setAreaConstruida(double);

    private:
        int numPavimentos, numQuartos;
        double areaTerreno, areaConstruida;
};

#endif // CASA_H
