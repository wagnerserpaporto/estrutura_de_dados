#include <stdio.h>

int main (){
    
    int a; 
    int b;
    int c;  

    printf ("Quantos numeros deseja inserir: "); 
    scanf ("%d", &a); 

    for (int i = 1; i <= a; i++) {
        b += i; 
        printf ("Valores: %d\n", i);
    }

    c = b/a; 

    printf ("A media dos valores e: %d", c);

    return 0;
}