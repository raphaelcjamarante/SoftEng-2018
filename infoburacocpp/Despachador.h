#ifndef DESPACHADOR_H
#define DESPACHADOR_H
//Begin section for file Despachador.h
//TODO: Add definitions that you want preserved
//End section for file Despachador.h
#include "Usuario.h"



class OrdemServico; //Dependency Generated Source:Despachador Target:OrdemServico


class Saida; //Dependency Generated Source:Despachador Target:Saida





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Despachador : Usuario
{

    //Begin section for Despachador
    //TODO: Add attributes that you want preserved
    //End section for Despachador

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemServico * ordemServico;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Saida * saida;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Despachador(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Despachador(); 



};  //end class Despachador



#endif
