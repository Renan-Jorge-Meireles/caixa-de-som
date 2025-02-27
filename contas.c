
#include <stdio.h>

int main()
{
    int a;
    int b;
    int menu;
    printf("digite dois numeors: ");
    scanf("%d %d", &a, &b);
    printf("escolha:\n 1:soma \n 2: produto\n 3: subtrai\n 4: divisâo: ");
    scanf("%d", &menu);
    switch(menu){
        case 1:
            printf("A oma é %d\n ", a+b);
            break;
        case 2:
            printf("o produto é %d\n", a*b);
            break;
        case 3:
            printf("%d-%d=%d \n", a, b, a-b);
            break;
       default:
            printf("opção invalia \n");
            
    }
    
    return 0;
}
