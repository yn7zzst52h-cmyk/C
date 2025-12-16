/// Teste de Algoritmia e Programação
/// Novembro de 2025

/// NOME   : Rodrigo Antunes
/// Número :1251422

#include <stdio.h>

/// a)
///
/// Escreva uma função que recebe dois números e devolve 1 se forem iguais e devolve 0 se forem diferentes.

int iguais(int a, int b) {
    if ( a == b ) {
        return 1;
    } else {
        return 0;
    }
}

/// b)
///
/// Escreva uma função que recebe um número inteiro positivo e preenche um vetor contendo os seus divisores.
/// Esta função deve ainda devolver o comprimento do vetor obtido (quantidade de divisores)

int divisores(int vetor[], int a) {
    int cont = 0;
    for(int d = 1; d <= a; d++) {
        if (a % d == 0) {
            vetor[cont] = d;
            cont ++;
        }
    }
    return cont;
}

/// c)
///
/// Escreva uma função que recebe um vetor e a respetiva quantidade de elementos
/// e "devolve" a soma dos elementos pares e a soma dos elementos ímpares.

void parImpar(int vetor[], int n, int *par, int *impar) {
    
    *par = 0;
    *impar = 0;
    for(int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            *par = *par + vetor[i];
        } else {
            *impar = *impar + vetor[i];
        }
    }
    
}

int main()
{
    /// d)
    ///
    /// Escreva o código que determine se o seu número de aluno é ou não um número "verde".
    /// Um número diz-se "verde" se a soma dos seus divisores pares for igual à soma dos seus divisores ímpares.
    /// Este código deve utilizar todas as funções das alíneas anteriores.

    int vetor[100];
    int a = 1251422;
    int cont = divisores(vetor, a);
    int somaPar;
    int somaImpar;
    parImpar(vetor, cont,  &somaPar, &somaImpar);
    int verde = iguais(somaPar, somaImpar);
    if (verde == 1) {
        printf("O número %d é verde.\n", a);
    } else {
        printf("O número %d não é verde.\n", a);
    }

    getchar();
    return 0;
}