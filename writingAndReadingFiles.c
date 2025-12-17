#include <stdio.h>

int main() {

    FILE * fpointer = fopen ("employees.txt", "w");     //fpointer foi o nome que dei a um ponteiro  que criei que guarda o endereço de uma estrutura FILE, que representa o ficheiro employees.txt aberto/criado pelo sistema operativo.

    //NOTA: NESTE CASO CRIEI UM FICHEIRO TXT MAS NAO TEM DE SER OBRUGATORIAMENTE, PODE SER UM FICHEIRO CSS POR EXEMPLO
    
    // poderia escrever fazer assim:
    // FILE * fpointer;         (serve para criar o pointer)
    // fpointer = fopen ("employees.txt", "w");     (atribuir valor ao pointer - memory address)


    // o w é o modo de abertura e existem varios:
    // r (read) - vai ler o ficheiro (tal como se fosse copiar os dados do ficheiro), mas nao vai escrever nada no ficheiro nem fazer modificações. cursor começa no incio para comecar a ler desde o inicio
    // w (write) - serve para escrever num ficheiro (nao permite ler os dados tal como em read). caso esse ficheiro ja exista, ele vai apagar o conteudo para ficar em branco e poder escrver e caso nao exista ele vai criar o ficheiro. cursor começa no incio para começar a escrever uma vez que a pagina vai estar em branco
    // a (append - acrescentar) - parecido com o write, ou seja caso o ficheiro nao exista ele vai criar mas se o ficheiro ja existir ele nao vai apagar nada. serve para adicionar coisas ao ficheiro, logo o ponteiro começa no final
    // r+ (read + write) - o ficheuro tem de existir e permite ler e escrever. nao vai apagar nada do que ja existir e o cursor comeca no inicio. ou seja ele vai ler o que esta escrito no ficheiro mas o cursor fica no incio logo se escrever alguma coisa vai sobrescrever por cima do que ja estava. poe exemplo se o ficheiro tiver escrito ABCD ele vai ler e deixar o cursor no inicio e se depois eu escrever X vai ficar XBCD pq sobrescreveu
    // w+ (write + read) - funciona exatamente igual ao write mas a diferença é que ele permite ler caso haja indicação para isso
    // a+ (append + read) - funciona exatamente igual ao append mas a diferença é que ele permite ler caso haja indicação para isso

    fprintf (fpointer, "Rodrigo, Salesman\nRoger, receptionist\nSimba, dog");       // como em cima pusemos o w de write, aqui estamos a escrever no documento. antes escrevemos fpointer pq é o pointer que indca o ficheiro para assim o computador saber que queremos escrver naquele ficheiro

    fclose(fpointer);      //fecha o ficheiro que estava aberto atraves do fpointer e é importante fazermos para libertarmos alguns recursos donsistema operativo que estao a ser gastos com o ficheiro e guardamos todas as alterações que foram feitas no ficheiro
    
    // se por acaso agora quiser acrescentar mais coisas e trocar para modo append, p.ex., tenho de fechar o ficheiro (fiz na linha anterior) e voltar a abri lo mas desta vez no modo append:

    fpointer = fopen("employees.txt", "a");
    fprintf (fpointer, "\nMaria, Psicologist");

    fclose(fpointer);

    // em cima temos como escrever no ficheiro e agora vamos ver como fazemos a parte de ler os ficheiros

    fpointer = fopen("employees.txt", "r");     // voltamos a abrir o ficheiro do fpointer mas desta vez em modo read
    char line [300];    //criamos uma variavel onde vamos guardar o que for lido na primeira linha e tem um armazenamento de no maximo 300 caracteres

    fgets(line, 300, fpointer);     // a funcao fgets vai ler a funcao ate chegar aos 300 caracteres ou ate encontrar um \n logo basicamnete vai ler a primeira linha do ficheiro a que fpointer se refere e guardar dentro da variavel line
    printf("%s", line);

    fclose(fpointer);
    getchar();
    return 0;
}