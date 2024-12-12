#ifndef CLASES_H
#define CLASES_H

//SE AGREGAN TODAS LAS CLASES PARA TENERLAS EN UNA SOLA CABECERA
#include "clasepersonaje.h"
#include "claseheroe.h"
#include "clasemounstruo.h"
#include "claseobjeto.h"
#include "clasetienda.h"

extern double saludActual, ataqueFisicoActual, armaduraFisicaActual, experienciaActual, dineroActual;
extern int nivelActual;
extern Tienda tienda;
extern Heroe jugador;
extern Mounstruo bestiaSalvaje;
extern Mounstruo muertoViviente;
extern Mounstruo demonio;
extern Mounstruo dragon;
extern Objeto rango1objeto1;
extern Objeto rango1objeto2;
extern Objeto rango1objeto3;
extern Objeto rango1objeto4;
extern Objeto rango1objeto5;
extern Objeto rango2objeto1;
extern Objeto rango2objeto2;
extern Objeto rango2objeto3;
extern Objeto rango2objeto4;
extern Objeto rango2objeto5;
extern Objeto rango3objeto1;
extern Objeto rango3objeto2;
extern Objeto rango3objeto3;
extern Objeto rango3objeto4;
extern Objeto rango3objeto5;
extern Objeto rango4objeto1;
extern Objeto rango4objeto2;
extern Objeto rango4objeto3;
extern Objeto rango4objeto4;
extern Objeto rango4objeto5;
extern Objeto rango1[5];
extern Objeto rango2[5];
extern Objeto rango3[5];
extern Objeto rango4[5];

#endif
