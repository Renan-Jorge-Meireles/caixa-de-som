#include <stdio.h>

void imprimir_resultado(int valor){
    printf("resultado %d \n", valor);
};

void imprimir(int numero){
    printf("funçao %d \n", numero);
    numero = numero + 10;
    imprimir_resultado(numero);
    
}

int main()
{
    int numero = 54;
    imprimir(numero);
    printf("main %d", numero);
    return 0;
}
