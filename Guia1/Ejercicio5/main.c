#include <stdio.h>

int main(int argc, char** argv) {
	char vector[] = { 0x9, 32, 25, 010 /* octal */, 200 ,12};

	char* p = 0;
	char* q = 0x0;



	if (p == q) {
		printf("q y p son iguales\n");
	}

	p = vector + 0x6;
	q = vector;

	printf("%c \n", p);

	p = vector + 5;

	if (p == q) {
		printf("q y p son iguales\n");
	}

	char* r = vector + 10;
	printf("%c \n", *r);

	return 0;
}

//1) q es un puntero a nulo y p un puntero a la posicion 0 que tambien es nulo;
//2) se imprime
//
