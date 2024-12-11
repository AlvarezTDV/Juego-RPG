#ifndef CLASEHEROE_H
#define CLASEHEROE_H
#include "clasepersonaje.h"
#include <iostream>
using namespace std;

//CREACION DE LA CLASE HEROE (HERENCIA)
class Heroe : public Personaje {
	//ATRIBUTOS
	public:
		string nombre;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Heroe(string no, double s, double af, double arf, int n, double e);
		
		void estadisticas();
		
		int mover();
		/*virtual void buscarObjetos();
		virtual void ComprarObjetos();
		virtual void venderObjetos();
		virtual void recogerObjetos();
		virtual void agregarExperiencia();*/
};
#endif
