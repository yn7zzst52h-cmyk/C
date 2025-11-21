#include <stdio.h>
#include <string.h>

struct Students {                   // basicamnete uma struct é uma array mas que guarda diferentes tipos de dados. la dentro podemos guardar numeros, caracteres, etc...
    char name[50];
    int age;
    char major[50];
    double gpa; //gpa é a média la nos eua qe varia de 0-4
};

int main() {
    struct Students student1;  // dentro da struct students criei uma 'caixa' para o student 1 onde vou guardar as informações dele
    student1.age = 18;
    student1.gpa = 3.5;
    strcpy( student1.name, "Rodrigo");    // por char name[50] e char major[50] serem arrays de caracteres e nao variaveis, a forma de atribuir valores é diferente
    strcpy( student1.major, "Eletronic Engineer");


    struct Students student2;
    student2.age = 19;
    student2.gpa = 2.1;
    strcpy (student2.name, "Mel");
    strcpy (student2.major, "Business");

    struct Students student3;
    printf("Enter the age of the student 3: ");
    scanf("%d", &student3.age);
    student3.gpa = 2.1;
    strcpy (student3.name, "Mel");
    strcpy (student3.major, "Business");

    printf("%s\n", student1.name);
    printf("%d", student3.age);
    getchar();
    return 0;
}


