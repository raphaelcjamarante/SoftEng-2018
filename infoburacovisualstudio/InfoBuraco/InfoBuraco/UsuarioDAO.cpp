#include "UsuarioDAO.h"
//#include "PerfilDAO.h"
#include <time.h>
#include <stdio.h>

UsuarioDAO::UsuarioDAO() {
}

UsuarioDAO::~UsuarioDAO() {
}

Usuario* UsuarioDAO::selecionarPeloId(int id) {
	Usuario * usuario = nullptr;
	return usuario;
}

Usuario* UsuarioDAO::selecionarPeloLogin(string login) {
	Usuario * usuario = nullptr;
	return usuario;
}

Usuario* UsuarioDAO::selecionarPeloLoginESenha(string login, string senha) {
	string log;
	Usuario * usuario = nullptr;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		//Escrever consulta
		//string seed = "seedmuitosegura(ou variavel)";
		preparedStatement = connection->prepareStatement("SELECT id, nome, tipo, login FROM Usuario WHERE login = ? and senha = ?");//AES_ENCRYPT(?,?)");
		//preparedStatement = connection->prepareStatement("SELECT id, login, data_cadastro, ativo FROM usuarios where login = ? ");
		preparedStatement->setString(1, login.c_str());
		preparedStatement->setString(2, senha.c_str());
		//preparedStatement->setString(3, seed.c_str());

		resultSet = preparedStatement->executeQuery();
		//cout << resultSet;
		if (resultSet->next()) {//resultSet->next()) {			//clausula modificada --> erro estava aqui, mas ainda nao sabemos qual deve ser a clausula certa; erro so aparece quando nao tem nada no banco
				   // You can use either numeric offsets...
			usuario = new Usuario();
			usuario->registrar(resultSet->getInt(1), resultSet->getString(2).c_str(), resultSet->getString(3).c_str(), resultSet->getString(4).c_str());
		}
		//connection->close();
	}
	catch (sql::SQLException e) {
		connection->close();
		log = e.what();
	}
	//Avaliar resultado
	return usuario;
}

Usuario* UsuarioDAO::carregarUsuario(Usuario * usuario) {
	//DELETADAO
	return nullptr;
}
