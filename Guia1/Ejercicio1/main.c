#include <stdio.h>

int main(int argc, char** argv) {
	int entero;
	unsigned enteroSinSigno;
	long int enteroLargo;
	long unsigned enteroLargoSinSigno;
	float decimalSimple;
	double decimalDoblePrecision;

	printf("Tamañano de un entero con sign:               %lu\n", sizeof(entero) );
	printf("Tamañano de un entero con sin sign:           %lu\n", sizeof(enteroSinSigno) );
	printf("Tamañano de un entero largo con sign:         %lu\n", sizeof(enteroLargo) );
	printf("Tamañano de un entero largo sin sign:         %lu\n", sizeof(enteroLargoSinSigno ) );
	printf("Tamañano de un flotante:                      %lu\n", sizeof(decimalSimple) );
	printf("Tamañano de un double:                        %lu\n", sizeof(decimalDoblePrecision) );

	return 0;
}

// para calcular el tamaño de una array es numero_elementos * sizeOf(nombre_variable)
