#include "Terreno.h"

Terreno::Terreno()
{
   // tipoImovel = "Terreno";
}

Terreno::Terreno(string des, double vlr,int tof,int tim,string r,string n,string b,string c,string cep,double a)
{
    valor = vlr;
    tipoOferta = tof;
    tipoImovel = tim;
    rua = r;
    numero = n;
    bairro = b;
    cidade = c;
    CEP = cep;
    descricao = des;

    area = a;
}

double Terreno::getArea()
{
    return area;
}

void Terreno::setArea(double ar)
{
    area = ar;
}
