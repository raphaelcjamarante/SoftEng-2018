#include "Usuario.h"

Usuario::Usuario() {
}
Usuario::~Usuario() {
}

void Usuario::registrar(int id, string nome,  string tipo, string login) {
	this->id = id;
	this->nome = nome;
	this->tipo = tipo;
	this->login = login;
	//this->senha = senha;

    return;
}

void Usuario::consultar(string login) {
    return;
}

void Usuario::alterar(string nome, string tipo, string senha) {
    return;
}

void Usuario::deletar(string login) {
    return;
}
