#include <stdio.h>

int main() {

    int age = 18;
    double gpa = 4.0;
    char grade = 'A';

    printf("%p\n", &age);     // isto vai dar print à memory address da variavel, a localizacao da variavel na memoria ram

    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);
    getchar();
    return 0;
}