#ifndef RELATORIO_H
#define RELATORIO_H
//Begin section for file Relatorio.h
//TODO: Add definitions that you want preserved
//End section for file Relatorio.h


class Financeiro; //Dependency Generated Source:Relatorio Target:Financeiro


class OrdemServico; //Dependency Generated Source:Relatorio Target:OrdemServico





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Relatorio
{

    //Begin section for Relatorio
    //TODO: Add attributes that you want preserved
    //End section for Relatorio

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * dataEmissao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * destinatario;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Financeiro * financeiro;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemServico * ordemServico;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Relatorio(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Relatorio(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void emitirRelatorio(int idOS); 



};  //end class Relatorio



#endif
