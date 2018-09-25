#ifndef MATERIAL_H
#define MATERIAL_H
//Begin section for file Material.h
//TODO: Add definitions that you want preserved
//End section for file Material.h


class Saida; //Dependency Generated Source:Material Target:Saida


class GestorSistema; //Dependency Generated Source:Material Target:GestorSistema





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Material
{

    //Begin section for Material
    //TODO: Add attributes that you want preserved
    //End section for Material

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Saida * saida;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        float custo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * unidadeMedida;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * tipoMaterial;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GestorSistema * gestorSistema;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Material(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void registrar(const char * tipoMaterial, float custo, const char * unidadeMedida); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void consultar(const char * tipoMaterial); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void alterar(float custo, const char * unidadeMedida, const char * tipoMaterial); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void deletar(const char * tipoMaterial); 



};  //end class Material



#endif
