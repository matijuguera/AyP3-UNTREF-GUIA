    int main()
    {
        int vector[] = { 0x1, 0x2, 0x3 };
        printf("vector[0]=%p vector[1]=%p vector[2]=%p", &vector[0], &vector[1], &vector[2]);
        printf("\n %d", (&vector[2] - &vector[0]));
    }

//1) es la posicion de memoria que le sigue a 0x1
//2) posicion de memoria anterior a 0x1
//3) aumento 200 bytes de memoria a la posicion 0x1
//4) devuelve el indice 2
