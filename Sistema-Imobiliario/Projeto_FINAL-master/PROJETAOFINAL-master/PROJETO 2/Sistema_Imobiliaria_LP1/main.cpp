#include <iostream>
#include <locale.h>
#include <SistemaImobiliario.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    SistemaImobiliario imovel;

    imovel.lerArquivo();

    while(1){
        if(imovel.menuExibicao()==0) return 0;
    }

    cout << "GGWP" << endl;


    return 0;
}
