#include <stdio.h>

int main() {
	int i = 29;
	int j = 50;

	char vector[] = { 0x1, 0x2, 0x3 };

	printf("p_i=%p  p_j=%p p_vector=%p p_vector[0]=%p p_vector[1]=%p", &i, &j, vector, &vector[0], &vector[1]);
}

