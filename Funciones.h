/*
Libreria de Funciones
Colocar las funciones principales aca
*/

/*
Actividades a realizar

crear dos prototipos 
-de mayusculas a minusculas (Proceso)
-de minusculas a mayusculas
-de mayuscula y minuscula ej )HoLa)
utilizando recursividad hacer los siguiente ejemplos
-elevar una base a una potencia
-dividir dos numeros con restas sucesivas
-ingresar un frase por teclado y que se mueva hacia arriba y hacia abajo y que se termine cuando se aplaste enter
*/
#include <iostream>
#include <conio.h>
#include <string.h>
#include "Gotoxy.h"
#define MAX_L 100

void minus_a_mayus(char palabra[MAX_L], int n);
void mayus_a_minus(char palabra[MAX_L], int n);
void alternada(char palabra[MAX_L, int n]);
void potencia_recursividad(int base, int pot);
void frase_mov(char palabra[MAX_L], int x, int y);

void minus_a_mayus(char palabra[MAX_L], int n) {
    for (int i = 0; i < n; i++) {
        if (palabra[i] >= 'a' && palabra[i] <= 'z') {
            palabra[i] = palabra[i] - 'a' + 'A';
        }
    }
}












