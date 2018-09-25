#ifndef BURACODAO_H
#define BURACODAO_H
#include "Buraco.h"
//#include "PerfilDAO.h" //Dependency Generated Source:BuracoDAO Target:PerfilDAO
#include "MySQLDAO.h"

class BuracoDAO {

public:

	BuracoDAO();
	virtual ~BuracoDAO();
	Buraco* selecionarPelaLocalizacao(string localizacao);
	int registrarBuraco(bool status, string localizacao, int tamanho, string posicao_relativa, string regional, int num_reclamacoes);
};

#endif
