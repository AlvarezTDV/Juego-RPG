#include <iostream>
#include "claseobjeto.h"
using namespace std;

Objeto::Objeto(string nobj, double bsalud, double bataqfi, double barmfi, double pre){
	nombreObjeto = nobj;
	bonoDeSalud = bsalud;
	bonoDeAtaqueFisico = bataqfi;
	bonoDeArmaduraFisica = barmfi;
	precio = pre;
}

Objeto::Objeto() {
	nombreObjeto = "";
	bonoDeSalud = 0.0;
	bonoDeAtaqueFisico = 0.0;
	bonoDeArmaduraFisica = 0.0;
	precio = 0.0;
}

//void Objeto::aplicarAtributos();
