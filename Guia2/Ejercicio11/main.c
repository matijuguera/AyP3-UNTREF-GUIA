
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    int enteros_src[1024]={0,1,2,3,4,5,6,7,8};
    int numero_elementos_src = sizeof(enteros_src)/sizeof(int);
    int enteros_dst[sizeof(enteros_src)/sizeof(int)];
    copiar(enteros_dst, enteros_src,0,5,numero_elementos_src);
}

void copiar(int* enteros_dst, int* enteros_src, int indice_inicial, int indice_final, int numero_elementos_src){
	if(indice_inicial < 0 || indice_inicial > (numero_elementos_src-1) || indice_final < 0 || indice_final > (numero_elementos_src-1)){
		printf("Indices fuera de rango");
	}else if(indice_final > indice_inicial){
		enteros_src = enteros_src+indice_inicial;
		for(int i=indice_inicial;i<=indice_final;i++){
			enteros_dst = enteros_src;
			printf("dst %d\n", *enteros_dst);
			enteros_src++;
			enteros_dst++;
		}
	}else if(indice_inicial > indice_final){
			printf("Indice inicial tiene que ser menor al indice final");
	}

}
