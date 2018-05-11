#include <stdio.h>
#include <string.h>

#define INDICE_NO_ENCONTRADO  -1

int main(){
	int fuente[] = { 1,2,3,4,5,6,7,8 };
	int numero_elementos = sizeof(fuente)/sizeof(int);
	int numero_a_buscar = 4;
	printf("indice = %d",indice_donde_se_encuentra_numero(fuente, numero_a_buscar, numero_elementos));

}

int indice_donde_se_encuentra_numero(int* origen, int numero_a_buscar,int numero_elementos){

	int indice = INDICE_NO_ENCONTRADO;
	int i = 0;
	while(indice==INDICE_NO_ENCONTRADO && i < numero_elementos){
		if(numero_a_buscar == *(origen++)){
			indice = i;
		}
		i++;
	}

	return indice;
}
