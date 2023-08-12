/*
Libreria del Menu
Se estructurara el menu funcional
*/
#include "Portadas.h"
#include "Funciones.h"

void initSelect(){
	RETORNO:
	CLS(0);
	ocultarCursor();
	menuSelect();
	int a = 8;
	char in, sec;
	int x;
	
	while(true){
		in = getch();
		if(in == UP || in == DOWN || in == LEFT || in == RIGHT){
			setColor(Black, White);
			cuadros1(16, 6, 28,5); 
			setColor(White, Black);
			x=0;
			break;
		}		
	}
	
	while(true){
		in=getch();
		if(in==UP){					//Acciones flecha arriba
			if((x>=0 && x<6)){
				x--;
			}else{
				x=5;
			}
		}else if(in==DOWN){			//Acciones flecha abajo
			if((x>=0 && x<6)){
				x++;
			}else{
				x=0;
			}
				
		}else if(in==LEFT){			//Acciones flecha izquierda
			if(x==3){
				x=0;
			}else if(x==4){
				x=1;
			}else if(x==5){
				x=2;
			}
		}else if(in==RIGHT){		//Acciones flecha derecha
			if(x==0){
				x=3;
			}else if(x==1){
				x=4;
			}else if(x==2){
				x=5;
			}
		}else if(in==ENTER){		//Acciones tecla ENTER
			if(x==0){					//Funcion 0
				CLS(0);
				f_mayus_a_minus();
				NO_RETURN:
				sec = getch();
				if(sec==ESCAPE){
					x=0;
				}else{
					Sleep(1);
					goto NO_RETURN;
				}
				break;
				
			}else if(x==1){				//Funcion 1
				CLS(0);
				f_minus_a_mayus();
				sec = getch();
				if(sec==ESCAPE){
					x=0;
					goto RETORNO;
				}else{	
					Sleep(1);
					goto NO_RETURN;
				}
				break;
				
			}else if(x==2){				//Funcion 2
				CLS(0);
				f_alternada();
				sec = getch();
				if(sec==ESCAPE){
					x=0;
					goto RETORNO;
				}else{
					Sleep(1);
					goto NO_RETURN;
				}
				break;
				
			}else if(x==3){				//Funcion 3
				CLS(0);
				potencia_recursividad();
				sec = getch();
				if(sec==ESCAPE){
					x=0;
					goto RETORNO;
				}else{
					Sleep(1);
					goto NO_RETURN;
				}
				break;
				
			}else if(x==4){				//Funcio 4
				CLS(0);
				f_division_Rsucesivas();
				sec = getch();
				if(sec==ESCAPE){
					x=0;
					goto RETORNO;
				}else{
					Sleep(1);
					goto NO_RETURN;
				}
				break;
				
			}else if(x==5){				//Funcion 5
				CLS(0);
				f_frase_mov();
				sec = getch();
				if(sec==ESCAPE){
					x=0;
					goto RETORNO;
				}else{
					Sleep(1);
					goto NO_RETURN;
				}
				break;
				
			}
		}else if(in==ESCAPE){		//Acciones tecla ESCAPE
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
