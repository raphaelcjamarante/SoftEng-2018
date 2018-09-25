#include "ControllerLogin.h"

ControllerLogin::ControllerLogin() {
}

ControllerLogin::~ControllerLogin() {
}

Usuario* ControllerLogin::logar(string login, string senha) {
	Usuario * usuario = nullptr;
	UsuarioDAO* usuarioDao = new UsuarioDAO();
	usuario = usuarioDao->selecionarPeloLoginESenha(login, senha);
	return usuario;
}

Usuario* ControllerLogin::deslogar(string login) {
	Usuario * usuario = nullptr;
	return usuario;
}

