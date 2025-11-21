#include <stdio.h>

int main() {
    char color[20];
    char pluralNoun[20];
    char celebrityFname[20];
    char celebrityLname[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter the first and last name of a celebrity: ");
    scanf("%s%s", celebrityFname, celebrityLname);

    printf("Roses are %s.\n", color);
    printf("%s are blue.\n", pluralNoun);
    printf("I love %s %s.\n", celebrityFname, celebrityLname);

    getchar();
    return 0;
}