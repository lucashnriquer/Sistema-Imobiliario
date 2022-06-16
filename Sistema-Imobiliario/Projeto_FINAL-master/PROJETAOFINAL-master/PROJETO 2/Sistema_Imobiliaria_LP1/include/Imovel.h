#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>

using namespace std;

class Imovel
{
    public:
        Imovel();
        void setValor(double);
        void setTipoOferta(int);
        void setTipoImovel(int);
        void setRua(string);
        void setNumero(string);
        void setBairro(string);
        void setCidade(string);
        void setCEP(string);
        void setDescricao(string);

        double getValor();
        int getTipoOferta();
        int getTipoImovel();
        string getRua();
        string getNumero();
        string getBairro();
        string getCidade();
        string getCEP();
        string getEndereco();
        string getDescricao();

    protected:
        double valor;
        int tipoOferta, tipoImovel;
        string descricao, rua, numero, bairro, cidade, CEP;
 };

#endif // IMOVEL_H
