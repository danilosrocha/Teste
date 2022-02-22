#include "testese.h"

using namespace std;

// ---------------------- Teste de Unidade Sessao ----------------------

void TUSessao::setUp(){
    sessao = new Sessao();
    estado = SUCESSO;
}

void TUSessao::tearDown(){
    delete sessao;
}
       
void TUSessao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setCodigo(VALOR_VALIDO_CODIGO);
    sessao->setCodigo(codigo);
    if (sessao->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Data data;
    data.setData(VALOR_VALIDO_DATA);
    sessao->setData(data);
    if (sessao->getData().getData() != VALOR_VALIDO_DATA)
        estado = FALHA;

    Horario horario;
    horario.setHorario(VALOR_VALIDO_HORARIO);
    sessao->setHorario(horario);
    if (sessao->getHorario().getHorario() != VALOR_VALIDO_HORARIO)
        estado = FALHA;

    Idioma idioma;
    idioma.setIdioma(VALOR_VALIDO_IDIOMA);
    sessao->setIdioma(idioma);
    if (sessao->getIdioma().getIdioma() != VALOR_VALIDO_IDIOMA)
        estado = FALHA;

}

int TUSessao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

// ---------------------- Teste de Unidade Excursao ----------------------

void TUExcursao::setUp(){
    excursao = new Excursao();
    estado = SUCESSO;
}

void TUExcursao::tearDown(){
    delete excursao;
}
       
void TUExcursao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setCodigo(VALOR_VALIDO_CODIGO);
    excursao->setCodigo(codigo);
    if (excursao->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Titulo titulo;
    titulo.setTitulo(VALOR_VALIDO_TITULO);
    excursao->setTitulo(titulo);
    if (excursao->getTitulo().getTitulo() != VALOR_VALIDO_TITULO)
        estado = FALHA;

    Nota nota;
    nota.setNota(VALOR_VALIDO_NOTA);
    excursao->setNota(nota);
    if (excursao->getNota().getNota() != VALOR_VALIDO_NOTA)
        estado = FALHA;

    Cidade cidade;
    cidade.setCidade(VALOR_VALIDO_CIDADE);
    excursao->setCidade(cidade);
    if (excursao->getCidade().getCidade() != VALOR_VALIDO_CIDADE)
        estado = FALHA;

    Duracao duracao;
    duracao.setDuracao(VALOR_VALIDO_DURACAO);
    excursao->setDuracao(duracao);
    if (excursao->getDuracao().getDuracao() != VALOR_VALIDO_DURACAO)
        estado = FALHA;

    Descricao descricao;
    descricao.setDescricao(VALOR_VALIDO_DESCRICAO);
    excursao->setDescricao(descricao);
    if (excursao->getDescricao().getDescricao() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;

    Endereco endereco;
    endereco.setEndereco(VALOR_VALIDO_ENDERECO);
    excursao->setEndereco(endereco);
    if (excursao->getEndereco().getEndereco() != VALOR_VALIDO_ENDERECO)
        estado = FALHA;

}

int TUExcursao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

// ---------------------- Teste de Unidade Avaliacao ----------------------

void TUAvaliacao::setUp(){
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown(){
    delete avaliacao;
}
       
void TUAvaliacao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setCodigo(VALOR_VALIDO_CODIGO);
    avaliacao->setCodigo(codigo);
    if (avaliacao->getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Nota nota;
    nota.setNota(VALOR_VALIDO_NOTA);
    avaliacao->setNota(nota);
    if (avaliacao->getNota().getNota() != VALOR_VALIDO_NOTA)
        estado = FALHA;
    
    Descricao descricao;
    descricao.setDescricao(VALOR_VALIDO_DESCRICAO);
    avaliacao->setDescricao(descricao);
    if (avaliacao->getDescricao().getDescricao() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;
}

int TUAvaliacao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


// ---------------------- Teste de Unidade Usuario ----------------------

void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}
       
void TUUsuario::testarCenarioSucesso(){
    Nome nome;
    nome.setNome(VALOR_VALIDO_NOME);
    usuario->setNome(nome);
    if (usuario->getNome().getNome() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Email email;
    email.setEmail(VALOR_VALIDO_EMAIL);
    usuario->setEmail(email);
    if (usuario->getEmail().getEmail() != VALOR_VALIDO_EMAIL)
        estado = FALHA;
    
    Senha senha;
    senha.setSenha(VALOR_VALIDO_SENHA);
    usuario->setSenha(senha);
    if (usuario->getSenha().getSenha() != VALOR_VALIDO_SENHA)
        estado = FALHA;
}

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}