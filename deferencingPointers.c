#include <stdio.h>

int main() {

    int age = 18;
    int * pAge = &age;

    printf("%p\n", pAge);       // isto da print na memory address que foi guardada no pointer 
    printf("%d\n", *pAge);      // isto vai dar print ao que esta guardado na variavel com a memory address guardada no pointer, logo o que esta guardado em age

    getchar();
    return 0;
}