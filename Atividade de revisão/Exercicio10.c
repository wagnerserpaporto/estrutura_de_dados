#include <stdio.h>

int main() {
    int num1, num2;
    int *pNum1, *pNum2;

    pNum1 = &num1;
    pNum2 = &num2;

    printf("Digite o primeiro número: ");
    scanf("%d", pNum1);  

    printf("Digite o segundo número: ");
    scanf("%d", pNum2);  

    int soma = *pNum1 + *pNum2;  

    printf("A soma dos números é: %d\n", soma);

    return 0;
}
