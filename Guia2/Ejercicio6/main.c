#include <stdio.h>
#include <string.h>

int main()
{
    float origen[] = { 1.1, 2.2, 3.3 };
    float destino[sizeof(origen)/sizeof(float)];

    memcpy(destino, origen, sizeof(origen));

    for(int i=0;i<(sizeof(origen)/sizeof(float));i++){
    	printf("origen %f \n", *(origen+i));

   }

    for(int i=0;i<(sizeof(origen)/sizeof(float));i++){
    	printf("destino %f \n", *(destino+i));

   }

    return 0;
}

