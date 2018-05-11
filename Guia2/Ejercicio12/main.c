#include <stdio.h>

int main(int argc, char** argv) {
    int a[] = {1,2,3};
    int b[] = {4,5,6};

    int capacidad_total_array = (sizeof(a) + sizeof(b))/sizeof(int);
    int numero_elementos_a = sizeof(a)/sizeof(int);
    int numero_elementos_b = sizeof(b)/sizeof(int);

    int destino[capacidad_total_array];

    concatenar(destino, a, b,sizeof(int),sizeof(int),numero_elementos_a,numero_elementos_b);

}

void concatenar(void* destino, void* a, void* b,int tamano_a, int tamano_b,int numero_elementos_a,int numero_elementos_b){

	for(int i=0;i<numero_elementos_a; i++){
		destino = a;
		printf("destino_primero %d \n",*((int*)destino));
		destino = destino + tamano_a;
		a = a + tamano_a;

	}
	for(int i=0; i<numero_elementos_b; i++){
		destino = b;
		printf("destino_segundo %d \n",*((int*)destino));
		destino = destino + tamano_b;
	    b = b + tamano_b;
	}
}


//LOS VOID LOS TENGO QUE TRATAR CON CHAR, POR LO TANTO EN ESTE CASO COMO LE ASIGNO UN INT POR ARITMETICA DE PUNTEROS DEBERIA INCREMETAR 4 POSICIONES POR QUE UNA POSICION ES 1 BYTE, EN CAMBIO
//POR EJEMPLO EN UN PUNTERO INT LA PROXIMA POSICION VAN A SER 4 BYTES MAS!!!!!!
