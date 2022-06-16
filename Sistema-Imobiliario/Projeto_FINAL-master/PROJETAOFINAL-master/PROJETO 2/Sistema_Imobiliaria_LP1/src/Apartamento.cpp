#include "Apartamento.h"

Apartamento::Apartamento()
{
   // tipoImovel = "Apartamento";
}
Apartamento::Apartamento(string des, double vlr,int tof,int tim,string r,string n,string b,string c,string cep,double ar, double vc, int nq, int a, int vg, string p)
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

    area = ar;
    valorCondominio = vc;
    numQuartos = nq;
    andar = a;
    vagasGaragem = vg;
    posicao = p;
}

double Apartamento::getArea()
{
    return area;
}

double Apartamento::getValorCondominio()
{
    return valorCondominio;
}

int Apartamento::getNumQuartos()
{
    return numQuartos;
}

int Apartamento::getAndar()
{
    return andar;
}

int Apartamento::getVagasGaragem()
{
    return vagasGaragem;
}

std::string Apartamento::getPosicao()
{
    return posicao;
}

void Apartamento::setArea(double ar)
{
    area = ar;
}

void Apartamento::setValorCondominio(double vc)
{
    valorCondominio = vc;
}

void Apartamento::setNumQuartos(int nq)
{
    numQuartos = nq;
}

void Apartamento::setAndar(int andr)
{
    andar = andr;
}

void Apartamento::setVagasGaragem(int vg)
{
    vagasGaragem = vg;
}

void Apartamento::setPosicao(string pos)
{
    posicao = pos;
}
