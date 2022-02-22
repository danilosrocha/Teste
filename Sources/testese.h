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

class TUExcursao {
    private:
        const string VALOR_VALIDO_CODIGO = "123456";
        const string VALOR_VALIDO_TITULO = "HO HAN";
        const int VALOR_VALIDO_NOTA = 5;
        const string VALOR_VALIDO_CIDADE = "Bangkok";
        const int VALOR_VALIDO_DURACAO = 30;
        const string VALOR_VALIDO_DESCRICAO = "HO HAN!";
        const string VALOR_VALIDO_ENDERECO = "HO HAN";
        Excursao *excursao;
        int estado;                             
        void setUp();                           
        void tearDown();                        
        void testarCenarioSucesso();            
    public:
        const static int SUCESSO =  0;          
        const static int FALHA   = -1;          
        int run();                              
};

class TUAvaliacao {
    private:
        const string VALOR_VALIDO_CODIGO = "123456";
        const int VALOR_VALIDO_NOTA = 5;
        const string VALOR_VALIDO_DESCRICAO = "HO HAN!";
        Avaliacao *avaliacao;                       
        int estado;                             
        void setUp();                           
        void tearDown();                        
        void testarCenarioSucesso();            
    public:
        const static int SUCESSO =  0;          
        const static int FALHA   = -1;          
        int run();                              
};

class TUUsuario {
    private:
        const string VALOR_VALIDO_NOME = "Danilo ";
        const string VALOR_VALIDO_SENHA = "dD3456";
        const string VALOR_VALIDO_EMAIL = "danilo@gma.il.com";
        Usuario *usuario;                       
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