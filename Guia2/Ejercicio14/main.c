#include <stdio.h>
#include <string.h>


int main(){
	char prueba_1[] = "hola";
	char prueba_2[] = " mundo";
	int cantidad_elementos_totales = sizeof(prueba_1) + sizeof(prueba_2); //como son de 1 byte no hace falta dividirlo
	char dst[cantidad_elementos_totales];

	concatenar_cadena(prueba_1,prueba_2, dst);

}


void concatenar_cadena(char* a, char* b, char* dst){
	while(*(a) != '\0'){
		dst = a;
		printf("dst %c \n", *dst);
		a++;
		dst++;
	}
	while(*(b) != '\0'){
		dst = b;
		printf("dst %c \n", *dst);
		b++;
		dst++;
	}

}
