#include <stdio.h>


void f(int param[]) {
    printf("sizeof(param): %d   p_param=%p \n", sizeof(param), param );

    param[3] = 6;
};

void g(int* param) {
    printf("sizeof(param): %d\n", sizeof(param) );
    param[6] = 6;
};

void imprimir_array(int* array, unsigned tam){
	for(int i=0;i<tam;i++){
		printf("%d \n", *(array++));
	}
}

int main()
{
    int array[] = { 1,2,3,4,5,6,7,8 };
    printf("p_array: %p y su tamaño es:%d \n", array, sizeof(array) );
    f(array);
    g(array);

    imprimir_array(array, sizeof(array)/sizeof(int));

}


//1) 8 | 8
//2) creo que por que le paso la primera posicion de la array
