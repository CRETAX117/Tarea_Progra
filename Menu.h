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
			if((x>=0 && x<3)){
				x--;
			}else{
				x=2;
			}
		}else if(in==DOWN){
			if((x>=0 && x<3)){
				x++;
			}else{
				x=0;
			}
		}else if(in==ENTER){
			break;
		}else if(){
			
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
		}
	}
}