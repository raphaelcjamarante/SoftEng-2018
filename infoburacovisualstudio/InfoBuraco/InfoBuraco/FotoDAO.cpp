#include "FotoDAO.h"

FotoDAO::FotoDAO() {
}


void FotoDAO::registrarFoto(string foto, int idnot) {
	string log;
	//Foto * foto = nullptr;
	//int idnot = 0;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;

	try {

		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();

		preparedStatement = connection->prepareStatement("INSERT INTO Foto(imagem, id_notificacao) VALUES (?, ?)");
		preparedStatement->setString(1, foto.c_str());
		preparedStatement->setInt(2, idnot);
		preparedStatement->execute();

	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	//Avaliar resultado
	//return idnot;
}
