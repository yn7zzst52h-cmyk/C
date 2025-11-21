#include <stdio.h>

int main() {
    int luckyNumbers[] = {4, 9, 11, 20}; // arrays funcionam como uma variavel mas que consegue guardar varios numeros por exemplo
    int keyNumbers [10]; // se quiser declarar a array mas nao dizer logo os itens que estao la dentro, posso fazer isto mas tenho de dizer qual o limite de elementos
    printf("%d\n", luckyNumbers[0]); // escrevi o zero porque queria dar print apenas ao primeiro elemento (a numeração começa no 0)
    luckyNumbers[0] = 200; //troquei o elemento da posição 0 para 200
    printf("%d\n", luckyNumbers[0]);
    keyNumbers[3] = 90;
    printf("%d\n", keyNumbers[3]);
    getchar();
    return 0;
}