#include <stdio.h>

int main(int argc, char** argv) {
	int enteros[] = { 1, 2, 3, 4, 7, 78, 174 };
	int simple = 32;
	int radio = 4;
	int* p;
	int* q;
	int* r;


	p = enteros + 6;
	q = &simple;
	r = q;



	*r = 115;

	r = &radio;

	*p = radio;


	p = r;
	q = enteros;

	*(q + 4) = 0;
	*p = 0;

	r = q + 1;

	q - r;


	p = enteros + 3;

	q - p;
	return 0;

}

//2) son nulos 0x0
//3) El valor de p = la posicion de memoria donde se encuentra 174 (entero[6]), q es la posicion de memoria de simple, r va a valer lo mismo que simple ya que le asignamos q que tiene como valor la posicion de simple
//4) va a valer 115 por que esto desreferenciando y me da el valor que tiene almacenado simple.
//5) van a seguir teniendo el valor de la posicion de simple pero desreferenciado va a dar 115
//6) Ahora la posicion 6 de la array va a valer 4, 174 a 4
//7) No se modifico
//8) La posicion enteros[4] va a pasar de 7 a 0
//9) Ahora r va a estar en la posicion donde se encuentra enteros[1] osea la de valor 2
//10) Por que q se encontraba en la posicion enteros[0] y al incremetarlo nos da la pos de enteros[1]
//11) da menos una, la resta entre punteros devuelve indices q=pos 0 r=pos 1 q-r = -1
//12) va a devolver -3 ya que q=0 - p=3 q-p = -3
