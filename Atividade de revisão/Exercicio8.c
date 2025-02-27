#include <stdio.h>

struct Tempo {
    int horas;
    int minutos;
    int segundos;
};

struct Tempo converterTempo(int segundos) {
    struct Tempo tempo;  
    tempo.horas = segundos / 3600;            
    tempo.minutos = (segundos % 3600) / 60;   
    tempo.segundos = segundos % 60;           
    return tempo;  
}

int main() {
    int segundos;

    printf("Digite o valor em segundos: ");
    scanf("%d", &segundos);

    struct Tempo tempoConvertido = converterTempo(segundos);

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", 
           segundos, tempoConvertido.horas, tempoConvertido.minutos, tempoConvertido.segundos);

    return 0;
}
