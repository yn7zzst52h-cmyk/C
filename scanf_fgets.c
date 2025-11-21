#include <stdio.h>

int main() {
    int age;
    double height;
    char firstName[40];  // esta funciona diferente. se nao for logo escrever o nome que vai estar associado (ex: variables.c), tenho de especificar qual é o limite de caracteres que quero que a variavel leve. 
    char fullName[70];
    // ATENÇÃO: ao fazer scanf tambem tem diferenças, consultar em baixo.
    char grade; //se for so um caracter funciona normalmente
    
    printf("Enter your age: ");
    scanf("%d", &age); // vai guardar o numero inteiro escrito pelo usuario na variavel age
    // colcamos o & antes de age para o computador saber que tem de guardar o valor na variaável.
    
    printf("Enter your height: ");
    scanf("%lf", &height); // vai guardar o numero decimal escrito pelo usuario na variavel height. ATENÇÃO: apesar de no printf declaramos uma float ou double com %f, no scanf tem de ser %lf!!!!!!!!!!
    
    printf("Enter your first name: ");
    scanf("%s", firstName); // aqui tambem funciona diferente poiis apenas tenho de colocar o nome da variavel e nao tenho de meter &
    
    getchar(); // o scanf guarda apenas o que lhe interessa ou seja, em cima guardou o nome e depoois deixou ficar o enter. depois o fgets vai ler o que tiver ate haver um enter, mas como houve o enter do scanf que nao foi guardado e ficou a sobrar, ele vai ler esse enter e saltar a frente logo nem sequer vai dar hipotese de escrever o nome que queremos associar pois ele guardou so o enter. para resolver isso escrevemos este getchar() que acaba por limpar os enters que sobraram
    // PROBLEMA: ao fazer como fiz em cima, apenas vai guardar os carcteres ate ao espaço, ou seja se escrever o meu nome inteiro apenas vai guardar o primeiro nome
    // para resolver isso, quando queremos guardar uma string com mais de 1 palavra, fazemos assim:
    printf("Enter your full name: ");
    fgets(fullName, 70, stdin); //com esta solução ele vai ler e guardar os nomes todos na variavel fullName com um max de 70 caracteres. stdin é para dizer ao programa de onde vai ler, neste caso vai ler do teclado
    //o unico problema é que ele vai guardar o enter ou seja la em baixo quando for dar print em tudo ele vai fazer enter logo a seguir ao nome e nao é o pretendido. por enquanto ainda nao aprendi a solução por isso tenho de ter cuidado com isso
    
    printf("Enter your grade: ");
    scanf(" %c", &grade); // ATENÇÃO: aqui no c ele vai ler o caracter seguinte, ate os espaços, por isso dá erro. para nao haver esses problemas damos um espaço antes tal como fiz para ele descartar qualquer tipo de espaços que tenha antes do caracter digitado

    printf("Hello %s.\nYour full name is %s.You are %d years old and your height is %.2f.\nYour grade is %c.", firstName, fullName, age, height, grade);

    getchar();
    return 0;
}