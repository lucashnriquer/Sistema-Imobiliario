#include "SistemaImobiliario.h"

SistemaImobiliario::SistemaImobiliario()
{

}

SistemaImobiliario::~SistemaImobiliario()
{

}

void SistemaImobiliario::editar(){

    int o, n, t;

    cout << "Digite o tipo do im�vel a ser editado: " << endl;
    cout << "(1) Casa" << endl;
    cout << "(2) Apartamento" << endl;
    cout << "(3) Terreno" << endl;

    cin >> t;
    cin.ignore();

    cout << "Digite como deseja pesquisar o im�vel a ser editado: " << endl;
    cout << "(1) Cidade" << endl;
    cout << "(2) Bairro" << endl;
    cout << "(3) Descri��o" << endl;
    cout << "(4) Valor" << endl;

    cin >> o;
    cin.ignore();

    if(o==1){
        getImoveisPorCidade();
        cout << "Digite o n�mero do im�vel a ser editado: " << endl;
        cin >> n;
        cout << "Digite o que deseja editar no im�vel: " << endl;
        cout << "(1) Valor" << endl;
        cout << "(2) Tipo da oferta" << endl;
        cout << "(3) Rua" << endl;
        cout << "(4) Bairro" << endl;
        cout << "(5) Cidade" << endl;
        cout << "(6) N�mero" << endl;
        cout << "(7) CEP" << endl;

        if(t==1){
            int escolha;

            cout << "(8) N�mero de pavimentos" << endl;
            cout << "(9) N�mero de quartos" << endl;
            cout << "(10) �rea do terreno" << endl;
            cout << "(11) �rea constru�da" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite o n�mero de pavimentos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setNumeroPavimentos(escolha2);
                    break;
                case 9:
                    cout << "Digite o n�mero de quartos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setNumeroQuartos(escolha2);
                    break;
                case 10:
                    cout << "Digite a �rea do terreno: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setAreaTerreno(escolha1);
                    break;
                case 11:
                    cout << "Digite a �rea constru�da: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setAreaConstruida(escolha1);
                    break;

            }

        }
        else if(t==2){
            int escolha;

            cout << "(8) �rea" << endl;
            cout << "(9) Valor do condom�nio" << endl;
            cout << "(10) N�mero de quartos" << endl;
            cout << "(11) Andar" << endl;
            cout << "(12) N�mero de vagas na garagem" << endl;
            cout << "(13) Posi��o" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            std::string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite a �rea: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setArea(escolha1);
                    break;
                case 9:
                    cout << "Digite o valor do condom�nio: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setValorCondominio(escolha1);
                    break;
                case 10:
                    cout << "Digite o n�mero de quartos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setNumQuartos(escolha2);
                    break;
                case 11:
                    cout << "Digite o andar: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setAndar(escolha2);
                    break;
                case 12:
                    cout << "Digite o n�mero de vagas na garagem: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setVagasGaragem(escolha2);
                    break;
                case 13:
                    cout << "Digite a posi��o: " << endl;
                    cin >> escolha3;
                    cin.ignore();
                    lapartamento[n].setPosicao(escolha3);
                    break;

            }
        }
        else if(t==3){
            int escolha;
            cout << "(8) �rea" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lterreno[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lterreno[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite a �rea: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lterreno[n].setArea(escolha1);
                    break;
        }
    }


    }
    else if(o==2){
        getImoveisPorBairro();
        cout << "Digite o n�mero do im�vel a ser editado: " << endl;
        cin >> n;
        cout << "Digite o que deseja editar no im�vel: " << endl;
        cout << "(1) Valor" << endl;
        cout << "(2) Tipo da oferta" << endl;
        cout << "(3) Rua" << endl;
        cout << "(4) Bairro" << endl;
        cout << "(5) Cidade" << endl;
        cout << "(6) N�mero" << endl;
        cout << "(7) CEP" << endl;

        if(t==1){
            int escolha;

            cout << "(8) N�mero de pavimentos" << endl;
            cout << "(9) N�mero de quartos" << endl;
            cout << "(10) �rea do terreno" << endl;
            cout << "(11) �rea constru�da" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite o n�mero de pavimentos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setNumeroPavimentos(escolha2);
                    break;
                case 9:
                    cout << "Digite o n�mero de quartos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setNumeroQuartos(escolha2);
                    break;
                case 10:
                    cout << "Digite a �rea do terreno: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setAreaTerreno(escolha1);
                    break;
                case 11:
                    cout << "Digite a �rea constru�da: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setAreaConstruida(escolha1);
                    break;

            }

        }
        else if(t==2){
            int escolha;

            cout << "(8) �rea" << endl;
            cout << "(9) Valor do condom�nio" << endl;
            cout << "(10) N�mero de quartos" << endl;
            cout << "(11) Andar" << endl;
            cout << "(12) N�mero de vagas na garagem" << endl;
            cout << "(13) Posi��o" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            std::string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite a �rea: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setArea(escolha1);
                    break;
                case 9:
                    cout << "Digite o valor do condom�nio: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setValor(escolha1);
                    break;
                case 10:
                    cout << "Digite o n�mero de quartos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setNumQuartos(escolha2);
                    break;
                case 11:
                    cout << "Digite o andar: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setAndar(escolha2);
                    break;
                case 12:
                    cout << "Digite o n�mero de vagas na garagem: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setVagasGaragem(escolha2);
                    break;
                case 13:
                    cout << "Digite a posi��o: " << endl;
                    cin >> escolha3;
                    cin.ignore();
                    lapartamento[n].setPosicao(escolha3);
                    break;

            }
        }
        else if(t==3){
            int escolha;
            cout << "(8) �rea" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lterreno[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lterreno[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite a �rea: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lterreno[n].setArea(escolha1);
                    break;
        }
    }

    }
    else if(o==3){
        getImoveisPorDescricao();
        cout << "Digite o n�mero do im�vel a ser editado: " << endl;
        cin >> n;
        cout << "Digite o que deseja editar no im�vel: " << endl;
        cout << "(1) Valor" << endl;
        cout << "(2) Tipo da oferta" << endl;
        cout << "(3) Rua" << endl;
        cout << "(4) Bairro" << endl;
        cout << "(5) Cidade" << endl;
        cout << "(6) N�mero" << endl;
        cout << "(7) CEP" << endl;

        if(t==1){
            int escolha;

            cout << "(8) N�mero de pavimentos" << endl;
            cout << "(9) N�mero de quartos" << endl;
            cout << "(10) �rea do terreno" << endl;
            cout << "(11) �rea constru�da" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite o n�mero de pavimentos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setNumeroPavimentos(escolha2);
                    break;
                case 9:
                    cout << "Digite o n�mero de quartos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setNumeroQuartos(escolha2);
                    break;
                case 10:
                    cout << "Digite a �rea do terreno: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setAreaTerreno(escolha1);
                    break;
                case 11:
                    cout << "Digite a �rea constru�da: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setAreaConstruida(escolha1);
                    break;

            }

        }
        else if(t==2){
            int escolha;

            cout << "(8) �rea" << endl;
            cout << "(9) Valor do condom�nio" << endl;
            cout << "(10) N�mero de quartos" << endl;
            cout << "(11) Andar" << endl;
            cout << "(12) N�mero de vagas na garagem" << endl;
            cout << "(13) Posi��o" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            std::string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite a �rea: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setArea(escolha1);
                    break;
                case 9:
                    cout << "Digite o valor do condom�nio: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setValor(escolha1);
                    break;
                case 10:
                    cout << "Digite o n�mero de quartos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setNumQuartos(escolha2);
                    break;
                case 11:
                    cout << "Digite o andar: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setAndar(escolha2);
                    break;
                case 12:
                    cout << "Digite o n�mero de vagas na garagem: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setVagasGaragem(escolha2);
                    break;
                case 13:
                    cout << "Digite a posi��o: " << endl;
                    cin >> escolha3;
                    cin.ignore();
                    lapartamento[n].setPosicao(escolha3);
                    break;

            }
        }
        else if(t==3){
            int escolha;
            cout << "(8) �rea" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lterreno[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lterreno[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite a �rea: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lterreno[n].setArea(escolha1);
                    break;
        }
    }

    }
    else if(o==4){
        getImoveisPorValor();
        cout << "Digite o n�mero do im�vel a ser editado: " << endl;
        cin >> n;
        cout << "Digite o que deseja editar no im�vel: " << endl;
        cout << "(1) Valor" << endl;
        cout << "(2) Tipo da oferta" << endl;
        cout << "(3) Rua" << endl;
        cout << "(4) Bairro" << endl;
        cout << "(5) Cidade" << endl;
        cout << "(6) N�mero" << endl;
        cout << "(7) CEP" << endl;

        if(t==1){
            int escolha;

            cout << "(8) N�mero de pavimentos" << endl;
            cout << "(9) N�mero de quartos" << endl;
            cout << "(10) �rea do terreno" << endl;
            cout << "(11) �rea constru�da" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lcasa[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite o n�mero de pavimentos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setNumeroPavimentos(escolha2);
                    break;
                case 9:
                    cout << "Digite o n�mero de quartos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lcasa[n].setNumeroQuartos(escolha2);
                    break;
                case 10:
                    cout << "Digite a �rea do terreno: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setAreaTerreno(escolha1);
                    break;
                case 11:
                    cout << "Digite a �rea constru�da: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lcasa[n].setAreaConstruida(escolha1);
                    break;

            }

        }
        else if(t==2){
            int escolha;

            cout << "(8) �rea" << endl;
            cout << "(9) Valor do condom�nio" << endl;
            cout << "(10) N�mero de quartos" << endl;
            cout << "(11) Andar" << endl;
            cout << "(12) N�mero de vagas na garagem" << endl;
            cout << "(13) Posi��o" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            std::string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lapartamento[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite a �rea: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setArea(escolha1);
                    break;
                case 9:
                    cout << "Digite o valor do condom�nio: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lapartamento[n].setValor(escolha1);
                    break;
                case 10:
                    cout << "Digite o n�mero de quartos: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setNumQuartos(escolha2);
                    break;
                case 11:
                    cout << "Digite o andar: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setAndar(escolha2);
                    break;
                case 12:
                    cout << "Digite o n�mero de vagas na garagem: " << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lapartamento[n].setVagasGaragem(escolha2);
                    break;
                case 13:
                    cout << "Digite a posi��o: " << endl;
                    cin >> escolha3;
                    cin.ignore();
                    lapartamento[n].setPosicao(escolha3);
                    break;

            }
        }
        else if(t==3){
            int escolha;
            cout << "(8) �rea" << endl;

            cout << "Digite o n�mero do que voc� deseja editar: " << endl;
            cin >> escolha;
            cin.ignore();

            double escolha1;
            int escolha2;
            string escolha3;

            switch(escolha){

                case 1:

                    cout << "Digite o valor desejado: ";
                    cin >> escolha1;
                    cin.ignore();
                    lterreno[n].setValor(escolha1);
                    break;
                case 2:
                    cout << "Digite o novo tipo de oferta: (1) Aluguel / (2) Venda" << endl;
                    cin >> escolha2;
                    cin.ignore();
                    lterreno[n].setTipoOferta(escolha2);
                    break;
                case 3:
                    cout << "Digite o nome da rua: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setRua(escolha3);
                    break;
                case 4:
                    cout << "Digite o nome do bairro: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setBairro(escolha3);
                    break;
                case 5:
                    cout << "Digite o nome da cidade: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setCidade(escolha3);
                    break;
                case 6:
                    cout << "Digite o n�mero: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setNumero(escolha3);
                    break;
                case 7:
                    cout << "Digite o CEP: " << endl;
                    getline(cin, escolha3);
                    lterreno[n].setCEP(escolha3);
                    break;
                case 8:
                    cout << "Digite a �rea: " << endl;
                    cin >> escolha1;
                    cin.ignore();
                    lterreno[n].setArea(escolha1);
                    break;
        }
    }


    }
}
void SistemaImobiliario::cadastrarImovel()
{
    double valor;
    int tipoOferta, tipoImovel;
    std::string descricao, rua, numero, bairro, cidade, CEP;

    cout << "Digite o im�vel que voc� deseja cadastrar: \nCasa (1) Apartamento (2) Terreno (3)"  << endl;
    cin >>  tipoImovel;
    fflush(stdin);

    cout << "O im�vel encontra-se para venda (1) ou aluguel (2)?" << endl;
    cin >> tipoOferta;
    fflush(stdin);

    cout << "Digite o valor do im�vel: " << endl;
    cin >> valor;
    fflush(stdin);

    cout << "Fa�a uma descri��o para o seu im�vel: " << endl;
    getline(cin, descricao);
    fflush(stdin);

    cout << "Digite a rua do seu im�vel: " << endl;
    getline(cin, rua);
    fflush(stdin);

    cout << "Digite o n�mero do im�vel: " << endl;
    cin >> numero;
    fflush(stdin);

    cout << "Digite o bairro do im�vel: " << endl;
    getline(cin, bairro);
    fflush(stdin);

    cout << "Digite a cidade do im�vel: " << endl;
    getline(cin, cidade);
    fflush(stdin);

    cout << "Digite o CEP do im�vel: " << endl;
    cin >> CEP;
    fflush(stdin);

    if(tipoImovel == 1){

        int numPavimentos, numQuartos;
        double areaTerreno, areaConstruida;

        cout << "Digite o n�mero de pavimentos: " << endl;
        cin >> numPavimentos;
        fflush(stdin);

        cout << "Digite o n�mero de quartos: " << endl;
        cin >> numQuartos;
        fflush(stdin);

        cout << "Digite a �rea do terreno: " << endl;
        cin >> areaTerreno;
        fflush(stdin);

        cout << "Digite a �rea constru�da: "  << endl;
        cin >> areaConstruida;
        fflush(stdin);

        lcasa.push_back(Casa(descricao, valor, tipoOferta, tipoImovel, rua, numero, bairro, cidade, CEP, numPavimentos, numQuartos, areaTerreno, areaConstruida));
    }
    else if(tipoImovel == 2){

        double area, valorCondominio;
        int numQuartos, andar, vagasGaragem;
        string posicao;

        cout << "Digite a �rea do apartamento:  " << endl;
        cin >> area;
        fflush(stdin);

        cout << "Digite o valor do condom�nio " << endl;
        cin >> valorCondominio;
        fflush(stdin);

        cout << "Digite o n�mero de quartos: " << endl;
        cin >> numQuartos;
        fflush(stdin);

        cout << "Digite o andar do apartamento " << endl;
        cin >> andar;
        fflush(stdin);

        cout << "Digite o n�mero de vagas na garagem: " << endl;
        cin >> vagasGaragem;
        fflush(stdin);

        cout << "Digite a posi��o do apartamento: " << endl;
        getline(cin, posicao);
        fflush(stdin);

        lapartamento.push_back(Apartamento(descricao, valor, tipoOferta, tipoImovel, rua, numero, bairro, cidade, CEP, area, valorCondominio, numQuartos, andar, vagasGaragem, posicao));
    }
    else if(tipoImovel == 3){

         double area;

         cout << "Digite a �rea do terreno: " << endl;
         cin >> area;
         fflush(stdin);

        lterreno.push_back(Terreno(descricao, valor, tipoOferta, tipoImovel, rua, numero, bairro, cidade, CEP, area));
    }
}
void SistemaImobiliario::getImoveis()
{
    cout << "Casas: " << endl;
    for(int i=0; i<lcasa.size(); i++){
            cout << "Endere�o: " << lcasa[i].getEndereco() << endl;
            cout << "Valor: " << lcasa[i].getValor() << endl;
            cout << "N�mero de pavimentos: " << lcasa[i].getNumPavimentos() << endl;
            cout << "N�mero de quartos: " << lcasa[i].getNumQuartos() << endl;
            cout << "�rea do terreno: " << lcasa[i].getAreaTerreno() << endl;
            cout << "�rea constru�da: " << lcasa[i].getAreaConstruida() << endl;

            if(lcasa[i].getTipoOferta() == 1){
                cout << "Im�vel dispon�vel para venda" << endl;
            }
            else if(lcasa[i].getTipoOferta() == 2){
                cout << "Im�vel dispon�vel para aluguel" << endl;
            }
            cout << "_________________________________________" << endl;
        }
        cout << "Apartamentos: " << endl;
        for(int i=0; i<lapartamento.size(); i++){
            cout << "Endere�o: " << lapartamento[i].getEndereco() << endl;
            cout << "Valor: " << lapartamento[i].getValor() << endl;
            cout << "�rea do apartamento: " << lapartamento[i].getArea() << endl;
            cout << "Taxa do condom�nio: " << lapartamento[i].getValorCondominio() << endl;
            cout << "N�mero de quartos: " << lapartamento[i].getNumQuartos() << endl;
            cout << "Andar: " << lapartamento[i].getAndar() << endl;
            cout << "Vagas de garagem: " << lapartamento[i].getVagasGaragem() << endl;
            cout << "Posi��o: " << lapartamento[i].getPosicao() << endl;

            if(lapartamento[i].getTipoOferta() == 1){
                cout << "Im�vel dispon�vel para venda" << endl;
            }
            else if(lapartamento[i].getTipoOferta() == 2){
                cout << "Im�vel dispon�vel para aluguel" << endl;
            }
            cout << "_________________________________________" << endl;
        }
        cout << "Terrenos: " << endl;
        for(int i=0; i<lterreno.size(); i++){
                cout << "Endere�o: " << lterreno[i].getEndereco() << endl;
                cout << "Valor: " << lterreno[i].getValor() << endl;
                cout << "�rea do terreno: " << lterreno[i].getArea() << endl;

                if(lterreno[i].getTipoOferta() == 1){
                    cout << "Im�vel dispon�vel para venda" << endl;
                }
                else if(lterreno[i].getTipoOferta() == 2){
                    cout << "Im�vel dispon�vel para aluguel" << endl;
                }
                cout << "_________________________________________" << endl;
        }
}

void SistemaImobiliario::getDescricao()
{
    cout << "Casas: " << endl;
    for(int i=0; i<lcasa.size(); i++){
        cout << lcasa[i].getDescricao() << endl;
    }
    cout << "_________________________________________" << endl;
    cout << "Apartamentos: " << endl;
    for(int i=0; i<lapartamento.size(); i++){
        cout << lapartamento[i].getDescricao() << endl;
    }
    cout << "_________________________________________" << endl;
    cout << "Terrenos: " << endl;
    for(int i=0; i<lterreno.size(); i++){
        cout << lterreno[i].getDescricao() << endl;
    }
    cout << "_________________________________________" << endl;
}

void SistemaImobiliario::getImoveisPorTipo()
{
    int tipoI;

    cout << "Digite o tipo de im�vel a ser exibido: (1) Casa, (2) Apartamento, (3) Terreno" << endl;
    cin >> tipoI;

    if(tipoI==1){

        cout << "Casas: " << endl;
        for(int i=0; i<lcasa.size(); i++){
            cout << "Endere�o: " << lcasa[i].getEndereco() << endl;
            cout << "Valor: " << lcasa[i].getValor() << endl;
            cout << "N�mero de pavimentos: " << lcasa[i].getNumPavimentos() << endl;
            cout << "N�mero de quartos: " << lcasa[i].getNumQuartos() << endl;
            cout << "�rea do terreno: " << lcasa[i].getAreaTerreno() << endl;
            cout << "�rea constru�da: " << lcasa[i].getAreaConstruida() << endl;

            if(lcasa[i].getTipoOferta() == 1){
                cout << "Im�vel dispon�vel para venda" << endl;
            }
            else if(lcasa[i].getTipoOferta() == 2){
                cout << "Im�vel dispon�vel para aluguel" << endl;
            }
            cout << "_________________________________________" << endl;
        }
    }
    else if(tipoI==2){
            cout << "Apartamentos: " << endl;
        for(int i=0; i<lapartamento.size(); i++){
            cout << "Endere�o: " << lapartamento[i].getEndereco() << endl;
            cout << "Valor: " << lapartamento[i].getValor() << endl;
            cout << "�rea do apartamento: " << lapartamento[i].getArea() << endl;
            cout << "Taxa do condom�nio: " << lapartamento[i].getValorCondominio() << endl;
            cout << "N�mero de quartos: " << lapartamento[i].getNumQuartos() << endl;
            cout << "Andar: " << lapartamento[i].getAndar() << endl;
            cout << "Vagas de garagem: " << lapartamento[i].getVagasGaragem() << endl;
            cout << "Posi��o: " << lapartamento[i].getPosicao() << endl;

            if(lapartamento[i].getTipoOferta() == 1){
                cout << "Im�vel dispon�vel para venda" << endl;
            }
            else if(lapartamento[i].getTipoOferta() == 2){
                cout << "Im�vel dispon�vel para aluguel" << endl;
            }
            cout << "_________________________________________" << endl;
        }
    }
    else if(tipoI==3){
            cout << "Terrenos: " << endl;
        for(int i=0; i<lterreno.size(); i++){
                cout << "Endere�o: " << lterreno[i].getEndereco() << endl;
                cout << "Valor: " << lterreno[i].getValor() << endl;
                cout << "�rea do terreno: " << lterreno[i].getArea() << endl;

                if(lterreno[i].getTipoOferta() == 1){
                    cout << "Im�vel dispon�vel para venda" << endl;
                }
                else if(lterreno[i].getTipoOferta() == 2){
                    cout << "Im�vel dispon�vel para aluguel" << endl;
                }
                cout << "_________________________________________" << endl;
        }
    }
}

void SistemaImobiliario::getImoveisParaAlugar()
{
    cout << "Casas: " << endl;
    for(int i=0; i<lcasa.size(); i++){
            if(lcasa[i].getTipoOferta() == 2){
                    cout << "Endere�o: " << lcasa[i].getEndereco() << endl;
                    cout << "Valor: " << lcasa[i].getValor() << endl;
                    cout << "N�mero de pavimentos: " << lcasa[i].getNumPavimentos() << endl;
                    cout << "N�mero de quartos: " << lcasa[i].getNumQuartos() << endl;
                    cout << "�rea do terreno: " << lcasa[i].getAreaTerreno() << endl;
                    cout << "�rea constru�da: " << lcasa[i].getAreaConstruida() << endl;

                    if(lcasa[i].getTipoOferta() == 1){
                        cout << "Im�vel dispon�vel para venda" << endl;
                    }
                    else if(lcasa[i].getTipoOferta() == 2){
                        cout << "Im�vel dispon�vel para aluguel" << endl;
                    }
                    cout << "_________________________________________" << endl;

                }
        }
        cout << "Apartamentos: " << endl;
        for(int i=0; i<lapartamento.size(); i++){
            if(lapartamento[i].getTipoOferta() == 2){
                cout << "Endere�o: " << lapartamento[i].getEndereco() << endl;
                cout << "Valor: " << lapartamento[i].getValor() << endl;
                cout << "�rea do apartamento: " << lapartamento[i].getArea() << endl;
                cout << "Taxa do condom�nio: " << lapartamento[i].getValorCondominio() << endl;
                cout << "N�mero de quartos: " << lapartamento[i].getNumQuartos() << endl;
                cout << "Andar: " << lapartamento[i].getAndar() << endl;
                cout << "Vagas de garagem: " << lapartamento[i].getVagasGaragem() << endl;
                cout << "Posi��o: " << lapartamento[i].getPosicao() << endl;

                if(lapartamento[i].getTipoOferta() == 1){
                    cout << "Im�vel dispon�vel para venda" << endl;
                }
                else if(lapartamento[i].getTipoOferta() == 2){
                    cout << "Im�vel dispon�vel para aluguel" << endl;
                }
                cout << "_________________________________________" << endl;
            }
        }
        cout << "Terrenos: " << endl;
        for(int i=0; i<lterreno.size(); i++){
                if(lterreno[i].getTipoOferta() == 2){
                    cout << "Endere�o: " << lterreno[i].getEndereco() << endl;
                    cout << "Valor: " << lterreno[i].getValor() << endl;
                    cout << "�rea do terreno: " << lterreno[i].getArea() << endl;

                    if(lterreno[i].getTipoOferta() == 1){
                        cout << "Im�vel dispon�vel para venda" << endl;
                    }
                    else if(lterreno[i].getTipoOferta() == 2){
                        cout << "Im�vel dispon�vel para aluguel" << endl;
                    }
                    cout << "_________________________________________" << endl;
            }
     }
}

void SistemaImobiliario::getImoveisParaVender()
{
    cout << "Casas: " << endl;
    for(int i=0; i<lcasa.size(); i++){
                if(lcasa[i].getTipoOferta() == 1){
                    cout << "Endere�o: " << lcasa[i].getEndereco() << endl;
                    cout << "Valor: " << lcasa[i].getValor() << endl;
                    cout << "N�mero de pavimentos: " << lcasa[i].getNumPavimentos() << endl;
                    cout << "N�mero de quartos: " << lcasa[i].getNumQuartos() << endl;
                    cout << "�rea do terreno: " << lcasa[i].getAreaTerreno() << endl;
                    cout << "�rea constru�da: " << lcasa[i].getAreaConstruida() << endl;

                    if(lcasa[i].getTipoOferta() == 1){
                        cout << "Im�vel dispon�vel para venda" << endl;
                    }
                    else if(lcasa[i].getTipoOferta() == 2){
                        cout << "Im�vel dispon�vel para aluguel" << endl;
                    }
                    cout << "_________________________________________" << endl;

                }
        }
        cout << "Apartamentos: " << endl;
        for(int i=0; i<lapartamento.size(); i++){
            if(lapartamento[i].getTipoOferta() == 1){
                cout << "Endere�o: " << lapartamento[i].getEndereco() << endl;
                cout << "Valor: " << lapartamento[i].getValor() << endl;
                cout << "�rea do apartamento: " << lapartamento[i].getArea() << endl;
                cout << "Taxa do condom�nio: " << lapartamento[i].getValorCondominio() << endl;
                cout << "N�mero de quartos: " << lapartamento[i].getNumQuartos() << endl;
                cout << "Andar: " << lapartamento[i].getAndar() << endl;
                cout << "Vagas de garagem: " << lapartamento[i].getVagasGaragem() << endl;
                cout << "Posi��o: " << lapartamento[i].getPosicao() << endl;

                if(lapartamento[i].getTipoOferta() == 1){
                    cout << "Im�vel dispon�vel para venda" << endl;
                }
                else if(lapartamento[i].getTipoOferta() == 2){
                    cout << "Im�vel dispon�vel para aluguel" << endl;
                }
                cout << "_________________________________________" << endl;
            }
        }
        cout << "Terrenos: " << endl;
        for(int i=0; i<lterreno.size(); i++){
                if(lterreno[i].getTipoOferta() == 1){
                    cout << "Endere�o: " << lterreno[i].getEndereco() << endl;
                    cout << "Valor: " << lterreno[i].getValor() << endl;
                    cout << "�rea do terreno: " << lterreno[i].getArea() << endl;

                    if(lterreno[i].getTipoOferta() == 1){
                        cout << "Im�vel dispon�vel para venda" << endl;
                    }
                    else if(lterreno[i].getTipoOferta() == 2){
                        cout << "Im�vel dispon�vel para aluguel" << endl;
                    }
                    cout << "_________________________________________" << endl;
            }
     }
}

void SistemaImobiliario::getImoveisPorCidade()
{
    std::string cdd;
    std::string cidade2;
    cout << "Digite o nome da cidade a ser pesquisada: " << endl;

    getline(cin, cdd);

        cout << "Casas: " << endl;
        for(int i=0; i<lcasa.size(); i++){
                cidade2 = lcasa[i].getCidade();
                std::transform(cdd.begin(), cdd.end(), cdd.begin(), ::toupper);
                std::transform(cidade2.begin(), cidade2.end(), cidade2.begin(), ::toupper);
                if(strncmp(cdd.c_str(),cidade2.c_str(),cdd.size())==0){
                    cout << "Casa n�mero " << i << endl;
                    cout << "Endere�o: " << lcasa[i].getEndereco() << endl;
                    cout << "Valor: " << lcasa[i].getValor() << endl;
                    cout << "N�mero de pavimentos: " << lcasa[i].getNumPavimentos() << endl;
                    cout << "N�mero de quartos: " << lcasa[i].getNumQuartos() << endl;
                    cout << "�rea do terreno: " << lcasa[i].getAreaTerreno() << endl;
                    cout << "�rea constru�da: " << lcasa[i].getAreaConstruida() << endl;

                    if(lcasa[i].getTipoOferta() == 1){
                        cout << "Casa dispon�vel para venda" << endl;
                    }
                    else if(lcasa[i].getTipoOferta() == 2){
                        cout << "Casa dispon�vel para aluguel" << endl;
                    }
                    cout << "_________________________________________" << endl;

                }
        }
        cout << "Apartamentos: " << endl;
        for(int i=0; i<lapartamento.size(); i++){
                cidade2 = lapartamento[i].getCidade();
                std::transform(cdd.begin(), cdd.end(), cdd.begin(), ::toupper);
                std::transform(cidade2.begin(), cidade2.end(), cidade2.begin(), ::toupper);
                if(strncmp(cdd.c_str(),cidade2.c_str(),cdd.size())==0){
                cout << "Apartamento n�mero " << i << endl;
                cout << "Endere�o: " << lapartamento[i].getEndereco() << endl;
                cout << "Valor: " << lapartamento[i].getValor() << endl;
                cout << "�rea do apartamento: " << lapartamento[i].getArea() << endl;
                cout << "Taxa do condom�nio: " << lapartamento[i].getValorCondominio() << endl;
                cout << "N�mero de quartos: " << lapartamento[i].getNumQuartos() << endl;
                cout << "Andar: " << lapartamento[i].getAndar() << endl;
                cout << "Vagas de garagem: " << lapartamento[i].getVagasGaragem() << endl;
                cout << "Posi��o: " << lapartamento[i].getPosicao() << endl;

                if(lapartamento[i].getTipoOferta() == 1){
                    cout << "Apartamento dispon�vel para venda" << endl;
                }
                else if(lapartamento[i].getTipoOferta() == 2){
                    cout << "Apartamento dispon�vel para aluguel" << endl;
                }
                cout << "_________________________________________" << endl;
            }
        }
        cout << "Terrenos: " << endl;
        for(int i=0; i<lterreno.size(); i++){
                cidade2 = lterreno[i].getCidade();
                std::transform(cdd.begin(), cdd.end(), cdd.begin(), ::toupper);
                std::transform(cidade2.begin(), cidade2.end(), cidade2.begin(), ::toupper);
                if(strncmp(cdd.c_str(),cidade2.c_str(),cdd.size())==0){
                    cout << "Terreno n�mero " << i << endl;
                    cout << "Endere�o: " << lterreno[i].getEndereco() << endl;
                    cout << "Valor: " << lterreno[i].getValor() << endl;
                    cout << "�rea do terreno: " << lterreno[i].getArea() << endl;

                    if(lterreno[i].getTipoOferta() == 1){
                        cout << "Terreno dispon�vel para venda" << endl;
                    }
                    else if(lterreno[i].getTipoOferta() == 2){
                        cout << "Terreno dispon�vel para aluguel" << endl;
                    }
                    cout << "_________________________________________" << endl;
            }
     }
}

void SistemaImobiliario::getImoveisPorBairro(){
    std::string byrro;
    std::string bairro2;
    cout << "Digite o nome do bairro a ser pesquisado: " << endl;

    getline(cin, byrro);

        cout << "Casas: " << endl;
        for(int i=0; i<lcasa.size(); i++){
                bairro2 = lcasa[i].getBairro();
                std::transform(byrro.begin(), byrro.end(), byrro.begin(), ::toupper);
                std::transform(bairro2.begin(), bairro2.end(), bairro2.begin(), ::toupper);
                if(strncmp(byrro.c_str(),bairro2.c_str(),byrro.size())==0){
                    cout << "Casa n�mero " << i << endl;
                    cout << "Endere�o: " << lcasa[i].getEndereco() << endl;
                    cout << "Valor: " << lcasa[i].getValor() << endl;
                    cout << "N�mero de pavimentos: " << lcasa[i].getNumPavimentos() << endl;
                    cout << "N�mero de quartos: " << lcasa[i].getNumQuartos() << endl;
                    cout << "�rea do terreno: " << lcasa[i].getAreaTerreno() << endl;
                    cout << "�rea constru�da: " << lcasa[i].getAreaConstruida() << endl;

                    if(lcasa[i].getTipoOferta() == 1){
                        cout << "Casa dispon�vel para venda" << endl;
                    }
                    else if(lcasa[i].getTipoOferta() == 2){
                        cout << "Casa dispon�vel para aluguel" << endl;
                    }
                    cout << "_________________________________________" << endl;

                }
        }
        cout << "Apartamentos: " << endl;
        for(int i=0; i<lapartamento.size(); i++){
                bairro2 = lapartamento[i].getBairro();
                std::transform(byrro.begin(), byrro.end(), byrro.begin(), ::toupper);
                std::transform(bairro2.begin(), bairro2.end(), bairro2.begin(), ::toupper);
                if(strncmp(byrro.c_str(),bairro2.c_str(),byrro.size())==0){
                cout << "Apartamento n�mero " << i << endl;
                cout << "Endere�o: " << lapartamento[i].getEndereco() << endl;
                cout << "Valor: " << lapartamento[i].getValor() << endl;
                cout << "�rea do apartamento: " << lapartamento[i].getArea() << endl;
                cout << "Taxa do condom�nio: " << lapartamento[i].getValorCondominio() << endl;
                cout << "N�mero de quartos: " << lapartamento[i].getNumQuartos() << endl;
                cout << "Andar: " << lapartamento[i].getAndar() << endl;
                cout << "Vagas de garagem: " << lapartamento[i].getVagasGaragem() << endl;
                cout << "Posi��o: " << lapartamento[i].getPosicao() << endl;

                if(lapartamento[i].getTipoOferta() == 1){
                    cout << "Apartamento dispon�vel para venda" << endl;
                }
                else if(lapartamento[i].getTipoOferta() == 2){
                    cout << "Apartamento dispon�vel para aluguel" << endl;
                }
                cout << "_________________________________________" << endl;
            }
        }
        cout << "Terrenos: " << endl;
        for(int i=0; i<lterreno.size(); i++){
                bairro2 = lterreno[i].getBairro();
                std::transform(byrro.begin(), byrro.end(), byrro.begin(), ::toupper);
                std::transform(bairro2.begin(), bairro2.end(), bairro2.begin(), ::toupper);
                if(strncmp(byrro.c_str(),bairro2.c_str(),byrro.size())==0){
                    cout << "Terreno n�mero " << i << endl;
                    cout << "Endere�o: " << lterreno[i].getEndereco() << endl;
                    cout << "Valor: " << lterreno[i].getValor() << endl;
                    cout << "�rea do terreno: " << lterreno[i].getArea() << endl;

                    if(lterreno[i].getTipoOferta() == 1){
                        cout << "Terreno dispon�vel para venda" << endl;
                    }
                    else if(lterreno[i].getTipoOferta() == 2){
                        cout << "Terreno dispon�vel para aluguel" << endl;
                    }
                    cout << "_________________________________________" << endl;
            }
     }
}

void SistemaImobiliario::getImoveisPorDescricao(){
    std::string desc;
    std::string descricao2;
    cout << "Digite a descri��o a ser pesquisada: " << endl;

    getline(cin, desc);

        cout << "Casas: " << endl;
        for(int i=0; i<lcasa.size(); i++){
                descricao2 = lcasa[i].getDescricao();
                std::transform(desc.begin(), desc.end(), desc.begin(), ::toupper);
                std::transform(descricao2.begin(), descricao2.end(), descricao2.begin(), ::toupper);
                if(strncmp(desc.c_str(),descricao2.c_str(),desc.size())==0){
                    cout << "Casa n�mero " << i << endl;
                    cout << "Descri��o: " << lcasa[i].getDescricao() << endl;
                    cout << "Endere�o: " << lcasa[i].getEndereco() << endl;
                    cout << "Valor: " << lcasa[i].getValor() << endl;
                    cout << "N�mero de pavimentos: " << lcasa[i].getNumPavimentos() << endl;
                    cout << "N�mero de quartos: " << lcasa[i].getNumQuartos() << endl;
                    cout << "�rea do terreno: " << lcasa[i].getAreaTerreno() << endl;
                    cout << "�rea constru�da: " << lcasa[i].getAreaConstruida() << endl;

                    if(lcasa[i].getTipoOferta() == 1){
                        cout << "Casa dispon�vel para venda" << endl;
                    }
                    else if(lcasa[i].getTipoOferta() == 2){
                        cout << "Casa dispon�vel para aluguel" << endl;
                    }
                    cout << "_________________________________________" << endl;

                }
        }
        cout << "Apartamento: " << endl;
        for(int i=0; i<lapartamento.size(); i++){
                descricao2 = lapartamento[i].getDescricao();
                std::transform(desc.begin(), desc.end(), desc.begin(), ::toupper);
                std::transform(descricao2.begin(), descricao2.end(), descricao2.begin(), ::toupper);
                if(strncmp(desc.c_str(),descricao2.c_str(),desc.size())==0){
                cout << "Apartamento n�mero " << i << endl;
                cout << "Descri��o: " << lapartamento[i].getDescricao() << endl;
                cout << "Endere�o: " << lapartamento[i].getEndereco() << endl;
                cout << "Valor: " << lapartamento[i].getValor() << endl;
                cout << "�rea do apartamento: " << lapartamento[i].getArea() << endl;
                cout << "Taxa do condom�nio: " << lapartamento[i].getValorCondominio() << endl;
                cout << "N�mero de quartos: " << lapartamento[i].getNumQuartos() << endl;
                cout << "Andar: " << lapartamento[i].getAndar() << endl;
                cout << "Vagas de garagem: " << lapartamento[i].getVagasGaragem() << endl;
                cout << "Posi��o: " << lapartamento[i].getPosicao() << endl;

                if(lapartamento[i].getTipoOferta() == 1){
                    cout << "Apartamento dispon�vel para venda" << endl;
                }
                else if(lapartamento[i].getTipoOferta() == 2){
                    cout << "Apartamento dispon�vel para aluguel" << endl;
                }
                cout << "_________________________________________" << endl;
            }
        }
        cout << "Terrenos: " << endl;
        for(int i=0; i<lterreno.size(); i++){
                descricao2 = lterreno[i].getDescricao();
                std::transform(desc.begin(), desc.end(), desc.begin(), ::toupper);
                std::transform(descricao2.begin(), descricao2.end(), descricao2.begin(), ::toupper);
                if(strncmp(desc.c_str(),descricao2.c_str(),desc.size())==0){
                    cout << "Terreno n�mero " << i << endl;
                    cout << "Descri��o: " << lterreno[i].getDescricao() << endl;
                    cout << "Endere�o: " << lterreno[i].getEndereco() << endl;
                    cout << "Valor: " << lterreno[i].getValor() << endl;
                    cout << "�rea do terreno: " << lterreno[i].getArea() << endl;

                    if(lterreno[i].getTipoOferta() == 1){
                        cout << "Terreno dispon�vel para venda" << endl;
                    }
                    else if(lterreno[i].getTipoOferta() == 2){
                        cout << "Terreno dispon�vel para aluguel" << endl;
                    }
                    cout << "_________________________________________" << endl;
            }
     }

}

void SistemaImobiliario::getImoveisPorValor(){

    double vmax, vmin;

    cout << "Qual o valor m�nimo que deseja pagar pelo im�vel: " << endl;
    cin >> vmin;
    cin.ignore();
    cout << "Qual o valor m�ximo que deseja pagar pelo im�vel: " << endl;
    cin >> vmax;
    cin.ignore();


    cout << "Casas: " << endl;
    for(int i=0; i<lcasa.size(); i++){
            if(lcasa[i].getValor() >= vmin && lcasa[i].getValor() <= vmax){
            cout << "Casa n�mero " << i << endl;
            cout << "Endere�o: " << lcasa[i].getEndereco() << endl;
            cout << "Valor: " << lcasa[i].getValor() << endl;
            cout << "N�mero de pavimentos: " << lcasa[i].getNumPavimentos() << endl;
            cout << "N�mero de quartos: " << lcasa[i].getNumQuartos() << endl;
            cout << "�rea do terreno: " << lcasa[i].getAreaTerreno() << endl;
            cout << "�rea constru�da: " << lcasa[i].getAreaConstruida() << endl;

            if(lcasa[i].getTipoOferta() == 1){
                cout << "Casa dispon�vel para venda" << endl;
            }
            else if(lcasa[i].getTipoOferta() == 2){
                cout << "Casa dispon�vel para aluguel" << endl;
            }
            cout << "_________________________________________" << endl;
            }
        }
        cout << "Apartamentos: " << endl;
        for(int i=0; i<lapartamento.size(); i++){
            if(lapartamento[i].getValor() >= vmin && lapartamento[i].getValor() <= vmax){
            cout << "Apartamento n�mero " << i << endl;
            cout << "Endere�o: " << lapartamento[i].getEndereco() << endl;
            cout << "Valor: " << lapartamento[i].getValor() << endl;
            cout << "�rea do apartamento: " << lapartamento[i].getArea() << endl;
            cout << "Taxa do condom�nio: " << lapartamento[i].getValorCondominio() << endl;
            cout << "N�mero de quartos: " << lapartamento[i].getNumQuartos() << endl;
            cout << "Andar: " << lapartamento[i].getAndar() << endl;
            cout << "Vagas de garagem: " << lapartamento[i].getVagasGaragem() << endl;
            cout << "Posi��o: " << lapartamento[i].getPosicao() << endl;

            if(lapartamento[i].getTipoOferta() == 1){
                cout << "Apartamento dispon�vel para venda" << endl;
            }
            else if(lapartamento[i].getTipoOferta() == 2){
                cout << "Apartamento dispon�vel para aluguel" << endl;
            }
            cout << "_________________________________________" << endl;
            }
        }
        cout << "Terrenos: " << endl;
        for(int i=0; i<lterreno.size(); i++){
                if(lterreno[i].getValor() >= vmin && lterreno[i].getValor() <= vmax){
                cout << "Terreno n�mero " << i << endl;
                cout << "Endere�o: " << lterreno[i].getEndereco() << endl;
                cout << "Valor: " << lterreno[i].getValor() << endl;
                cout << "�rea do terreno: " << lterreno[i].getArea() << endl;

                if(lterreno[i].getTipoOferta() == 1){
                    cout << "Terreno dispon�vel para venda" << endl;
                }
                else if(lterreno[i].getTipoOferta() == 2){
                    cout << "Terreno dispon�vel para aluguel" << endl;
                }
                cout << "_________________________________________" << endl;
                }
        }
}

int SistemaImobiliario::menuExibicao()
{
    int e;

    cout << " ___________________________________________" << endl;
    cout << "|                                           |" << endl;
    cout << "|\tBem vindo � Imobili�ria Fofinha     |" << endl;
    cout << "|\tDigite o que deseja fazer:          |" << endl;
    cout << "|\t1-Cadastrar im�vel                  |" << endl;
    cout << "|\t2-Consultar todos os im�veis        |" << endl;
    cout << "|\t3-Consultar descri��o dos im�veis   |" << endl;
    cout << "|\t4-Consultar im�veis por tipo        |" << endl;
    cout << "|\t5-Consultar im�veis para alugar     |" << endl;
    cout << "|\t6-Consultar im�veis para vender     |" << endl;
    cout << "|\t7-Consultar im�veis por cidade      |" << endl;
    cout << "|\t8-Consultar im�veis por bairro      |" << endl;
    cout << "|\t9-Consultar im�veis por descri��o   |" << endl;
    cout << "|\t10-Remover um im�vel                |" << endl;
    cout << "|\t11-Editar um im�vel                 |" << endl;
    cout << "|\t12- Salvar                          |" << endl;
    cout << "|\t13- Sair                            |" << endl;
    cout << "|                                           |" << endl;
    cout << "|___________________________________________|" << endl;

    cin >> e;
    cin.ignore();
    system("cls");

    if(e==1) cadastrarImovel();
    else if(e==2){
        getImoveis();
        system("pause");
        system("cls");
    }
    else if(e==3){
        getDescricao();
        system("pause");
        system("cls");

    }
    else if(e==4){
        getImoveisPorTipo();
        system("pause");
        system("cls");
    }
    else if(e==5){
        getImoveisParaAlugar();
        system("pause");
        system("cls");
    }
    else if(e==6){
        getImoveisParaVender();
        system("pause");
        system("cls");
    }
    else if(e==7){
        getImoveisPorCidade();
        system("pause");
        system("cls");
    }
    else if(e==8){
        getImoveisPorBairro();
        system("pause");
        system("cls");
    }
    else if(e==9){
        getImoveisPorDescricao();
        system("pause");
        system("cls");
    }
    else if(e==10){
        apagar();
        system("pause");
        system("cls");
    }
    else if(e==11){
        editar();
        system("pause");
        system("cls");
    }
    else if(e==12){
        salvarNoArquivo();
        system("pause");
        system("cls");
    }
    else if(e==13){
        return 0;
    }

    return 1;
}

void SistemaImobiliario::apagar(){

    int o, n, t;

    cout << "Digite o tipo do im�vel a ser apagado: " << endl;
    cout << "(1) Casa" << endl;
    cout << "(2) Apartamento" << endl;
    cout << "(3) Terreno" << endl;

    cin >> t;
    cin.ignore();

    cout << "Digite como deseja pesquisar o im�vel a ser apagado: " << endl;
    cout << "(1) Cidade" << endl;
    cout << "(2) Bairro" << endl;
    cout << "(3) Descri��o" << endl;
    cout << "(4) Valor" << endl;

    cin >> o;
    cin.ignore();

    if(o==1){
        getImoveisPorCidade();
        cout << "Digite o n�mero do im�vel a ser exclu�do: " << endl;
        cin >> n;
        if(t==1){
            lcasa.erase(lcasa.begin()+n);
        }
        else if(t==2){
            lapartamento.erase(lapartamento.begin()+n);
        }
        else if(t==3){
            lterreno.erase(lterreno.begin()+n);
        }
    }
    else if(o==2){
        getImoveisPorBairro();
        cout << "Digite o n�mero do im�vel a ser exclu�do: " << endl;
        cin >> n;
        if(t==1){
            lcasa.erase(lcasa.begin()+n);
        }
        else if(t==2){
            lapartamento.erase(lapartamento.begin()+n);
        }
        else if(t==3){
            lterreno.erase(lterreno.begin()+n);
        }
    }
    else if(o==3){
        getImoveisPorDescricao();
        cout << "Digite o n�mero do im�vel a ser exclu�do: " << endl;
        cin >> n;
        if(t==1){
            lcasa.erase(lcasa.begin()+n);
        }
        else if(t==2){
            lapartamento.erase(lapartamento.begin()+n);
        }
        else if(t==3){
            lterreno.erase(lterreno.begin()+n);
        }
    }
    else if(o==4){
        getImoveisPorValor();
        cout << "Digite o n�mero do im�vel a ser exclu�do: " << endl;
        cin >> n;
        if(t==1){
            lcasa.erase(lcasa.begin()+n);
        }
        else if(t==2){
            lapartamento.erase(lapartamento.begin()+n);
        }
        else if(t==3){
            lterreno.erase(lterreno.begin()+n);
        }
    }
}
void SistemaImobiliario::lerArquivo()
{
    int data3,data4,data10,data11,ap3,ap4,ap5;
    double data2,data12,data13,ap1,ap2,t1;
    string data1,data5,data6,data7,data8,data9,ap6;
    ifstream casa;
    casa.open("casa.txt");

    while(!casa.fail()){

        getline(casa, data1);
        casa >> data2;
        casa.ignore();
        casa >> data3;
        casa.ignore();
        casa >> data4;
        casa.ignore();
        getline(casa, data5);

        getline(casa, data6);

        getline(casa, data7);

        getline(casa, data8);

        getline(casa, data9);

        casa >> data10;
        casa.ignore();

        casa >> data11;
        casa.ignore();

        casa >> data12;
        casa.ignore();

        casa >> data13;
        casa.ignore();

        if (casa.fail() )
            break;

        lcasa.push_back(Casa(data1,data2,data3,data4,data5,data6,data7,data8,data9,data10,data11,data12,data13));


    }
    casa.close();
    ifstream apartamento;
    apartamento.open("apartamento.txt");
    while(!apartamento.fail()){
        getline(apartamento, data1);

        apartamento >> data2;
        apartamento.ignore();

        apartamento >> data3;
        apartamento.ignore();

        apartamento >> data4;
        apartamento.ignore();

        getline(apartamento, data5);

        getline(apartamento, data6);

        getline(apartamento, data7);

        getline(apartamento, data8);

        getline(apartamento, data9);

        apartamento >> ap1;
        apartamento.ignore();

        apartamento >> ap2;
        apartamento.ignore();

        apartamento >> ap3;
        apartamento.ignore();

        apartamento >> ap4;
        apartamento.ignore();

        apartamento >> ap5;
        apartamento.ignore();

        getline(apartamento, ap6);

        if (apartamento.fail() )
            break;

        lapartamento.push_back(Apartamento(data1,data2,data3,data4,data5,data6,data7,data8,data9,ap1,ap2,ap3,ap4,ap5,ap6));

    }
    apartamento.close();
    ifstream terreno;
    terreno.open("terreno.txt");

    while(!terreno.fail()){
        getline(terreno, data1);

        terreno >> data2;
        terreno.ignore();

        terreno >> data3;
        terreno.ignore();

        terreno >> data4;
        terreno.ignore();

        getline(terreno, data5);

        getline(terreno, data6);

        getline(terreno, data7);

        getline(terreno, data8);

        getline(terreno, data9);

        terreno >> t1;
        terreno.ignore();

        if (terreno.fail() )
            break;

        lterreno.push_back(Terreno(data1,data2,data3,data4,data5,data6,data7,data8,data9,t1));

    }
    terreno.close();
}

void SistemaImobiliario::salvarNoArquivo()
{
    ofstream casa("casa.txt", ios::out);

        for(int i=0; i < lcasa.size(); i++){

            casa << lcasa[i].getDescricao() << endl;
            casa << lcasa[i].getValor() << endl;
            casa << lcasa[i].getTipoOferta() << endl;
            casa << lcasa[i].getTipoImovel() << endl;
            casa << lcasa[i].getRua() << endl;
            casa << lcasa[i].getNumero() << endl;
            casa << lcasa[i].getBairro() << endl;
            casa << lcasa[i].getCidade() << endl;
            casa << lcasa[i].getCEP() << endl;
            casa << lcasa[i].getNumPavimentos() << endl;
            casa << lcasa[i].getNumQuartos() << endl;
            casa << lcasa[i].getAreaTerreno() << endl;
            casa << lcasa[i].getAreaConstruida() << endl;


        }
        casa.close();

    ofstream apartamento("apartamento.txt", ios::out);

        for(int i=0; i < lapartamento.size(); i++){

            apartamento << lapartamento[i].getDescricao() << endl;
            apartamento << lapartamento[i].getValor() << endl;
            apartamento << lapartamento[i].getTipoOferta() << endl;
            apartamento << lapartamento[i].getTipoImovel() << endl;
            apartamento << lapartamento[i].getRua() << endl;
            apartamento << lapartamento[i].getNumero() << endl;
            apartamento << lapartamento[i].getBairro() << endl;
            apartamento << lapartamento[i].getCidade() << endl;
            apartamento << lapartamento[i].getCEP() << endl;
            apartamento << lapartamento[i].getArea() << endl;
            apartamento << lapartamento[i].getValorCondominio() << endl;
            apartamento << lapartamento[i].getNumQuartos() << endl;
            apartamento << lapartamento[i].getAndar() << endl;
            apartamento << lapartamento[i].getVagasGaragem() << endl;
            apartamento << lapartamento[i].getPosicao() << endl;

        }

    apartamento.close();

    ofstream terreno("terreno.txt", ios::out);

        for(int i=0; i< lterreno.size(); i++){

            terreno << lterreno[i].getDescricao() << endl;
            terreno << lterreno[i].getValor() << endl;
            terreno << lterreno[i].getTipoOferta() << endl;
            terreno << lterreno[i].getTipoImovel() << endl;
            terreno << lterreno[i].getRua() << endl;
            terreno << lterreno[i].getNumero() << endl;
            terreno << lterreno[i].getBairro() << endl;
            terreno << lterreno[i].getCidade() << endl;
            terreno << lterreno[i].getCEP() << endl;
            terreno << lterreno[i].getArea() << endl;
        }

    terreno.close();
}
