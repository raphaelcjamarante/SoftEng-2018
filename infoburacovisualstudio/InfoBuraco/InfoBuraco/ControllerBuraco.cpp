#include "ControllerBuraco.h"

ControllerBuraco::ControllerBuraco() {
}

ControllerBuraco::~ControllerBuraco() {
}

bool ControllerBuraco::validarNovoBuraco(string localizacao) {
	Buraco * buraco = nullptr;
	BuracoDAO* buracoDAO = new BuracoDAO();

	buraco = buracoDAO->selecionarPelaLocalizacao(localizacao);

	if (buraco == nullptr) {
		return 1;
	}

	return 0;
}

int ControllerBuraco::registrarBuraco(bool status, string localizacao, int tamanho, string posicao_relativa, string regional, int num_reclamacoes) {
	BuracoDAO* buracoDao = new BuracoDAO();
	int idburaco = buracoDao->registrarBuraco(status, localizacao, tamanho, posicao_relativa, regional, num_reclamacoes);
	return idburaco;
}

int ControllerBuraco::registrarNotificacao(string contatoinformante, string data_hora, int idburaco) {
	int idnot = 0;
	NotificacaoDAO* notificacaoDAO = new NotificacaoDAO();
	idnot = notificacaoDAO->registrarNotificacao(contatoinformante, data_hora, idburaco);
	return idnot;
};

void ControllerBuraco::registrarFoto(string foto, int idnot) {
	FotoDAO* fotoDAO = new FotoDAO();
	fotoDAO->registrarFoto(foto, idnot);
}
