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
#include <windows.h>
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
//Funcion Mayuscula a Minuscula: Josue Chiriboga
void mayus_a_minus(char palabra[MAX_L], int n) {
    for (int i = 0; i < n; i++) {
        if (palabra[i] >= 'A' && palabra[i] <= 'Z') {
            palabra[i] = palabra[i] - 'A' + 'a';
        }
    }
}
//Funcion Minuscula a Mayuscula: Josue Chiriboga
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

int potencia_recursividad(int base, int pot) {
    if (pot == 0) {
        return 1;
    } else {
        return base * potencia_recursividad(base, pot - 1);
    }
}

float division_Rsucesivas(float a, float b){
	if (a < b) {
        return 0;
    } else {
        return 1 + division_Rsucesivas(a - b, b);
    }
}

void frase_mov(const char palabra[MAX_L], int x, int y) {
    for (int i = 0; i < y; i++) {
        printf("\n");
    }
    for (int i = 0; i < x; i++) {
        printf(" ");
    }
    printf("%s\n", palabra);
}


//Funcion operativa de minus_a_mayus
//Es lo que ustedes tienen en el main
//Debe tener este formato "f_(nombre)"
/*Al acabar se van a menu al if de ENTER y lo guardan en el numero de su funcion, hay mas explicacion ahi
si no sabes el numero de tu funcion (.-.), esta arriba desde la linea 7 entre []
*/
void f_mayus_a_minus(){
	char titulo[MAX_L] = {"TRANSFORMAR UNA PALABRA DE MAYUSCULAS A MINUSCULAS"};	//Crear una palabra titulo con el titulo 
	margenes();																		//Siempre colocar los margenes
	char palabra[MAX_L];
	int n;
	
	centrarTexto(titulo, 2);														//Copian lo mismo
	mostrarCursor();																//Si se va a escribir ponen el mostrar el cursor y el ocultar
	gotoxy(3, 4); printf("Ingresar una palabra: ");									//Cada impresion con un gotoxy dentro del margen
	gets(palabra); fflush(stdin);
	n = strlen(palabra);
	mayus_a_minus(palabra, n);
	gotoxy(3,6); printf("Palabra en minusculas: %s\n", palabra);					//De igual manera
	ocultarCursor();
	regresar();																		//Siempre colocan el regresar();
}

void f_minus_a_mayus(){
	char titulo[MAX_L] = {"TRANSFORMAR UNA PALABRA DE MINUSCULAS A MAYUSCULAS"};	//Crear una palabra titulo con el titulo 
	margenes();																		//Siempre colocar los margenes
	char palabra[MAX_L];
	int n;
	
	centrarTexto(titulo, 2);														//Copian lo mismo
	mostrarCursor();																//Si se va a escribir ponen el mostrar el cursor y el ocultar
	gotoxy(3, 4); printf("Ingresar una palabra: ");									//Cada impresion con un gotoxy dentro del margen
	gets(palabra); fflush(stdin);
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

void potencia_recursividad(){
	char titulo[MAX_L] = {"ELEVAR UNA BASE A UN EXPONENTE"};
	margenes();
	int base, exponente, resultado;
	
	centrarTexto(titulo, 2);
	mostrarCursor();
    gotoxy(3, 4); printf("Ingrese la base: ");
    scanf("%d", &base); fflush(stdin);
    gotoxy(3, 6); printf("Ingrese el exponente: ");
    scanf("%d", &exponente); fflush(stdin);
    resultado = potencia_recursividad(base, exponente);
    gotoxy(3, 8); printf("El resultado es: %d\n", resultado);
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
void f_frase_mov() {
    char titulo[MAX_L] = {"FRASE ANIMADA"};
    margenes();
    char frase[MAX_L];
    
    centrarTexto(titulo, 2);
    mostrarCursor();
    gotoxy(3, 4); printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin); fflush(stdin);
    frase[strcspn(frase, "\n")] = '\0'; 
    int screenHeight = 10;
    int len = strlen(frase);
    for (int i = 0; i < screenHeight; i++) {
        frase_mov(frase, 0, i);
        Sleep(200); 
        system("cls");
    }
    for (int i = screenHeight - 2; i >= 0; i--) {
        frase_mov(frase, 0, i);
        Sleep(200); 
        system("cls");
    }
    ocultarCursor();
    regresar();
}






