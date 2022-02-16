#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de código sugerida para declaração de classe entidade.
// Substituir Entidade por nome da classe.
// Substituir Dominio.
// Substituir nomeAtributo.

class Entidade {
    private:
            Dominio nomeAtributo;                   // Declarar cada atributo da classe.
    public:
            void setnomeAtributo(const Dominio&);   // Declarar método set para cada atributo.
            Dominio getnomeAtributo() const;        // Declarar método get para cada atributo.
};

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}

----------------------------------------------------------------------- 

class Usuario {
    private:
        Nome nome;
        Email email;
        Senha senha;
    public:
        void setNome(Nome);
        Nome getNome() const;
        void setEmail(Email);
        Email getEmail() const;
        void setSenha(Senha);
        Senha getSenha() const;
};

inline void Usuario::setNome(Nome nome) {
    this->nome = nome;
}

inline Nome Usuario::getNome() const {
    return nome;
}

inline void Usuario::setEmail(Email email) {
    this->email = email;
}

inline Email Usuario::getEmail() const {
    return email;
}

inline void Usuario::setSenha(Senha senha) {
    this->senha = senha;
}

inline Senha Usuario::getSenha() const {
    return senha;
}

class Excursao {
    private:
        Codigo codigo;
        Titulo titulo;
        Nota nota;
        Cidade cidade;
        Duracao duracaco;
        Descricao descricao;
        Endereco endereco;

    public:
        void setCodigo(const Codigo);
        Codigo getCodigo() const;
        void setTitulo(const Titulo);
        Titulo getTitulo() const;
        void setNota(const Data);
        Nota getNota() const;
        void setDescricao(const Descricao);
        Descricao getDescricao() const;
        void setDuracao(const Duracao);
        Duracao getDuracao() const;
        void setDescricao(const Descricao);
        Descricao getDescricao() const;
        void setEndereco(const Endereco);
        Endereco getEndereco() const;
        
};

class Avaliacao {
    private:
        Codigo codigo;
        Nota nota;
        Descricao descricao;
    public:
        void setCodigo(const Codigo);
        Codigo getCodigo() const;
        void setNota(const Data);
        Nota getNota() const;
        void setDescricao(const Descricao);
        Descricao getDescricao() const;
};
*/
class Sessao {
    private:
        Codigo codigo;
        Data data;
        Horario horario;
        Idioma idioma;
    public:
        void setCodigo(const Codigo);
        Codigo getCodigo() const;
        void setData(const Data);
        Data getData() const;
        void setHorario(const Horario);
        Horario getHorario() const;
        void setIdioma(const Idioma);
        Idioma getIdioma() const;

};

inline void Sessao::setCodigo(const Codigo codigo) {
    this->codigo = codigo;
};

inline Codigo Sessao::getCodigo() const {
    return codigo;
};

inline void Sessao::setData(const Data data) {
    this->data = data;
};

inline Data Sessao::getData() const {
    return data;
};

inline void Sessao::setHorario(const Horario horario) {
    this->horario = horario;
};

inline Horario Sessao::getHorario() const {
    return horario;
};

inline void Sessao::setIdioma(const Idioma idioma) {
    this->idioma = idioma;
};

inline Idioma Sessao::getIdioma() const {
    return idioma;
};


#endif

