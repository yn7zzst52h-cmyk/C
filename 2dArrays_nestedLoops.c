#include <stdio.h>

// 2d arrays basicamnete sao arrays dentro de arrays
// nested loops sao loops a funcionar dentro de loops

int main() {
    int nums [3] [2] = { {1, 2}, {3, 4}, {5, 6} };      // no primeiro espaço meto o numero de arrays maximo e no segundo meto o numero de elementos que cada array tem. neste caso meti 3 e 2 porque ja sabia a informação desta 2d array, mas pdoeria por 10 e 10 para depois poder adicionar mais e ter "espaço"
    printf("%d\n", nums [0] [1]);       // no primeiro espaço meti a posição da array e no segundo meti a posição do elemento da array que queria dar printf
    int nums2 [10] [7]; // nao preciso de dizer logo o conteudo da 2d array
    nums2 [0] [0] = 7;

    // para perceber como funcionam os nested loops, vou usar de forma a dar print no 2d array anterior

    int i, j; 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", nums [i] [j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}