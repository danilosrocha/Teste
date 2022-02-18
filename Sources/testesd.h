#ifndef TESTESD_H_INCLUDED
#define TESTESD_H_INCLUDED
// Incluir cabeçalhos.

#include "dominios.h"
#include "entidades.h"

#include <iostream>

using namespace std;

// Classe teste de Unidade Nome
class TUNome {
    private:
        const string VALOR_VALIDO = "Danilo.";
        const string VALOR_INVALIDO = "Bra  silia";
        Nome *nome;                         
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

// Classe teste de Unidade Cidade
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

// Classe teste de Unidade Codigo

class TUCodigo {
    private:
        const string VALOR_VALIDO = "123456";
        const string VALOR_INVALIDO = "000000";
        Codigo *codigo;                         
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

// Classe teste de Unidade Data
class TUData {
    private:
        const string VALOR_VALIDO = "30-Abr-2001";
        const string VALOR_INVALIDO = "30-Fev-1000";
        Data *data;                         
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

// Classe teste de Unidade Descricao
class TUDescricao {
    private:
        const string VALOR_VALIDO = "HO HAN!";
        const string VALOR_INVALIDO = "HO   HAN";
        Descricao *descricao;                         
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

// Classe teste de Unidade Duracao
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

// Classe teste de Unidade Email

class TUEmail {

    private:
        const string VALOR_VALIDO = "danilo@gmail.com";
        const string VALOR_INVALIDO = ".danila @kosako.l";
        Email *email;                         
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

// Classe teste de Unidade Endereco
class TUEndereco {
    private:
        const string VALOR_VALIDO = "HO HAN";
        const string VALOR_INVALIDO = "HO   HAN";
        Endereco *endereco;                         
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

// Classe teste de Unidade Horario

class TUHorario {
    private:
        const string VALOR_VALIDO = "23:30";
        const string VALOR_INVALIDO = "24:60";
        Horario *horario;                         
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



// Classe teste de Unidade Idioma
class TUIdioma {
    private:
        const string VALOR_VALIDO = "Português";
        const string VALOR_INVALIDO = "Italiano";
        Idioma *idioma;                         
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

// Classe teste de Unidade Nota
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

// Classe teste de Unidade Senha
class TUSenha {
    private:
        const string VALOR_VALIDO = "dD3456";
        const string VALOR_INVALIDO = "123456";
        Senha *senha;                         
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

// Classe teste de Unidade Titulo

class TUTitulo {
    private:
        const string VALOR_VALIDO = "HO HAN";
        const string VALOR_INVALIDO = "HO   HAN";
        Titulo *titulo;                         
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