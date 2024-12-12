#include <iostream>
#include "claseobjeto.h"

using namespace std;

Objeto::Objeto(double bsalud, double bataqfi, double barmfi, int bexp){
	bonoDeSalud = bsalud;
	bonoDeAtaqueFisico = bataqfi;
	bonoDeArmaduraFisica = barmfi;
	bonoDeExperiencia = bexp;
}

//void Objeto::aplicarAtributos();