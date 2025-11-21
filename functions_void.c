#include <stdio.h>
void sayHi() {                  // isto é uma função void pois nao devolve nenhum valor (nao receb nenhuma informação), ou seja, se puser dentro duma variavel por exemplo vai dar erro pois ela nao devovle nenhum numero por exemplo
    printf("Hello User");   // util pois serve para poupar trabalho e tempo para nao ter de escrever sempre o mesmo codigo para fazer coisas. se por exemplo tenho de fazer uma soma de caracteres 15 vezes num programa nao tenho de escrever as 15, crio uma funcao e apenas executo 15 vezes dando assim menos trabalho
}
     
//aparentemente tenho de declarar as funcoes antes do main 

void sayHi2(char name[]) {
    printf("Hello %s\n", name);
}

void data(char name[], int age, double height) {
    printf("Hello %s.\nYour age is %d and you have %.2fm of height.\n", name, age, height);
}


//-----------//-------------


int main() { // main tambem é uma função
    sayHi();   //vai executar a função que criei em cima
    sayHi2("Rodrigo");
    sayHi2("Mega Knight Evo");
    data("Hog Rider", 25, 1.78);
    getchar();
    return 0;
}
