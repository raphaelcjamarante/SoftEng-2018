#ifndef USUARIODAO_H
#define USUARIODAO_H
#include "Usuario.h"
//#include "PerfilDAO.h"
#include "MySQLDAO.h"

class UsuarioDAO {

public:
	UsuarioDAO();
	virtual ~UsuarioDAO();

	Usuario* selecionarPeloId(int id);
	Usuario* selecionarPeloLogin(string login);
	Usuario* selecionarPeloLoginESenha(string login, string senha);
	Usuario* carregarUsuario(Usuario* id);
};

#endif
