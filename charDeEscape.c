/* Programa del ejercicio 1.10 de K&R1988
* toma una cadena como entrada y la manda como salida sustituyendo
* los tabuladores por \\t, los retrocesos por \\b y las diagonales invertidas por \\.
*
* Abel Cesar, Farias Juarez
*
* 20150419
*/

#include <stdio.h>
int main(){
	int c;

	while ( (c = getchar()) !=  EOF ){		
		
		switch(c){
    		case '\t'  :
       			printf("\\t");
       			break;
    		case '\b'  :
       			printf("\\b");
       			break; 
    		case '\\'  :
       			printf("\\\\");
       			break; 				    
    		default :
       			putchar(c);
		}
	}
}
