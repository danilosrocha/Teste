#include "testesd.h"

using namespace std;

// Teste de Unidade Nome

// Teste de Unidade Cidade
void TUCidade::setUp() {
    cidade = new Cidade();
    estado = SUCESSO;
}

void TUCidade::tearDown(){
    delete cidade;
}

void TUCidade::testarCenarioSucesso(){
    try{
        cidade->setCidade(VALOR_VALIDO);
        if (cidade->getCidade() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCidade::testarCenarioFalha(){
    try{
        cidade->setCidade(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (cidade->getCidade() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //cout << cidade->getCidade() << "\n";
    tearDown();
    return estado;
}

// Teste de Unidade Codigo

void TUCodigo::setUp() {
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getCodigo() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //cout << codigo->getCodigo() << "\n";
    tearDown();
    return estado;
}


// Teste de Unidade Data

void TUData::setUp() {
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (data->getData() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //cout << data->getData() << "\n";
    tearDown();
    return estado;
}

// Teste de Unidade Descricao
void TUDescricao::setUp() {
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown(){
    delete descricao;
}

void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setDescricao(VALOR_VALIDO);
        
        if (descricao->getDescricao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setDescricao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (descricao->getDescricao() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //cout << duracao->getDuracao() << "\n";
    tearDown();
    return estado;
}

// Teste de Unidade Duracao
void TUDuracao::setUp() {
    duracao = new Duracao();
    estado = SUCESSO;
}

void TUDuracao::tearDown(){
    delete duracao;
}

void TUDuracao::testarCenarioSucesso(){
    try{
        duracao->setDuracao(VALOR_VALIDO);
        
        if (duracao->getDuracao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDuracao::testarCenarioFalha(){
    try{
        duracao->setDuracao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (duracao->getDuracao() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDuracao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //cout << duracao->getDuracao() << "\n";
    tearDown();
    return estado;
}

// Teste de Unidade Email

// Teste de Unidade Endereco
void TUEndereco::setUp() {
    endereco = new Endereco();
    estado = SUCESSO;
}

void TUEndereco::tearDown(){
    delete endereco;
}

void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (endereco->getEndereco() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //cout << endereco->getEndereco() << "\n";
    tearDown();
    return estado;
}

// Teste de Unidade Horario

void TUHorario::setUp() {
    horario = new Horario();
    estado = SUCESSO;
}

void TUHorario::tearDown(){
    delete horario;
}

void TUHorario::testarCenarioSucesso(){
    try{
        horario->setHorario(VALOR_VALIDO);
        if (horario->getHorario() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUHorario::testarCenarioFalha(){
    try{
        horario->setHorario(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (horario->getHorario() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //cout << data->getHorario() << "\n";
    tearDown();
    return estado;
}


// Teste de Unidade Idioma
void TUIdioma::setUp() {
    idioma = new Idioma();
    estado = SUCESSO;
}

void TUIdioma::tearDown(){
    delete idioma;
}

void TUIdioma::testarCenarioSucesso(){
    try{
        idioma->setIdioma(VALOR_VALIDO);
        
        if (idioma->getIdioma() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha(){
    try{
        idioma->setIdioma(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (idioma->getIdioma() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUIdioma::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //cout << duracao->getIdioma() << "\n";
    tearDown();
    return estado;
}

// Teste de Unidade Nota
void TUNota::setUp() {
    nota = new Nota();
    estado = SUCESSO;
}

void TUNota::tearDown(){
    delete nota;
}

void TUNota::testarCenarioSucesso(){
    try{
        nota->setNota(VALOR_VALIDO);
        if (nota->getNota() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNota::testarCenarioFalha(){
    try{
        nota->setNota(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nota->getNota() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNota::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //cout << nota->getNota() << "\n";
    tearDown();
    return estado;
}

// Teste de Unidade Senha

// Teste de Unidade Titulo

void TUTitulo::setUp() {
    titulo = new Titulo();
    estado = SUCESSO;
}

void TUTitulo::tearDown(){
    delete titulo;
}

void TUTitulo::testarCenarioSucesso(){
    try{
        titulo->setTitulo(VALOR_VALIDO);
        
        if (titulo->getTitulo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTitulo::testarCenarioFalha(){
    try{
        titulo->setTitulo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (titulo->getTitulo() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTitulo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    //cout << duracao->getTitulo() << "\n";
    tearDown();
    return estado;
}
