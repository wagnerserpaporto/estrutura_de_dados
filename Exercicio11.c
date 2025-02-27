#include <stdio.h>

int main() {
    int num1, num2;
    int *pNum1, *pNum2;
    int temp;

    pNum1 = &num1;
    pNum2 = &num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", pNum1);

    printf("Digite o segundo numero: ");
    scanf("%d", pNum2);

    printf("\nAntes da troca:\n");
    printf("Primeiro numero: %d\n", num1);
    printf("Segundo numero: %d\n", num2);

    temp = *pNum1;  
    *pNum1 = *pNum2; 
    *pNum2 = temp;    

    printf("\nApos a troca:\n");
    printf("Primeiro numero: %d\n", num1);
    printf("Segundo numero: %d\n", num2);

    return 0;
}
