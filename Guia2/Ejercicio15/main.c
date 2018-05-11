#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    char* parrafo = "palabra es un parrafo donde buscamos esta palabra a ver si aparece o no la palabra palabra";


    encontrar_palabra(parrafo, "palabra");
}


/*Encuentra la palabra y muestra la continuacion */
void encontrar_palabra(char* parrafo_f, char* palabra){
	while(*parrafo_f != '\0'){
		 if(strncmp(parrafo_f,palabra, strlen(palabra)) == 0x0){
			 mostrar_ocurrencia(parrafo_f);
		 }
		 parrafo_f++;

	}
}

/*La primera palabra es la encontrada y la muestra junto con su continuación*/
void mostrar_ocurrencia(char * parrafo){
	printf("\n");
	while(*parrafo != '\0'){
		printf("%c", *parrafo);
		parrafo++;
	}
}
