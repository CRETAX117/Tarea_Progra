/*
Tarea en grupo con uso de git
Autores:
	Cardenas Brandon
	Chiriboga Josue
	Valdivieso Steven
	
Fecha de creacion: 09/08/2023
Fecha de modificacion: 09/08/2023
*/

/*
Aqui ingresan solo las funciones para probar
*/

#include <iostream>

int main(int argc, char** argv) {
	//TRANSFORMAR DE MINUSCULAS A MAYUSCULAS
	char palabra[MAX_L];
	int n;
		printf("Ingresar una palabra: ");
		scanf("%s", palabra);
		n = strlen(palabra);
		minus_a_mayus(palabra, n);
		printf("Palabra en mayusculas: %s\n", palabra);
	
	return 0;
}