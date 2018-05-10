int main()
{
    double decimales[] = { 1.1, 2.2, 3.3 };
    int enteros[] = { 2, 8, 16, 32, 64};

    printf("sizeof(decimales): %d\n", sizeof(decimales));
    printf("sizeof(enteros): %d\n", sizeof(enteros));

    printf("sizeof(double): %d\n", sizeof(double));
    printf("sizeof(int): %d\n", sizeof(int));

    return 0;
}

//1) 8bytesx3elementos = 24   | 4bytesx5elementos = 20 | 8 | 4
//2) lo de arriba
//3) tiene 3 elementos
//4) tiene 5 elementos
//5) el valor es de 4bytes
//6) el valor es de 4 bytes
//7) tamaño_tipo x numero_elementos = tamaño_total_array
