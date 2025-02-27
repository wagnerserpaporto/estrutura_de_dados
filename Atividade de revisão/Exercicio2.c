#include <stdio.h> 

int main () {

    float a; 

    printf ("Digite o valor: ");  
    scanf ("%f", &a); 

    if (a < 0) {
        printf ("O valor e negativo"); 
    } else if (a > 0) {
        printf ("O valor e positivo"); 
    } else {
        printf ("O valor e nulo"); 
    }

    return 0; 
}