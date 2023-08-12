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

/*
FUNCIONES ADICIONALES
*/

int numeros(char a[]){
	int i;
	int error = 0;
	while(a[i] != '\0'){
		if(a[i] < '0' || a[i] > '9'){
			error = 1;
			break;
		}
		i++;
	}
	
	return error;
}

int letras(char a[]){
	int i;
	int error = 0;
	while(a[i] != '\0'){
		if((a[i] < 'A' || a[i] > 'Z') && (a[i] < 'a' || a[i] > 'z')){
			error = 1;
			break;
		}
		i++;
	}
	
	return error;
}

char errLetras[MAX_L] = {"Por favor solo ingrese letras"};
char errNumeros[MAX_L] = {"Por favor solo ingrese numeros"};

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

void frase_mov(char palabra[MAX_L], int x, int y) {
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
	S0:
	int error;
	char titulo[MAX_L] = {"TRANSFORMAR UNA PALABRA DE MAYUSCULAS A MINUSCULAS"};	//Crear una palabra titulo con el titulo 
	margenes();																		//Siempre colocar los margenes
	char palabra[MAX_L];
	int n;
	
	centrarTexto(titulo, 2);														//Copian lo mismo
	mostrarCursor();																//Si se va a escribir ponen el mostrar el cursor y el ocultar
	gotoxy(3, 4); printf("Ingresar una palabra: ");									//Cada impresion con un gotoxy dentro del margen
	gets(palabra); fflush(stdin); error=letras(palabra);
	
	if(error != 0){
		CLS(0);
		margenes();
		cuadros1(44, 13, 31, 1);
		ocultarCursor();
		centrarTexto(errLetras, 14);
		Sleep(1200); CLS(0); goto S0;
	}
	
	n = strlen(palabra);
	mayus_a_minus(palabra, n);
	gotoxy(3,6); printf("Palabra en minusculas: %s\n", palabra);					//De igual manera
	ocultarCursor();
	regresar();																		//Siempre colocan el regresar();
}

void f_minus_a_mayus(){
	S1:
	int error;
	char titulo[MAX_L] = {"TRANSFORMAR UNA PALABRA DE MINUSCULAS A MAYUSCULAS"};	//Crear una palabra titulo con el titulo 
	margenes();																		//Siempre colocar los margenes
	char palabra[MAX_L];
	int n;
	
	centrarTexto(titulo, 2);														//Copian lo mismo
	mostrarCursor();																//Si se va a escribir ponen el mostrar el cursor y el ocultar
	gotoxy(3, 4); printf("Ingresar una palabra: ");									//Cada impresion con un gotoxy dentro del margen
	gets(palabra); fflush(stdin); error=letras(palabra);
	
	if(error != 0){
		CLS(0);
		margenes();
		cuadros1(44, 13, 31, 1);
		ocultarCursor();
		centrarTexto(errLetras, 14);
		Sleep(1200); CLS(0); goto S1;
	}
	
	n = strlen(palabra);
	minus_a_mayus(palabra, n);
	gotoxy(3,6); printf("Palabra en mayusculas: %s\n", palabra);					//De igual manera
	ocultarCursor();
	regresar();																		//Siempre colocan el regresar();
}

void f_alternada(){
	S2:
	int error;
	char titulo[MAX_L] = {"ALTERNAR LETRAS EN MAYUSCULAS Y MINUSCULAS"};
	margenes();
	char palabra[MAX_L];
	int n;
	
	centrarTexto(titulo, 2);
	mostrarCursor();
	gotoxy(3, 4); printf("Ingresar una palabra: ");									//Cada impresion con un gotoxy dentro del margen
	scanf("%s", palabra); fflush(stdin); error=letras(palabra);
	
	if(error != 0){
		CLS(0);
		margenes();
		cuadros1(44, 13, 31, 1);
		ocultarCursor();
		centrarTexto(errLetras, 14);
		Sleep(1200); CLS(0); goto S2;
	}
	
	n = strlen(palabra);
	alternada(palabra, n);
	gotoxy(3,6); printf("La palabra con alternacion es: %s\n", palabra);					//De igual manera
	ocultarCursor();
	regresar();
}

void potencia_recursividad(){
	S3:
	int error;
	char titulo[MAX_L] = {"ELEVAR UNA BASE A UN EXPONENTE"};
	char base[6];
	char exponente[6];
	int resultado;
	margenes();
	
	centrarTexto(titulo, 2);
	mostrarCursor();
    gotoxy(3, 4); printf("Ingrese la base: ");
    scanf("%s", base); fflush(stdin); error=numeros(base);
    int bas = atoi(base);
	
	if(error != 0){
		CLS(0);
		margenes();
		cuadros1(44, 13, 31, 1);
		ocultarCursor();
		centrarTexto(errNumeros, 14);
		Sleep(1200); CLS(0); goto S3;
	}                           
	
    gotoxy(3, 6); printf("Ingrese el exponente: ");
    scanf("%s", &exponente); fflush(stdin); error=numeros(exponente);
    int exp = atoi(exponente);
	
	if(error != 0){
		CLS(0);
		margenes();
		cuadros1(44, 13, 31, 1);
		ocultarCursor();
		centrarTexto(errNumeros, 14);
		Sleep(1200); CLS(0); goto S3;
	}
	
    resultado = potencia_recursividad(bas, exp);
    gotoxy(3, 8); printf("El resultado es: %d\n", resultado);
    ocultarCursor();
	regresar();
}

void f_division_Rsucesivas(){
	S4:
	int error;
	char titulo[MAX_L] = {"DIVISION DE DOS NUMEROS USANDO RESTAS SUCESIVAS"};
	margenes();
	char num1[10];
	char num2[10];
	
	centrarTexto(titulo, 2);
	mostrarCursor();
	gotoxy(3, 4); printf("Ingrese el primer numero: ");									//Cada impresion con un gotoxy dentro del margen
	scanf("%s", &num1); fflush(stdin); error=numeros(num1);
    int a = atoi(num1);
	
	if(error != 0){
		CLS(0);
		margenes();
		cuadros1(44, 13, 31, 1);
		ocultarCursor();
		centrarTexto(errNumeros, 14);
		Sleep(1200); CLS(0); goto S4;
	}
	gotoxy(3, 6); printf("Ingrese el segundo numero: ");									//Cada impresion con un gotoxy dentro del margen
	scanf("%s", &num2); fflush(stdin); error=numeros(num2);
    int b = atoi(num2);
	
	if(error != 0){
		CLS(0);
		margenes();
		cuadros1(44, 13, 31, 1);
		ocultarCursor();
		centrarTexto(errNumeros, 14);
		Sleep(1200); CLS(0); goto S4;
	}
	int c = division_Rsucesivas(a, b);
	gotoxy(3,8); printf("El resultado de la division es: %d\n", c);					//De igual manera
	ocultarCursor();
	regresar();
}
void f_frase_mov(){
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






