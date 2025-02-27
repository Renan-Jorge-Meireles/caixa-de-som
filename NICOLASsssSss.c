#include <stdio.h>

int main(){
    int a;
    int b;
    int menu;
    
    printf("Digita dois Números: \n");
    scanf("%d %d", &a, &b);
    printf("Escolha \n 1)Soma\n 2)Multiplicação\n 3)Subtração\n 4)Divisão\n");
    scanf("%d", &menu);
    
    switch(menu){
        case 1:
            printf("A Soma é %d\n ", a+b);
            break;
        case 2:
            printf("A Multiplicação é %d\n ", a*b);
            break;
        case 3:
            printf("A Subtração é %d\n ", a-b);
            break;
        case 4:
            printf("A Divisão é %d\n ", a/b);
            break;
        default:
            printf("Opção Invalida\n");
            break;
    }
    return 0;
}
