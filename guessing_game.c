#include <stdio.h>

int main() {
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;

    do {
        printf("Enter a number (0-10): ");
        scanf("%d", &guess);
        guessCount ++;
    } while ( secretNumber != guess && guessCount != guessLimit);

    if (secretNumber == guess) {
        printf("You win!");
    } else {
        printf("Out of guesses");
    }
    
    getchar();
    return 0;
}