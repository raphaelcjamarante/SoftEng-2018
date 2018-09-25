#ifndef MOBILIZACAO_H
#define MOBILIZACAO_H
//Begin section for file Mobilizacao.h
//TODO: Add definitions that you want preserved
//End section for file Mobilizacao.h


class GestorSistema; //Dependency Generated Source:Mobilizacao Target:GestorSistema


class Saida; //Dependency Generated Source:Mobilizacao Target:Saida





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Mobilizacao
{

    //Begin section for Mobilizacao
    //TODO: Add attributes that you want preserved
    //End section for Mobilizacao

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GestorSistema * gestorSistema;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float custo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Saida * saida;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Mobilizacao(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Mobilizacao(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void alterar(float custo); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void consultar(); 



};  //end class Mobilizacao



#endif
