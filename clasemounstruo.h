#ifndef CLASEMOUNSTRUO_H
#define CLASEMOUNSTRUO_H
#include "clases.h"
#include <iostream>
using namespace std;

//CREACION DE LA CLASE MOUNSTRUO (HERENCIA)
class Mounstruo : public Personaje {
	//ATRIBUTOS
	private:
		string raza;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Mounstruo() : Personaje() {
			raza = "SinRaza";
		}
		
		virtual void soltarObjeto();
		virtual void soltarExperiencia();
		virtual void generarExperiencia();
};
#endif
