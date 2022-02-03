#ifndef TESTESD_H_INCLUDED
#define TESTESD_H_INCLUDED
// Incluir cabeçalhos.

#include "dominios.h"
#include "entidades.h"

#include <iostream>

using namespace std;

// Classe teste de Unidade Nome
class TUNome {

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

};

// Classe teste de Unidade Data
class TUData {

};

// Classe teste de Unidade Descricao
class TUDescricao {

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

};

// Classe teste de Unidade Endereco
class TUEndereco {

};

// Classe teste de Unidade Horario
class TUHorario {

};

// Classe teste de Unidade Idioma
class TUIdioma {

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

};

// Classe teste de Unidade Titulo
class TUTitulo {

};


#endif