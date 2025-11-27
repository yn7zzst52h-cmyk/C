#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i ++;
    }
    getchar();
    return 0;
}

// este codigo pode ser substituido por um for loop:

int mai() {
    int i;
    for(i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    getchar();
    return 0;
} 

// for loops com arrays:

int main() {
    int numbers[] = {1, 3, 5, 7, 9, 11};
    int i;
    for(i = 0; i <= 5; i++) {
        printf("%d\n", numbers[i] ); 
    }
    getchar();
    return 0;
}

