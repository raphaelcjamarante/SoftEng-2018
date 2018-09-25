#ifndef NOTIFICACAODAO_H
#define NOTIFICACAODAO_H
#include "Notificacao.h"
//#include "PerfilDAO.h" //Dependency Generated Source:BuracoDAO Target:PerfilDAO
#include "MySQLDAO.h"

class NotificacaoDAO {

public:
	NotificacaoDAO();
	int registrarNotificacao(string contatoinformante, string data_hora, int idburaco);
};

#endif
