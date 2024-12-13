#ifndef CLASEHEROE_H
#define CLASEHEROE_H
#include "clasepersonaje.h"
#include "claseobjeto.h"
#include <iostream>
using namespace std;

//CREACION DE LA CLASE HEROE (HERENCIA)
class Heroe : public Personaje {
	//ATRIBUTOS
	public:
		int nivel;
		string nombre;
		Objeto mochila[20];
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Heroe(string no, int n, Objeto m[], double s, double st, double af, double arf, double e, double d);
		
		void estadisticas();
		int mover();
		bool puedeSubirNivel();
		void subirNivel();
		int verificarMochilaLLena();
		void aplicarObjetos();
		void aplicarObjeto(Objeto objetoConseguido);
		void descansar();
};
#endif
