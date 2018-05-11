#include <stdio.h>
#include <string.h>


int main(){
	char prueba_1[] = "hola mundo";
	char prueba_2[] = "";
	printf("longitud=%d", longitud_string(prueba_1));

}




int longitud_string(char* str){
	int contador = 0;
	while(*str != '\0'){
		printf("caracter: %c \n", *str);
		str++;
		contador++;
	}
	return contador;
}


// si str es null, la longitud me va a dar 0 o no va a encontrar la posicion de memoria
