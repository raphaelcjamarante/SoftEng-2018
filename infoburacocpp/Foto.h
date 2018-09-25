#ifndef FOTO_H
#define FOTO_H
//Begin section for file Foto.h
//TODO: Add definitions that you want preserved
//End section for file Foto.h


class Notificacao; //Dependency Generated Source:Foto Target:Notificacao


class Buraco; //Dependency Generated Source:Foto Target:Buraco





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Foto
{

    //Begin section for Foto
    //TODO: Add attributes that you want preserved
    //End section for Foto

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notificacao * notificacao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * imagem;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Buraco * buraco;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Foto(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Foto(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void registrar(const char * imagem, int idNotificacao, const char * contatoInformante, const char * dataHora); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void listarFotos(int idNotificacao); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void consultar(const char * imagem); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void deletar(const char * imagem); 



};  //end class Foto



#endif
