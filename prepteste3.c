/// Teste de Algoritmia e Programação
/// Novembro de 2025

/// NOME   : Rodrigo
/// Número : 1251422

#include<stdio.h>

/// a)
///
/// Escreva uma função 'escVetor' para escrever os elementos
/// de um vetor de n carateres.
///  Exemplo: se v = {'c','o','m','p','u','t','a','d','o','r'}
///           deve escrever "computador" (sem aspas) e com um ENTER no fim.

void escVetor(char vetor[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%c", vetor[i]);
    }
    printf("\n");
}


/// b)
///
/// Escreva uma função 'compararVetores' que recebe 2 vetores de n carateres
/// e devolve 1 se os vetores forem iguais e 0 caso contrário.

int compararVetores(char v1[], char v2[], int n) {
    for(int i = 0; i < n; i++) {
        if (v1[i] != v2[i]) {
            return 0;
        }
    }
    return 1;
}



/// c)
///
/// Escreva uma função 'revelaCarater' que recebe 2 vetores
/// v e u de n carateres e ainda um carater c.
/// A função deve colocar o carater c nas posições do vetor u onde no vetor v
/// estiver o carater c
///  Exemplo:                 se v = {'c','o','m','p','u','t','a','d','o','r'}
///                            e u = {'-','-','-','-','-','-','-','-','-','-'}
///                            e n = 10
///                            e c = 'o'
///            deve alterar u para : {'-','o','-','-','-','-','-','-','o','-'}

void revelaCaracter(char v[], char u[], int n, char c) {
    for(int i = 0; i < n; i++) {
        if( v[i] == c ) {
            u[i] = c;
        }
    }
}




int main()
{
    /// d)
    ///
    /// Complete o código abaixo de modo a jogar o jogo da forca com a palavra "banana".
    /// Use scanf("%c%*c",&c); para ler um carater do teclado.
    ///
    ///  Exemplo do output pretendido:
    ///  ------
    ///  Introduza um carater : a
    ///  -a-a-a
    ///  Introduza um carater : x
    ///  -a-a-a
    ///  Introduza um carater : n
    ///  -anana
    ///  Introduza um carater : c
    ///  -anana
    ///  Introduza um carater : b
    ///  Acertou!


    char v[6]={'b','a','n','a','n','a'};
    char u[6]={'-','-','-','-','-','-'};
    int n=6;
    char c;
    int x = compararVetores(v, u, n);
    int a = compararVetores(v, u, n);
    while(a == 0) {
        printf("Introduza um caracter : ");
        scanf("%c%*c",&c);
        revelaCaracter(v, u, n, c);
        escVetor(u, n);
        a = compararVetores(v, u, n);
    }
    printf("Acertou!");
    



    getchar();
    return 0;
}
