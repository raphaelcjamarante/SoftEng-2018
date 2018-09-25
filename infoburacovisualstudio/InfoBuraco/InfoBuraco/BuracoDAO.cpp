#include "BuracoDAO.h"
//#include "PerfilDAO.h"
#include <time.h>
#include <stdio.h>

BuracoDAO::BuracoDAO() {
}
BuracoDAO::~BuracoDAO() {
}

Buraco* BuracoDAO::selecionarPelaLocalizacao(string localizacao) {
	string log;
	Buraco * buraco = nullptr;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT localizacao, tamanho, posicao_relativa, regional FROM Buraco WHERE localizacao = ?");
		preparedStatement->setString(1, localizacao.c_str());
		//Escrever consulta
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next()) {
			// You can use either numeric offsets...
			buraco = new Buraco();
			buraco->registrarBuraco(resultSet->getString(1).c_str(), resultSet->getInt(2), resultSet->getString(3).c_str(), resultSet->getString(4).c_str()); // getInt(1) returns the first column
		}
		//connection->close();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	//Avaliar resultado
	return buraco;
}

int BuracoDAO::registrarBuraco(bool status, string localizacao, int tamanho, string posicao_relativa, string regional, int num_reclamacoes) {
	string log;
	Buraco * buraco = nullptr;
	int idburaco = 0;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::PreparedStatement * preparedStatement2;
	sql::ResultSet *resultSet;
	try {

		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		
		preparedStatement = connection->prepareStatement("INSERT INTO Buraco(status, localizacao, tamanho, posicao_relativa, regional, num_reclamacoes) VALUES (?, ?, ?, ?, ?, ?)");
		preparedStatement->setBoolean(1, status);
		preparedStatement->setString(2, localizacao.c_str());
		preparedStatement->setInt(3, tamanho);
		preparedStatement->setString(4, posicao_relativa.c_str());
		preparedStatement->setString(5, regional.c_str());
		preparedStatement->setInt(6, num_reclamacoes);
		preparedStatement->execute();

		sql::PreparedStatement * fetchStatement = connection->prepareStatement("SELECT id FROM Buraco WHERE localizacao = ?");
		fetchStatement->setString(1, localizacao.c_str());
		resultSet = fetchStatement->executeQuery();
		if (resultSet->next()) {
			idburaco = resultSet->getInt(1);
		}

		preparedStatement2 = connection->prepareStatement("INSERT INTO OrdemServico(status_agendado, prioridade, status_finalizado, status_respondido, id_buraco) VALUES (0, 1, 0, 0, ?)");
		preparedStatement2->setInt(1, idburaco);
		preparedStatement2->execute();
			
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	//Avaliar resultado
	return idburaco;
}
