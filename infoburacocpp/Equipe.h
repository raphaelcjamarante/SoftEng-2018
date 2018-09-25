#ifndef EQUIPE_H
#define EQUIPE_H
//Begin section for file Equipe.h
//TODO: Add definitions that you want preserved
//End section for file Equipe.h


class GestorSistema; //Dependency Generated Source:Equipe Target:GestorSistema


class Saida; //Dependency Generated Source:Equipe Target:Saida





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Equipe
{

    //Begin section for Equipe
    //TODO: Add attributes that you want preserved
    //End section for Equipe

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int numTrabalhadores;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float custo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GestorSistema * gestorSistema;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Saida * saida;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipe(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Equipe(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void registrar(const char * nome, int numTrabalhadores, float custo); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void consultar(const char * nome); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void alterar(const char * nome, int numTrabalhadores, float custo); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void deletar(const char * nome); 



};  //end class Equipe



#endif
