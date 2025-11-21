#include <stdio.h>

int main() {

    char grade;
    printf("Enter your grade (capital letter): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A' : // caso grade seja A:
            printf("You did great!\n");
            break; // aqui damos break porque em caso de ser 'A' o programa pode avançar ou seja nao precisa de verificart os outros todos. ou seja, caso seja A, ele da break na verificação do switch e avança para o que vem a seguir ao switch. caso nao de break, mesmo que case 'A' seja verdadeiro, ele vai continuar a verificar o resto. se quiser que ele continue a verificar o resto das possibilidades na mesma é so nao dar break.
        case 'B' : 
            printf("You did well.\n");
            break;
        case 'C' : 
            printf("You did poorly.\n");
            break;
        case 'D' : 
            printf("You did very bad.\n");
            break;
        case 'F' : 
            printf("You failed.\n");
            break;
        default : // default é o que se usa para escrevermos a instrução caso nenhum dos cases seja verdadeiro
            printf("Invalid grade.\n");

    } // poderimoa fazer isto com os if e else if mas ia ser mais trabalhoso, assim fica muito mais rapido e facil de fazer
    getchar();
    return 0;
}