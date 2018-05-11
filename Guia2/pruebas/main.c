#include <stdio.h>

int main(){
	int entero[] = {1,2,3,4,5,6};
	void * p_array = &entero;

	for(int i=0;i < sizeof(entero)/sizeof(int); i++){
		printf("puntero_void_desreferenciado= %d\n",*((int *) p_array));
		p_array = p_array + sizeof(int);
	}


}

void tamano(int  entero){
	printf("%d", sizeof(entero));

}
