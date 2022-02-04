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
    TUData testeD;
    TUDescricao testeE;
    TUTitulo testeF;
    TUEndereco testeG;
    TUIdioma testeH;
    TUHorario testeI;
    TUCodigo testeJ;

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

    switch(testeD.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA: cout << "FALHA - DATA" << endl;
                                break;
    }

    switch(testeE.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
                                break;
        case TUDescricao::FALHA: cout << "FALHA - DESCRICAO" << endl;
                                break;
    }

    
    switch(testeF.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO - TITULO" << endl;
                                break;
        case TUTitulo::FALHA: cout << "FALHA - TITULO" << endl;
                                break;
    }

    
    switch(testeG.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
                                break;
        case TUEndereco::FALHA: cout << "FALHA - ENDERECO" << endl;
                                break;
    }

    
    switch(testeH.run()){
        case TUIdioma::SUCESSO: cout << "SUCESSO - IDIOMA" << endl;
                                break;
        case TUIdioma::FALHA: cout << "FALHA - IDIOMA" << endl;
                                break;
    }
    

    switch(testeI.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - HORARIO" << endl;
                                break;
        case TUHorario::FALHA: cout << "FALHA - HORARIO" << endl;
                                break;
    }

    
    switch(testeJ.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA: cout << "FALHA - CODIGO" << endl;
                                break;
    }
    
    return 0;
}