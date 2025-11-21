#include <stdio.h>

double cube(double num) { //esta funcção ja nao é void pois guarda um valor. cube é o nome da funcao. entre parenteses designamos o que vamos receber: vai receber um valor em double para a variavel num que esta a ser declarada
    return num * num * num;  //da break na funcao (acaba a funcao) guardando o resultado. qualquer coisa escrita a seguir (dentro da fucnao)nao vai ser executada
}

int main() {
    printf("Answer: %f", cube(3.0));
    getchar();
    return 0;
}