#include <stdio.h>

int main()
{
    int enteros[] = { 2, 8, 16, 32, 64};

    printf("\nenteros[0]= %d", enteros[0] );
    printf("\nenteros[4]= %d", enteros[4] );
    printf("\nenteros[5]= %p", enteros[5] );
    enteros[5] = 9;
    printf("\nenteros[5]= %d p_enteros[5]= %p", enteros[5], &enteros[5]);
    enteros[6] = 7;
    		 printf("\nenteros[6]= %d", enteros[6] );
    return 0;
}

//1) 2 | 64 | valor nulo
//2) contiene 5 elementos
//3) le asignamos el valor 7 al elemento 6 y a su vez le asignamos 4 bytes de memoria mas
//4) es posible no se por que...
