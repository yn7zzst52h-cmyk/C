#include <stdio.h>

int main() {
    int index = 0;

    while ( index <= 5 ) {
        printf("%d\n", index);
        index ++;
    }

    do {            // aqui ele primeiro executa e so depois verifica, logo é sempre executado pelo menos uma vez
        printf("%d\n", index);
        index ++;
    } while ( index <= 5 );
    getchar();
    return 0;
}