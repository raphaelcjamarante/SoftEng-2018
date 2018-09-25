#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H
//Begin section for file Equipamento.h
//TODO: Add definitions that you want preserved
//End section for file Equipamento.h


class GestorSistema; //Dependency Generated Source:Equipamento Target:GestorSistema


class Saida; //Dependency Generated Source:Equipamento Target:Saida





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Equipamento
{

    //Begin section for Equipamento
    //TODO: Add attributes that you want preserved
    //End section for Equipamento

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GestorSistema * gestorSistema;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * numPatrimonio;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float custo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * tipo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Saida * saida;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipamento(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Equipamento(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void registrar(const char * numPatrimonio, float custo, const char * tipo); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void consultar(const char * numPatrimonio); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void alterar(float custo); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void deletar(const char * numPatrimonio); 



};  //end class Equipamento



#endif
