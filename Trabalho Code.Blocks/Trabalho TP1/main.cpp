#include <iostream>

#include "entidades.h"
#include "dominios.h"
#include "testesd.h"
#include "testese.h"


using namespace std;

int main()
{
    // ----------- Instanciar classe de teste de domínio ----------- Alunos responsáveis: 190042397 / 190089539 / 190024771
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
    TUEmail testeDM;

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


    switch(testeDM.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUEmail::FALHA: cout << "FALHA - EMAIL" << endl;
                                break;
    }


    cout << "Fim teste de dominios" << "\n" << endl;
    // ----------- Instanciar classe de teste de entidade ----------- Alunos responsáveis: 190042397 / 190089539 / 190024771

    cout << "Inicio teste de entidades: " << endl;

    TUUsuario testeEA;
    TUExcursao testeEB;
    TUAvaliacao testeEC;
    TUSessao testeED;


    switch(testeEA.run()) {
        case TUUsuario::SUCESSO: cout << "SUCESSO - USUARIO" << endl;
                                break;
        case TUUsuario::FALHA: cout << "FALHA - USUARIO" << endl;
                                break;
    }


    switch(testeEB.run()) {
        case TUExcursao::SUCESSO: cout << "SUCESSO - EXCURSAO" << endl;
                                break;
        case TUExcursao::FALHA: cout << "FALHA - EXCURSAO" << endl;
                                break;
    }


    switch(testeEC.run()) {
        case TUAvaliacao::SUCESSO: cout << "SUCESSO - AVALIACAO" << endl;
                                break;
        case TUAvaliacao::FALHA: cout << "FALHA - AVALIACAO" << endl;
                                break;
    }


    switch(testeED.run()){
        case TUSessao::SUCESSO: cout << "SUCESSO - SESSAO" << endl;
                                break;
        case TUSessao::FALHA: cout << "FALHA - SESSAO" << endl;
                                break;
    }

    return 0;
}
