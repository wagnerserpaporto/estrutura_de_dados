#include <stdio.h>

int main (){

    int vetor1 [5];
    int vetor2 [5]; 
    int i; 

    printf ("Digite o cinco valores do primeiro vetor: "); 
    for (i = 0; i < 5; i++){
        printf ("vetor1[%d]\n", i ); 
            scanf("%d", &vetor1[i]);
    }
    
    printf ("Digite o cinco valores do segundo vetor: "); 
    for (i = 0; i < 5; i++){
        printf ("vetor2[%d]\n", i ); 
            scanf("%d", &vetor2[i]);
    }
    
    printf ("Valores do primeiro vetor: "); 
    for (int i = 0; i < 5; i++){
        printf ("%d\n", vetor1[i]); 
    }
    
    printf ("Valores do segundo vetor: "); 
    for (int i = 0; i < 5; i++){
        printf ("%d\n", vetor2[i]); 
    } 

    for (i = 0; i < 5; i++){
        int troca = vetor1[i];
        vetor1[i] = vetor2[i]; 
        vetor2[i] = troca; 
    }

    printf ("Valores do vetor apos a troca: "); 
    for (int i = 0; i < 5; i++){
        printf ("%d\n", vetor1[i]); 
    }
    
    printf ("Valores do vetor apos a troca: "); 
    for (int i = 0; i < 5; i++){
        printf ("%d\n", vetor2[i]); 
    } 

    return 0; 
}