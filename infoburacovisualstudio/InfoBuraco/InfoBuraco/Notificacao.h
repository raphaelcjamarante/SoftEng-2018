#ifndef NOTIFICACAO_H
#define NOTIFICACAO_H
#include <iostream>

using namespace std;

class AssessorComunicacao;
class Foto;
class Buraco;
class Notificacao {
    private:
        bool status;
        int idBuraco;
        int id;
        string contatoInformante;
        string dataHora;
		AssessorComunicacao * assessorComunicacao;
        Foto * foto;
        Buraco * buraco;
    public:
        Notificacao();
        virtual ~Notificacao();
        void registrarNotificacao(string contatoInformante, string foto, string dataHora, int buraco);
        void buscarNotificacao(int id);
        void marcarRespondida(int id);
        void listarNotificacoes(int idBuraco); 
};

#endif
