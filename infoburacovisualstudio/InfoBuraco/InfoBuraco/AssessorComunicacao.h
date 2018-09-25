#ifndef ASSESSORCOMUNICACAO_H
#define ASSESSORCOMUNICACAO_H
#include "Usuario.h"

class Buraco;
class Notificacao;
class AssessorComunicacao : Usuario {
    private:
        Buraco * buraco;
        Notificacao * notificacao;
    public:
        AssessorComunicacao();
        virtual ~AssessorComunicacao();
};

#endif
