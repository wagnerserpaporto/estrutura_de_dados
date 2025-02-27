#include <stdio.h>

int main () { 
    int a; 
    int b; 
    int c; 

    printf("Digite o Primeiro Valor: ");
    scanf("%d", &a); 

    printf("\nDigite o Segundo Valor: ");
    scanf("%d", &b); 

    printf("\nDigite o Terceiro Valor: ");
    scanf("%d", &c); 


    if (a >= b && a >= c) {
        printf("O maior numero digitado foi: %d", a);
    } else if (b >= a && b >= c) {
        printf("O maior numero digitado foi: %d", b);
    } else {
        printf("O maior numero digitado foi: %d", c);
    }

    return 0;
}
