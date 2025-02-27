#include <stdio.h> 

int main (){

    int a; 
    int b = 1; 

    printf ("Digite o numero o qual deseja calcular o seu fatorial: "); 
    scanf ("%d", &a); 

    for (int i = 1; i <= a; i++) {
        b *= i; 
    }
    printf ("O valor do fatorial de %d e igual %d", a,b); 

    return 0; 
}