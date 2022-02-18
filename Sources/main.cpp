#include <iostream>
#include "entidades.h"
#include "dominios.h"
#include "dominios.cpp"
#include "testesd.h"
#include "testesd.cpp"
#include "testese.h"
#include "testese.cpp"

using namespace std; 

int main()
{
    // Instanciar classe de teste de domínio.
    cout << "Inicio teste de dominios" << endl;

    TUCidade testeDA;
    TUDuracao testeDB;
    TUNota testeDC;
    TUData testeDD;
    TUDescricao testeDE;
    TUTitulo testeDF;
    TUEndereco testeDG;
    TUIdioma testeDH;
    TUHorario testeDI;
    TUCodigo testeDJ;
    TUNome testeDK;
    TUSenha testeDL;

    switch(testeDA.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - CIDADE" << endl;
                                break;
        case TUCidade::FALHA: cout << "FALHA - CIDADE" << endl;
                                break;
    }


    switch(testeDB.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - DURACAO" << endl;
                                break;
        case TUDuracao::FALHA: cout << "FALHA - DURACAO" << endl;
                                break;
    }


    switch(testeDC.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - NOTA" << endl;
                                break;
        case TUNota::FALHA: cout << "FALHA - NOTA" << endl;
                                break;
    }


    switch(testeDD.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA: cout << "FALHA - DATA" << endl;
                                break;
    }


    switch(testeDE.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
                                break;
        case TUDescricao::FALHA: cout << "FALHA - DESCRICAO" << endl;
                                break;
    }


    switch(testeDF.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO - TITULO" << endl;
                                break;
        case TUTitulo::FALHA: cout << "FALHA - TITULO" << endl;
                                break;
    }


    switch(testeDG.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
                                break;
        case TUEndereco::FALHA: cout << "FALHA - ENDERECO" << endl;
                                break;
    }


    switch(testeDH.run()){
        case TUIdioma::SUCESSO: cout << "SUCESSO - IDIOMA" << endl;
                                break;
        case TUIdioma::FALHA: cout << "FALHA - IDIOMA" << endl;
                                break;
    }


    switch(testeDI.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - HORARIO" << endl;
                                break;
        case TUHorario::FALHA: cout << "FALHA - HORARIO" << endl;
                                break;
    }


    switch(testeDJ.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA: cout << "FALHA - CODIGO" << endl;
                                break;
    }


    switch(testeDK.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA: cout << "FALHA - NOME" << endl;
                                break;
    }


    switch(testeDL.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA: cout << "FALHA - SENHA" << endl;
                                break;
    }


    cout << "Fim teste de dominios" << "\n" << endl;
    // Instanciar classe de teste de entidade.

    cout << "Inicio teste de entidades: " << endl;
    TUSessao testeED;

    switch(testeED.run()){
        case TUSessao::SUCESSO: cout << "SUCESSO - SESSAO" << endl;
                                break;
        case TUSessao::FALHA: cout << "FALHA - SESSAO" << endl;
                                break;
    }

    return 0;
}