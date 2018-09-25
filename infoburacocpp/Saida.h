#ifndef SAIDA_H
#define SAIDA_H
//Begin section for file Saida.h
//TODO: Add definitions that you want preserved
//End section for file Saida.h


class Material; //Dependency Generated Source:Saida Target:Material


class Equipamento; //Dependency Generated Source:Saida Target:Equipamento


class Despachador; //Dependency Generated Source:Saida Target:Despachador


class Mobilizacao; //Dependency Generated Source:Saida Target:Mobilizacao


class Equipe; //Dependency Generated Source:Saida Target:Equipe


class OrdemServico; //Dependency Generated Source:Saida Target:OrdemServico





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Saida
{

    //Begin section for Saida
    //TODO: Add attributes that you want preserved
    //End section for Saida

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * dataSaida;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material * material;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipamento * equipamento;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Despachador * despachador;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Mobilizacao * mobilizacao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipe * equipe;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemServico * ordemServico;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Saida(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Saida(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void criarSaida(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void buscarSaida(int id); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void calcularRecursos(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void excluirOS(int idOS); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void incluirOS(int idOS); 



};  //end class Saida



#endif
