#ifndef CLASEHEROE_H
#define CLASEHEROE_H
#include "clasepersonaje.h"
#include <iostream>
using namespace std;

//CREACION DE LA CLASE HEROE (HERENCIA)
class Heroe : public Personaje {
	//ATRIBUTOS
	public:
		int nivel;
		string nombre;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Heroe(string no, int n, double s, double af, double arf, double e, double d);
		
		void estadisticas();
		int mover();
		bool puedeSubirNivel();
		void subirNivel();
		
		/*virtual void buscarObjetos();
		virtual void ComprarObjetos();
		virtual void venderObjetos();
		virtual void recogerObjetos();
		virtual void agregarExperiencia();*/
};
#endif
