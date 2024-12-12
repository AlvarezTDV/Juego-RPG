#ifndef CLASEOBJETO_H
#define CLASEOBJETO_H
#include <iostream>
using namespace std;

//CREACION DE LA CLASE OBJETO
class Objeto {
	//ATRIBUTOS
	public:
		string nombreObjeto;
		double bonoDeSalud;
		double bonoDeAtaqueFisico;
		double bonoDeArmaduraFisica;
		double precio;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Objeto(string, double, double, double, double);
		Objeto();
		
		//virtual void aplicarAtributos();
};
#endif
