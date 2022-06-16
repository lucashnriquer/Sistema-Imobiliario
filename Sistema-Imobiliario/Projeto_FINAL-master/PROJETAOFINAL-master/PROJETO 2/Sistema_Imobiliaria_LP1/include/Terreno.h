#ifndef TERRENO_H
#define TERRENO_H

#include <Imovel.h>

class Terreno : public Imovel
{
    public:
        Terreno();
        Terreno(string des, double, int,int,string,string,string,string,string,double);
        double getArea();
        void setArea(double);

    private:
        double area;
};

#endif // TERRENO_H
