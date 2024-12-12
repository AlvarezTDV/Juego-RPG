#ifndef CLASEOBJETO_H
#define CLASEOBJETO_H
#include <iostream>
using namespace std;

//CREACION DE LA CLASE OBJETO
class Objeto {
	//ATRIBUTOS
	private:
		double bonoDeSalud;
		double bonoDeAtaqueFisico;
		double bonoDeArmaduraFisica;
		int bonoDeExperiencia;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Objeto(double, double, double, int);
		
		//virtual void aplicarAtributos();
};
#endif
