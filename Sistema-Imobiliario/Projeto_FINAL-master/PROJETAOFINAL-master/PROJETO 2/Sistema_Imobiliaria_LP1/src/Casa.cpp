#include "Casa.h"

Casa::Casa()
{
    numPavimentos=0;
    numQuartos=0;
    areaTerreno=0;
    areaConstruida=0;
}

Casa::Casa(string des, double vlr,int tof,int tim,string r,string n,string b,string c,string cep,int np, int nq, double aTerreno , double aConstruida)
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

    numPavimentos = np;
    numQuartos = nq;
    areaTerreno = aTerreno;
    areaConstruida = aConstruida;
}

int Casa::getNumPavimentos()
{
    return numPavimentos;
}

int Casa::getNumQuartos()
{
    return numQuartos;
}

double Casa::getAreaTerreno()
{
    return areaTerreno;
}

double Casa::getAreaConstruida()
{
    return areaConstruida;
}

void Casa::setNumeroPavimentos(int np)
{
    numPavimentos = np;
}

void Casa::setNumeroQuartos(int nq)
{
    numQuartos = nq;
}

void Casa::setAreaTerreno(double atr)
{
    areaTerreno = atr;
}

void Casa::setAreaConstruida(double ac)
{
    areaConstruida = ac;
}
