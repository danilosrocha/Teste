#include <iostream>
#include "entidades.h"
#include "dominios.h"
#include "dominios.cpp"
#include "testesd.h"
#include "testesd.cpp"

using namespace std;

int main()
{
    TUCidade testeA;
    TUDuracao testeB;
    TUNota testeC;

    switch(testeA.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - CIDADE" << endl;
                                break;
        case TUCidade::FALHA: cout << "FALHA - CIDADE" << endl;
                                break;
    }

    switch(testeB.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - DURACAO" << endl;
                                break;
        case TUDuracao::FALHA: cout << "FALHA - DURACAO" << endl;
                                break;
    }

    switch(testeC.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - NOTA" << endl;
                                break;
        case TUNota::FALHA: cout << "FALHA - NOTA" << endl;
                                break;
    }
    cout << "joan" << endl;
    cout << "joaasdasdasdasdn";
    return 0;
}