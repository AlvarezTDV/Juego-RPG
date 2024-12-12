#include "clases.h"

//HEROE
double saludActual = 100;
double ataqueFisicoActual = 15;
double armaduraFisicaActual = 5;
double experienciaActual = 0;
int nivelActual = 1;
double dineroActual = 0;
Heroe jugador("Arthas", nivelActual, saludActual, ataqueFisicoActual, armaduraFisicaActual, experienciaActual, dineroActual);

//MOUNSTRUOS
Mounstruo bestiaSalvaje("Bestia", 50, 10, 2, 10, 5);
Mounstruo muertoViviente("Zombi", 100, 20, 5, 20, 10);
Mounstruo demonio("Demonio", 150, 30, 10, 40, 20);
//JEFE FINAL
Mounstruo dragon("Dragon", 300, 50, 20, 0, 0);

//TIENDA
Tienda tienda;

//OBJETOS RANGO 1
Objeto rango1objeto1("Espada de Hierro", 10, 5, 2, 10);
Objeto rango1objeto2("Escudo de Madera", 5, 2, 5, 8);
Objeto rango1objeto3("Armadura de Tela", 20, 0, 3, 12);
Objeto rango1objeto4("Amuleto del Aprendiz", 15, 3, 1, 15);
Objeto rango1objeto5("Pocion de Vitalidad", 25, 0, 0, 7);
//OBJETOS RANGO 2
Objeto rango2objeto1("Espada de Acero", 15, 10, 3, 25);
Objeto rango2objeto2("Escudo de Metal", 10, 3, 10, 20);
Objeto rango2objeto3("Armadura de Cuero Reforzado", 30, 2, 8, 30);
Objeto rango2objeto4("Anillo del Guerrero", 20, 7, 2, 28);
Objeto rango2objeto5("Botas Rapidas", 10, 5, 5, 18);
//OBJETOS RANGO 3
Objeto rango3objeto1("Espada de Mithril", 25, 20, 5, 50);
Objeto rango3objeto2("Escudo de Dragon", 20, 5, 20, 45);
Objeto rango3objeto3("Armadura de Placas", 50, 5, 15, 60);
Objeto rango3objeto4("Collar de Fuerza", 30, 15, 5, 55);
Objeto rango3objeto5("Capa de vitalidad", 15, 10, 10, 40);
//OBJETOS RANGO 4
Objeto rango4objeto1("Espada del Rey", 50, 35, 10, 100);
Objeto rango4objeto2("Escudo de la Eternidad", 50, 10, 35, 90);
Objeto rango4objeto3("Armadura del Invencible", 80, 10, 30, 120);
Objeto rango4objeto4("Anillo del Destino", 40, 25, 10, 95);
Objeto rango4objeto5("Elixir de Vida Infinita", 100, 0, 0, 75);

//ARRAY DE OBJETOS
Objeto rango1[5] = {rango1objeto1, rango1objeto2, rango1objeto3, rango1objeto4, rango1objeto5};
Objeto rango2[5] = {rango2objeto1, rango2objeto2, rango2objeto3, rango2objeto4, rango2objeto5};
Objeto rango3[5] = {rango3objeto1, rango3objeto2, rango3objeto3, rango3objeto4, rango3objeto5};
Objeto rango4[5] = {rango4objeto1, rango4objeto2, rango4objeto3, rango4objeto4, rango4objeto5};
