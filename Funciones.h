/*
Libreria de Funciones
Colocar las funciones principales aca
*/

/*
Actividades a realizar

crear dos prototipos 
-de mayusculas a minusculas (Proceso)		[0]
-de minusculas a mayusculas					[1]
-de mayuscula y minuscula ej )HoLa)			[2]
utilizando recursividad hacer los siguiente ejemplos
-elevar una base a una potencia				[3]
-dividir dos numeros con restas sucesivas	[4]
-ingresar un frase por teclado y que se mueva hacia arriba y hacia abajo y que se termine cuando se aplaste enter [5]
*/
#include <iostream>
#include <conio.h>
#include <string.h>
#define MAX_L 100

/*
|FUNCIONES IMPORTANTES|
mostrarCursor();
ocultarCursor();
centrarTexto();
*/

void minus_a_mayus(char palabra[MAX_L], int n);
void mayus_a_minus(char palabra[MAX_L], int n);
void alternada(char palabra[MAX_L], int n);
int potencia_recursividad(int base, int pot);
float division_Rsucesivas(float a, float b);
void frase_mov(char palabra[MAX_L], int x, int y);

//Primero hacen su funcion

void minus_a_mayus(char palabra[MAX_L], int n) {
    for(int i = 0; i < n; i++) {
        if (palabra[i] >= 'a' && palabra[i] <= 'z') {
            palabra[i] = palabra[i] - 'a' + 'A';
        }
    }
}

void alternada(char palabra[MAX_L], int n){
    for (int i=0; i<n; i++) {
        if (i % 2 == 0) {
            if (palabra[i] >= 'a' && palabra[i] <= 'z') {
                palabra[i] -= 32; // Convertir a mayúscula
            }
        } else {
            if (palabra[i] >= 'A' && palabra[i] <= 'Z') {
                palabra[i] += 32; // Convertir a minúscula
            }
        }
    }
}

float division_Rsucesivas(float a, float b){
	if (a < b) {
        return 0;
    } else {
        return 1 + division_Rsucesivas(a - b, b);
    }
}


//Funcion operativa de minus_a_mayus
//Es lo que ustedes tienen en el main
//Debe tener este formato "f_(nombre)"
/*Al acabar se van a menu al if de ENTER y lo guardan en el numero de su funcion, hay mas explicacion ahi
si no sabes el numero de tu funcion (.-.), esta arriba desde la linea 7 entre []
*/
void f_minus_a_mayus(){
	char titulo[MAX_L] = {"TRANSFORMAR UNA PALABRA DE MINUSCULAS A MAYUSCULAS"};	//Crear una palabra titulo con el titulo 
	margenes();																		//Siempre colocar los margenes
	char palabra[MAX_L];
	int n;
	
	centrarTexto(titulo, 2);														//Copian lo mismo
	mostrarCursor();																//Si se va a escribir ponen el mostrar el cursor y el ocultar
	gotoxy(3, 4); printf("Ingresar una palabra: ");									//Cada impresion con un gotoxy dentro del margen
	scanf("%s", palabra); fflush(stdin);
	n = strlen(palabra);
	minus_a_mayus(palabra, n);
	gotoxy(3,6); printf("Palabra en mayusculas: %s\n", palabra);					//De igual manera
	ocultarCursor();
	regresar();																		//Siempre colocan el regresar();
}

void f_alternada(){
	char titulo[MAX_L] = {"ALTERNAR LETRAS EN MAYUSCULAS Y MINUSCULAS"};
	margenes();
	char palabra[MAX_L];
	int n;
	
	centrarTexto(titulo, 2);
	mostrarCursor();
	gotoxy(3, 4); printf("Ingresar una palabra: ");									//Cada impresion con un gotoxy dentro del margen
	scanf("%s", palabra); fflush(stdin);
	n = strlen(palabra);
	alternada(palabra, n);
	gotoxy(3,6); printf("La palabra con alternacion es: %s\n", palabra);					//De igual manera
	ocultarCursor();
	regresar();
}

void f_division_Rsucesivas(){
	char titulo[MAX_L] = {"DIVISION DE DOS NUMEROS USANDO RESTAS SUCESIVAS"};
	margenes();
	float a, b;
	
	centrarTexto(titulo, 2);
	mostrarCursor();
	gotoxy(3, 4); printf("Ingrese el primer numero: ");									//Cada impresion con un gotoxy dentro del margen
	scanf("%f", &a); fflush(stdin);
	gotoxy(3, 6); printf("Ingrese el segundo numero: ");									//Cada impresion con un gotoxy dentro del margen
	scanf("%f", &b); fflush(stdin);
	int c = division_Rsucesivas(a, b);
	gotoxy(3,8); printf("El resultado de la division es: %d\n", c);					//De igual manera
	ocultarCursor();
	regresar();
}









