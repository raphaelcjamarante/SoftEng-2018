#ifndef FINANCEIRO_H
#define FINANCEIRO_H
//Begin section for file Financeiro.h
//TODO: Add definitions that you want preserved
//End section for file Financeiro.h
#include "Usuario.h"



class Relatorio; //Dependency Generated Source:Financeiro Target:Relatorio


class FaturaMensal; //Dependency Generated Source:Financeiro Target:FaturaMensal





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Financeiro : Usuario
{

    //Begin section for Financeiro
    //TODO: Add attributes that you want preserved
    //End section for Financeiro

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Relatorio * relatorio;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        FaturaMensal * faturaMensal;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Financeiro(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Financeiro(); 



};  //end class Financeiro



#endif
