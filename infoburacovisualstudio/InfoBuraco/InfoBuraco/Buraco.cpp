#include "Buraco.h"

Buraco::Buraco()  {
}

Buraco::~Buraco() {
}

void Buraco::registrarBuraco(string localizacao,  int tamanho, string posicaoRelativa, string regional)  {
	this->localizacao = localizacao;
	this->tamanho = tamanho;
	this->posicaoRelativa = posicaoRelativa;
	this->regional = regional;
    return;
}

void Buraco::marcarRecorrente()  {
    return;
}

void Buraco::alterarPrioridade( int novaPrioridade) {
    return;
}

void Buraco::buscarBuraco( string localizacao)  {
    return;
}
