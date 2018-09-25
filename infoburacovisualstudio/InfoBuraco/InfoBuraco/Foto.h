#ifndef FOTO_H
#define FOTO_H

#include <iostream>

using namespace std;

class Notificacao;
class Buraco;
class Foto {
    private:
        Notificacao * notificacao;
        int id;
        string imagem;
        Buraco * buraco;
    public:
        Foto(); 
        virtual ~Foto();
        void registrar(string imagem, int idNotificacao, string contatoInformante, string dataHora);
        void listarFotos(int idNotificacao);
        void consultar(string imagem);
        void deletar(string imagem); 
};

#endif
