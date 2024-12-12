#ifndef CLASETIENDA_H
#define CLASETIENDA_H
#include <iostream>
#include "claseobjeto.h"
using namespace std;

//CREACION DE LA CLASE TIENDA
class Tienda {
	//ATRIBUTOS
	public:
		Objeto objetosRango1EnTienda[5];
		Objeto objetosRango2EnTienda[5];
		Objeto objetosRango3EnTienda[5];
		Objeto objetosRango4EnTienda[5];
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Tienda();
		
		void mostrarObjetos(Objeto[], int);
};
#endif
