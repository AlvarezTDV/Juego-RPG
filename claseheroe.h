#ifndef CLASEHEROE_H
#define CLASEHEROE_H
#include "clases.h"
#include <iostream>
using namespace std;

//CREACION DE LA CLASE HEROE (HERENCIA)
class Heroe : public Personaje {
	//ATRIBUTOS
	private:
		string nombre;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Heroe(string nombre);
		
		int mover();
		/*virtual void buscarObjetos();
		virtual void ComprarObjetos();
		virtual void venderObjetos();
		virtual void recogerObjetos();
		virtual void agregarExperiencia();*/
};
#endif
