#ifndef GESTORSISTEMA_H
#define GESTORSISTEMA_H
//Begin section for file GestorSistema.h
//TODO: Add definitions that you want preserved
//End section for file GestorSistema.h
#include "Usuario.h"



class Material; //Dependency Generated Source:GestorSistema Target:Material


class Equipe; //Dependency Generated Source:GestorSistema Target:Equipe


class Equipamento; //Dependency Generated Source:GestorSistema Target:Equipamento


class Mobilizacao; //Dependency Generated Source:GestorSistema Target:Mobilizacao





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class GestorSistema : Usuario
{

    //Begin section for GestorSistema
    //TODO: Add attributes that you want preserved
    //End section for GestorSistema

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material * material;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipe * equipe;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipamento * equipamento;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Mobilizacao * mobilizacao;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GestorSistema(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~GestorSistema(); 



};  //end class GestorSistema



#endif
