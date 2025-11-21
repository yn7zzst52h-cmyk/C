#include <stdio.h>

int max(int num1, int num2, int num3) {
    int biggest;
    if(num1 >= num2 && num1 >= num3) { // && -> and
        biggest = num1;
    } else if(num2 >= num3) {
        biggest = num2;
    } else {
        biggest = num3;
    }
    return biggest;
}

int main() {

    printf("The biggest number is %d.", max(3, 4, 5));

    if(3 > 2 || 2 > 5) {    // || -> or
        printf("True.");
    } else {
        printf("False");
    }

    if(!(3 < 2)) {     // a condição é falsa pois 3 é maior que 2 mas como temos o ! antes, estamos a negar o que esta a seguir, logo o falso passa a ser verdadeiro
        printf("True");
    }
    getchar();
    return 0;
}

/*
notes:
&& - and
|| - or
== - equal
!= - not equal / different
*/