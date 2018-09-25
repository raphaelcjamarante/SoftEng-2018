#include "NotificacaoDAO.h"

NotificacaoDAO::NotificacaoDAO() {
}

int NotificacaoDAO::registrarNotificacao(string contatoinformante, string data_hora, int idburaco) {
	string log;
	Notificacao * notificacao = nullptr;
	int idnot = 0;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::PreparedStatement * fetchStatement;
	sql::ResultSet *resultSet;

	try {

		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();

		preparedStatement = connection->prepareStatement("INSERT INTO Notificacao(status, contato_informante, data_hora, id_buraco) VALUES (1, ?, ?, ?)");
		preparedStatement->setString(1, contatoinformante.c_str());
		preparedStatement->setString(2, data_hora.c_str());
		preparedStatement->setInt(3, idburaco);
		preparedStatement->execute();

		fetchStatement = connection->prepareStatement("SELECT id FROM Notificacao WHERE contato_informante = ? AND data_hora = ? AND id_buraco = ?");
		fetchStatement->setString(1, contatoinformante.c_str());
		fetchStatement->setString(2, data_hora.c_str());
		fetchStatement->setInt(3, idburaco);
		resultSet = fetchStatement->executeQuery();
		if (resultSet->next()) {
			idnot = resultSet->getInt(1);
		}


	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	//Avaliar resultado
	return idnot;

}
