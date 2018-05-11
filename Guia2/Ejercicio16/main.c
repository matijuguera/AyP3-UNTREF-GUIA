#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    char* parrafo = "palabra palabra es un parrafo donde buscamos esta palabra a ver si aparece o no la palabra palabra s";
    char* destino;


    encontrar_palabra(parrafo, "palabra",sizeof("palabra"), "normie",sizeof("normie"), destino);

}


void encontrar_palabra(char* parrafo_f, char* palabra_a_cambiar,int tamano_palabra_a_cambiar,char* palabra, int tamano_palabra, char* destino){

	while(*parrafo_f != '\0'){
		if(strncmp(parrafo_f,palabra_a_cambiar, strlen(palabra_a_cambiar)) == 0x0){
			for(int i=0; i<tamano_palabra; i++){ //copio palabra a destino
				destino = palabra;
				printf("%c",*destino );
				destino++;
				palabra++;
			}
			palabra = palabra-tamano_palabra; //vuelvo a la primera posicion por si vuelve a encontrar
			parrafo_f = parrafo_f + tamano_palabra_a_cambiar-1; //aumento la posicion del parrafo asi sigue copiando despues de la palabra que encontro
		}
		destino = parrafo_f;
		printf("%c",*destino );
		destino++;
		parrafo_f++;
	}



}

