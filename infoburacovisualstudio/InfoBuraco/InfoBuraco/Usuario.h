#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>

using namespace std;

class Usuario {
    private:
        string nome;
        int id;
        string tipo;
        string login;
        string senha;
    public:
        Usuario();
        virtual ~Usuario(); 

        void registrar(int id, string nome, string tipo, string login);
        void consultar(string login);
        void alterar(string nome, string tipo, string senha);
        void deletar(string login); 
};

#endif
