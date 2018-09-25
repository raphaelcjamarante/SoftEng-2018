#ifndef CONTROLLERBURACO_H
#define CONTROLLERBURACO_H
#include "Buraco.h"
#include "BuracoDAO.h"
#include "Notificacao.h"
#include "NotificacaoDAO.h"
#include "Foto.h"
#include "FotoDAO.h"

class ControllerBuraco {

public:

	ControllerBuraco();
	virtual ~ControllerBuraco();

	bool validarNovoBuraco(string localizacao);
	int registrarBuraco(bool status, string localizacao, int tamanho, string posicao_relativa, string regional, int num_reclamacoes);
	int registrarNotificacao(string contatoinformante, string data_hora, int idburaco);
	void registrarFoto(string foto, int idnot);

};

#endif
