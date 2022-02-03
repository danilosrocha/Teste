#ifndef TESTESD_H_INCLUDED
#define TESTESD_H_INCLUDED
// Incluir cabeçalhos.

#include "dominios.h"
#include "entidades.h"

#include <iostream>

using namespace std;

class TUCidade {
    private:
        const string VALOR_VALIDO = "Bangkok";
        const string VALOR_INVALIDO = "Brasilia";
        Cidade *cidade;                         
        int estado;                             
        void setUp();                           
        void tearDown();                        
        void testarCenarioSucesso();            
        void testarCenarioFalha();              

    public:
        const static int SUCESSO =  0;          
        const static int FALHA   = -1;          
        int run();                              
};

class TUDuracao {
    private:
        const static int VALOR_VALIDO = 30;
        const static int VALOR_INVALIDO = 31;
        Duracao *duracao;                         
        int estado;                             
        void setUp();                           
        void tearDown();                        
        void testarCenarioSucesso();            
        void testarCenarioFalha();              

    public:
        const static int SUCESSO =  0;          
        const static int FALHA   = -1;          
        int run();                              
};

class TUNota {
    private:
        const static int VALOR_VALIDO = 3;
        const static int VALOR_INVALIDO = 8;
        Nota *nota;                         
        int estado;                             
        void setUp();                           
        void tearDown();                        
        void testarCenarioSucesso();            
        void testarCenarioFalha();              

    public:
        const static int SUCESSO =  0;          
        const static int FALHA   = -1;          
        int run();                              
};
#endif