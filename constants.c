#include <stdio.h>

int main () {
    const int NUM = 8;  // declarei a variavel mas disse que ela era uma constante
    printf("%d\n", NUM);  //nao é regra mas é normal escrever se o nome das variaveis constantes em caps lock para ser mais facil a diferenciação
    /*
    NUM = 5;        esta parte vai dar erro uma vez que declarei que a variavel num era uma constante logo nao pode ser alterada
    print("%d", NUM);
    */
    getchar();
    return 0;
}