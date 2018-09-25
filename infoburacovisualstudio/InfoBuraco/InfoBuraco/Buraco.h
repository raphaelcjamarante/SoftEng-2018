#ifndef BURACO_H
#define BURACO_H
#include <iostream>
using namespace std;

//#include "AssessorComunicacao.h"
//#include "Notificacao.h"
//#include "Foto.h"

class AssessorComunicacao;
//class OrdemServico; //Dependency Generated Source:Buraco Target:OrdemServico
class Notificacao;
class Foto;
class Buraco {
    private:
        bool status;
        int id;
        string localizacao;
        int tamanho;
        string posicaoRelativa;
        string regional;
        int numReclamacoes;
        AssessorComunicacao * assessorComunicacao;
        //OrdemServico * ordemServico;
        Notificacao * notificacao;
        Foto * foto;

    public:
        Buraco(); 
        virtual ~Buraco(); 
        void registrarBuraco(string localizacao, int tamanho, string posicaoRelativa, string regional); 
        void marcarRecorrente(); 
        void alterarPrioridade(int novaPrioridade); 
        void buscarBuraco( string localizacao); 
};

#endif
