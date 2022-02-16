#ifndef TESTESE_H_INCLUDED
#define TESTESE_H_INCLUDED

// Incluir cabeçalhos.

#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUSessao {
private:
    const string VALOR_VALIDO_CODIGO = "123456";
    const string VALOR_VALIDO_DATA = "30-Abr-2001";
    const string VALOR_VALIDO_HORARIO = "23:30";
    const string VALOR_VALIDO_IDIOMA = "Português";
    Sessao *sessao;                       
    int estado;                             
    void setUp();                           
    void tearDown();                        
    void testarCenarioSucesso();            
public:
    const static int SUCESSO =  0;          
    const static int FALHA   = -1;          
    int run();                              
};

#endif // TESTES_H_INCLUDED