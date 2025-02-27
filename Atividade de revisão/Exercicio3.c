#include <stdio.h>

int main (){

    float a; 
    float b = 0.1; 
    float c = 0.2; 

    printf("Digite o salario ao qual o imposto sera calculado: "); 
    scanf("%f", &a); 

    float d = a * b; 
    float e = a * c; 

    if (a <= 2000) {
        printf ("Nao sera cobrado imposto para esse valor"); 
    }else if (a > 2000 && a < 4000) {
        printf ("O valor do imposto cobrado e %f", d);   
    }else {
        printf ("O valor do imposto a ser cobrado e %f", e); 
    }

    return 0; 
}