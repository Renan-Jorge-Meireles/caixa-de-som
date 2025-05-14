#include <stdio.h>

int main() {
    float a, b;
    int menu;
    
    printf("Calculadora Simples\n");
    printf("Digite dois números: ");
    scanf("%f %f", &a, &b);
    
    printf("\nEscolha uma operação:\n");
    printf("1) Soma\n");
    printf("2) Multiplicação\n");
    printf("3) Subtração\n");
    printf("4) Divisão\n");
    printf("Opção: ");
    scanf("%d", &menu);
    
    switch(menu) {
        case 1:
            printf("\nResultado: %.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case 2:
            printf("\nResultado: %.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case 3:
            printf("\nResultado: %.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case 4:
            if (b != 0) {
                printf("\nResultado: %.2f / %.2f = %.2f\n", a, b, a / b);
            } else {
                printf("\nErro: Divisão por zero!\n");
            }
            break;
        default:
            printf("\nOpção inválida!\n");
            break;
    }
    
    return 0;
}
