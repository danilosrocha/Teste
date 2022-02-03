#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

class Usuario {
    private:
        Nome nome;
        Email email;
        Senha senha;
    public:
        void setNome(Nome);
        Nome getNome() const;
};

inline void Usuario::setNome(Nome nome) {
    this->nome = nome;
}

inline Nome Usuario::getNome() const {
    return nome;
}

class Excursao {
    public:
        Codigo codigo;
        Titulo titulo;
        Nota nota;
        Cidade cidade;
        Duracao duracaco;
        Descricao descricao;
        Endereco endereco;

};

class Avaliacao {
    public:
        Codigo codigo;
        Nota nota;
        Descricao descricao;

};

class Sessao {
    public:
        Codigo codigo;
        Data data;
        Horario horario;
        Idioma idioma;

};

#endif

