#include <stdio.h>
#include <string.h>

int main(){
	int origen[] = { 1,2,3,4,5,6,7,8 };
	int numero_elementos = sizeof(origen)/sizeof(int);
	int destino[numero_elementos];
	reverti_dos(origen, destino, numero_elementos);

}

void reverti_dos(int* origen, int*destino,int numero_elementos){
	int* ultima_posicion = origen+numero_elementos-1;
	for(int i=numero_elementos;i>0;i--){
		destino = ultima_posicion;
		printf("destino %d\n",*destino);
		ultima_posicion--;
		destino++;
	}
}
