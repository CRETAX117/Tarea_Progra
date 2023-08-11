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
#define MAX_L 100

void minus_a_mayus(char palabra[MAX_L], int n);
void mayus_a_minus(char palabra[MAX_L], int n);
void alternada(char palabra[MAX_L], int n);
void potencia_recursividad(int base, int pot);
void frase_mov(char palabra[MAX_L], int x, int y);

void minus_a_mayus(char palabra[MAX_L], int n) {
    for (int i = 0; i < n; i++) {
        if (palabra[i] >= 'a' && palabra[i] <= 'z') {
            palabra[i] = palabra[i] - 'a' + 'A';
        }
    }
}

//Funcion operativa de minus_a_mayus
void f_minus_a_mayus(){
	//TRANSFORMAR DE MINUSCULAS A MAYUSCULAS
	char palabra[MAX_L];
	int n;
		printf("Ingresar una palabra: ");
		scanf("%s", palabra);
		n = strlen(palabra);
		minus_a_mayus(palabra, n);
		printf("Palabra en mayusculas: %s\n", palabra);
}











