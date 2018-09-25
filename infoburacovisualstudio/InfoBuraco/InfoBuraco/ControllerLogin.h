#ifndef CONTROLLERLOGIN_H
#define CONTROLLERLOGIN_H
#include "Usuario.h"
#include "UsuarioDAO.h"
//#include "../../dao/PerfilDAO.h"

class ControllerLogin {

public:
	ControllerLogin();
	virtual ~ControllerLogin();

	Usuario* logar(string login, string senha);
	Usuario* deslogar(string login);
	//Usuario* carregarFuncionalidades(Usuario * usuario); 
};

#endif
