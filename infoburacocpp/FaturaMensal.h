#ifndef FATURAMENSAL_H
#define FATURAMENSAL_H
//Begin section for file FaturaMensal.h
//TODO: Add definitions that you want preserved
//End section for file FaturaMensal.h


class Financeiro; //Dependency Generated Source:FaturaMensal Target:Financeiro





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class FaturaMensal
{

    //Begin section for FaturaMensal
    //TODO: Add attributes that you want preserved
    //End section for FaturaMensal

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Financeiro * financeiro;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * custoTotal;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        const char * mes;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        FaturaMensal(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~FaturaMensal(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void emitirFatura(const char * mes); 



};  //end class FaturaMensal



#endif
