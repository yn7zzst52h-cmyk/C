#include <stdio.h>

int main(){
    int age = 40; //numeros inteiros
    double height = 1.72; //double aguenta mais casas decimais do que float, logo pode se usar os dois, apesar do double ser mais preciso
    float heightt = 1.70;
    char grade = 'A';
    char name[] = "Rodrigo";  // sem os parenteses retos no final so vai guardar um caracter. !!!! cudiado com a diferença das aapas !!!
    printf("Hello\n"); //o n dá enter
    printf("My name is\nJohn Cena!!!\n");
    printf("\"typeShit\"\n"); // se quiser escrever mesmo as aspas na resposta do printf tenho de meter a barra antes \"
    printf("%d\n", 4); // faço %d para dar print a numeros inteiros por exemplo de uma variavel (exemplo abaixo)
    printf("My age is %d.\n", age);
    printf("My name is %s.\n", name); // %s para escrever uma string nesse lugar
    printf("My height is %f.\n", height); // %f para escrever float ou double (numeros decimais)
    // por definição o %f escreve com 6 casas decimais por isso devo delimitar assim:
    printf("My height is %.2f.\n", height); //assim fica 1.72 e não 1.720000
    getchar();
    return 0;
}