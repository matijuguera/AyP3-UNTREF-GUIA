#include <stdio.h>

int main(int argc, char** argv) {
	int entero;
	unsigned enteroSinSigno;
	long int enteroLargo;
	long unsigned enteroLargoSinSigno;
	float decimalSimple;
	double decimalDoblePrecision;

	printf("Tama�ano de un entero con sign:               %lu\n", sizeof(entero) );
	printf("Tama�ano de un entero con sin sign:           %lu\n", sizeof(enteroSinSigno) );
	printf("Tama�ano de un entero largo con sign:         %lu\n", sizeof(enteroLargo) );
	printf("Tama�ano de un entero largo sin sign:         %lu\n", sizeof(enteroLargoSinSigno ) );
	printf("Tama�ano de un flotante:                      %lu\n", sizeof(decimalSimple) );
	printf("Tama�ano de un double:                        %lu\n", sizeof(decimalDoblePrecision) );

	return 0;
}

// para calcular el tama�o de una array es numero_elementos * sizeOf(nombre_variable)
