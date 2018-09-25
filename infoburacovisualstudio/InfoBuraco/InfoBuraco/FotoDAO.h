#ifndef FOTODAO_H
#define FOTODAO_H
#include "Foto.h"
//#include "PerfilDAO.h" //Dependency Generated Source:BuracoDAO Target:PerfilDAO
#include "MySQLDAO.h"

class FotoDAO
{
public:
	FotoDAO();

	void registrarFoto(string foto, int idnot);
};

#endif
