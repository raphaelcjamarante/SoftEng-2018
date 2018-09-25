#ifndef NOTIFICACAO_H
#define NOTIFICACAO_H
//Begin section for file Notificacao.h
//TODO: Add definitions that you want preserved
//End section for file Notificacao.h


class AssessorComunicacao; //Dependency Generated Source:Notificacao Target:AssessorComunicacao


class Foto; //Dependency Generated Source:Notificacao Target:Foto


class Buraco; //Dependency Generated Source:Notificacao Target:Buraco





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Notificacao
{

    //Begin section for Notificacao
    //TODO: Add attributes that you want preserved
    //End section for Notificacao

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        bool status;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int idBuraco;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * contatoInformante;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * dataHora;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        AssessorComunicacao * assessorComunicacao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Foto * foto;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Buraco * buraco;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notificacao(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Notificacao(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void registrarNotificacao(const char * contatoInformante, const char * foto, const char * dataHora, int buraco); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void buscarNotificacao(int id); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void marcarRespondida(int id); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void listarNotificacoes(int idBuraco); 



};  //end class Notificacao



#endif
