#ifndef SISTEMAIMOBILIARIO_H
#define SISTEMAIMOBILIARIO_H
#include <vector>
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

class SistemaImobiliario
{
private:
    Imovel *imovel;
    vector<Casa> lcasa;
    vector<Apartamento> lapartamento;
    vector<Terreno> lterreno;

public:
    SistemaImobiliario();
    virtual ~SistemaImobiliario();
    void cadastrarImovel();
    void getImoveis();
    void getDescricao();
    void getImoveisPorTipo();
    void getImoveisParaAlugar();
    void getImoveisParaVender();
    void getImoveisPorCidade();
    void getImoveisPorBairro();
    void getImoveisPorDescricao();
    void getImoveisPorValor();
    int menuExibicao();
    void editar();
    void apagar();
    void salvarNoArquivo();
    void lerArquivo();
};

#endif // SISTEMAIMOBILIARIO_H
