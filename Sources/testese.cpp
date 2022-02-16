#include "testese.h"

using namespace std;

// Teste de Unidade De Sessao

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