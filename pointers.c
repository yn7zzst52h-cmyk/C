#include <stdio.h>

int main() {

    int age = 18;
    int * pAge = &age;      // criamos uma variavel pointer chamada pAge que vai guardar a memeory address da variavel int (o nome normalmente escreve se com um p minusculo e o nome duma variavel, mas pode ser de outra forma)
    double gpa = 4.0;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("Age's memory address: %p\n", &age);         // tal como int é um tipi de variavel que guarda numeros inteiros, pointer tambem é um tipo de variável mas que guarda as memory addresses de outras variaveis

    getchar();
    return 0;
}