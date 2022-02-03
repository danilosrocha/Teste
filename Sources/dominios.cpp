#include "dominios.h"

using namespace std;
//----------- Métodos do domínio Nome -----------
//void Nome::validarNome(string nome){
//    if (nome.size() <= 20 && nome.size() >= 5){
//
//    }
//}
void Nome::setNome(string nome) {
//    validarNome(nome);
    this->nome = nome;
}

//----------- Métodos do domínio Email -----------
void Email::setEmail(string email) {
    //validarEmail()
    this->email = email;
}

//----------- Métodos do domínio Senha -----------
void Senha::setSenha(string senha) {
    //validarSenha()
    this->senha = senha;
}

//----------- Métodos do domínio Titulo -----------
void Titulo::setTitulo(string titulo) {
    //validarTitulo()
    this->titulo = titulo;
}

//----------- Métodos do domínio Cidade ----------- 
void Cidade::validarCidade(string cidade) {
    string listaCidades[QUANT_CIDADES] = {"Hong Kong", "Bangkok", "Macau", "Singapura", "Londres", "Paris", "Dubai", "Delhi", "Istambul", "Kuala", "Lumpur", "Nova Iorque", "Antalya", "Mumbai", "Shenzhen", "Phuket"};
    bool acharCidade = false;

    for (int cont = 0; cont < QUANT_CIDADES ; cont++) {
        if (cidade == listaCidades[cont]){
            acharCidade = true;
        }
    }
    if (acharCidade == false) {
        throw invalid_argument("CIDADE-> Argumento invalido.");
    }

}

void Cidade::setCidade(string cidade) {
    validarCidade(cidade);
    this->cidade = cidade;
}

//----------- Métodos do domínio Duracao ----------- 
void Duracao::validarDuracao(int duracao){
    int duracoes[DURACOES_VALIDAS] = {30, 60, 60, 120, 180};
    bool acharDuracao = false;
    for (int cont = 0; cont < DURACOES_VALIDAS; cont++){
        if (duracao == duracoes[cont]){
            acharDuracao = true;
        }
    }
    if (acharDuracao == false) {
        throw invalid_argument("DURACAO-> Argumento invalido.");
    }
}

void Duracao::setDuracao(int duracao) {
    validarDuracao(duracao);
    this->duracao = duracao;
}

//----------- Métodos do domínio Endereco -----------
void Endereco::setEndereco(string endereco) {
    //validarEndereco()
    this->endereco = endereco;
}

//----------- Métodos do domínio Data -----------
void Data::setData(string data) {
    //validarData()
    this->data = data;
}


//----------- Métodos do domínio Horario -----------
void Horario::setHorario(string horario) {
    //validarData()
    this->horario = horario;
}

//----------- Métodos do domínio Idioma -----------
void Idioma::setIdioma(string idioma) {
    //validarIdioma()
    this->idioma = idioma;
}

//----------- Métodos do domínio Codigo -----------
void Codigo::setCodigo(string codigo) {
    //validarData()
    this->codigo = codigo;
}

//----------- Métodos do domínio Nota -----------
void Nota::validarNota(int nota){
    int notas[NOTAS_VALIDAS] = {0, 1, 2, 3, 4, 5};
    bool acharNota = false;
    for (int cont = 0; cont < NOTAS_VALIDAS; cont++){
        if (nota == notas[cont]){
            acharNota = true;
        }
    }
    if (acharNota == false) {
        throw invalid_argument("NOTA-> Argumento invalido.");
    }
}

void Nota::setNota(int nota){
    validarNota(nota);
    this->nota = nota;
}

//----------- Métodos do domínio Descricao -----------
void Descricao::setDescricao(string descricao) {
    //validarData()
    this->descricao = descricao;
}


