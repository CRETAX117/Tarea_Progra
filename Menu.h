/*
Libreria del Menu
Se estructurara el menu funcional
*/
#include "Portadas.h"
#define MAX_L 100

void initSelect(){
	menuSelect();
	ocultarCursor();
	int a = 8;
	char in;
	int x;
	
	while(true){
		in = getch();
		if(in == UP || in == DOWN || in == LEFT || in == RIGHT){
			break;
		}		
	}
	
	options();
	setColor(Black, White);
	cuadros1(16, 6, 28,5); 
	setColor(White, Black);	
	
	while(true){
		in=getch();
		if(in==UP){
			if((x>=0 && x<6)){
				x--;
			}else{
				x=5;
			}
		}else if(in==DOWN){
			if((x>=0 && x<6)){
				x++;
			}else{
				x=0;
			}
		}else if(in==ENTER){
			break;
		}else if(in==ESCAPE){
			HWND consoleWnd = GetConsoleWindow(); 		// Obtiene el identificador de la ventana de la consola
			CLS(0);
			margenes();
			exitit();
            SendMessage(consoleWnd, WM_CLOSE, 0, 0); 	// Cierra la ventana de la consola
		}
		
		
		switch(x){
			case 0:
				options();
				setColor(Black, White);
				cuadros1(16, 6, 28,5); 
				setColor(White, Black);
				break;
			case 1:
				options();
				setColor(Black, White); 
				cuadros1(16, 14, 28,5);
				setColor(White, Black);
				break;
			case 2:
				options();
				setColor(Black, White); 
				cuadros1(16, 22, 28,5);
				setColor(White, Black);
				break;
			case 3:
				options();
				setColor(Black, White); 
				cuadros1(74, 6, 28,5);
				setColor(White, Black);
				break;
			case 4:
				options();
				setColor(Black, White); 
				cuadros1(74, 14, 28,5);
				setColor(White, Black);
				break;
			case 5:
				options();
				setColor(Black, White); 
				cuadros1(74, 22, 28,5);
				setColor(White, Black);
				break;
		}
	}
}