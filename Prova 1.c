/* 1) Faça um programa em C que leia do usuário os dados para preencher dois vetores (arrays) de
inteiros: Vetor_A (5 elementos) e Vetor_B (8 elementos); depois de ler os dados, imprimir todos os
elementos comuns aos dois vetores */

#include <stdio.h>

// Definindo o limite dos arrays em Macros
#define ITEMS_ONE 5
#define ITEMS_TWO 8


int main(){
    //Definindo os arrays arrOne com limite de 5 inteiros e o array arrTwo com limite de 8 inteiros
    int arrOne[ITEMS_ONE], arrTwo[ITEMS_TWO];
    //Definindo
    int i, j;

    //Ciclo for para ler os dois arrays, lendo alternando entre arrOne e arrTwo
        for(i = 0; i < ITEMS_TWO; i++){
            if(i < ITEMS_ONE){
                printf("Insert interger for the Array A[%d]: ", i);
                scanf("%d", &arrOne[i]);
            }
            printf("Insert interger for the Array B[%d]: ", i);
            scanf("%d", &arrTwo[i]);
        }

    //Cadeia de ciclo for para verificar se os dois elementos das duas arrays são iguais, se for, imprime no console
        printf("Commom intergers between Array A and Array B: \n");
        for(i = 0; i < ITEMS_ONE; i++){
            for(j = 0; j < ITEMS_TWO; j++){
                if(arrTwo[j] == arrOne[i]){
                    printf("%d\n", arrOne[i]);
                    break;
                }
            }
        }

return 0;
}




/* 2) Faça um programa em C que peça um valor inteiro inicial ao usuário, o valor inteiro de uma
razão e calcule os termos de uma P.G (Progressão Geométrica), armazenando os elementos da P.G.
calculados em um vetor (array) de tamanho 10 (o primeiro elemento do vetor deve ser o número
inicial definido pelo usuário). Posteriormente o programa deve exibir os valores em ordem
decrescente na tela */

#include <stdio.h>

//Definindo uma Macro com nome de LIMIT para delimitar o tamanho da Array
#define LIMIT 10

int main(){
    //Declarando dois inteiros, initVar para o valor inicial e ratioVar para a razão da P.G.
    int initVar, ratioVar;
    //Declarando a Array com a macro LIMIT
    int arrFinal[LIMIT];
    //Declarando variável auxiliar do ciclo for
    int i;
        //Leitura do primeiro valor da array, armazenando em initVar
        printf("Insert the starting point of the array: ");
        printf("\nArray[0]: ");
        scanf("%d", &initVar);

        //Passando valor de initVar para a primeira posição da array
        arrFinal[0] = initVar;

        //Leitura da razão da P.G.
        printf("Insert the ratio of the geometric progression: ");
        scanf("%d", &ratioVar);

        //Ciclo for para o cálculo e armazenamento de cada posição da array quanto à P.G.
        for(i = 1; i < LIMIT; i++){
            arrFinal[i] = (arrFinal[i - 1] * ratioVar);
        }

        //Impressão em ordem decrescente da array
        for(i = LIMIT - 1; i >= 0; i--){
            printf("Array[%d] = %d\n", i, arrFinal[i]);
        }

return 0;
}




/* 3) Faça um programa em C que contenha uma função que receba uma varíavel inteira (int) como
parâmetro e uma variável caractere (char). A função deverá exibir na tela uma string com a letra
inserida como segundo parâmetro caractere sendo repetida a quantidade de vezes definida pelo
primeiro parâmetro inteiro. O programa deverá invocar a função (na função principal - main) com
valores inseridos pelo usuário. Exemplo de entrada: 5, ‘A’ / Saída “AAAAA”. */

#include <stdio.h>

//Função para repetir letra C um número X de vezes
void repeatLetter(int numberRepeat, char charRepeat){
    //Declarando auxiliar para ciclo for
    int i;

    //Ciclo for que irá printar letra C um número X de vezes
        for(i = 0; i < numberRepeat; i++){
            putchar(charRepeat);
        }
}

int main(){
    //Declarando um inteiro e um caractere que irão servir de parâmetros para a função repeatLetter
    int quantRepeat;
    char charVar;

    //Lendo as duas variáveis anteriormente declaradas
    printf("Insert the number of times the character will be repeated: ");
    scanf("%d", &quantRepeat);
    printf("Insert the character that will be repeated: ");
    scanf(" %c", &charVar);

    //Chamando a função
    repeatLetter(quantRepeat, charVar);

return 0;
}




/* 4) Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, que trocava
cada letra pelo equivalente em algumas posições à esquerda no alfabeto. Faça um programa em C
que implemente a Cifra de César trocando cada letra do alfabeto por aquela equivalente a 2 (duas)
posições à esquerda no alfabeto. Por exemplo, 'C' vira 'A', 'T' vira 'R', etc. (no começo do alfabeto 
volta-se para o fim, isto é 'A' vira 'Y'). Exemplo de entrada: VQREQFGT / Saída: TOPCODER. 
Bônus: fazer o programa usando uma função que receba dois parâmetros: um inteiro com a
quantidade de posições a esquerda para trocar a letra e uma string a decodificar. */

/#include <stdio.h>
#include <string.h>

//Definindo limite da string com uma Macro de valor 51
#define LIMIT 51

int main(){
    //Declarando a string com macro LIMIT
    char strCipher[LIMIT];
    //Declarando valor que irá pegar o tamanho da string
    int strCipherLen;
    //Declarando variável que irá deslocar as casas do alfabeto
    int cipherRatio = 2;
    //Declarando variável auxiliar ao ciclo for
    int i;

    //Lendo a string do usuário
    printf("Insert the string to be deciphered: ");
    fgets(strCipher, LIMIT, stdin);

    //Armazenando o tamanho da string em strCipherLen
    strCipherLen = strlen(strCipher);

    //Declarando uma string que irá armazenar o código decifrado
    char strDecipher[strCipherLen + 1];

    //Ciclo for para a decifração e armazenamento do código
    for(i = 0; i < strCipherLen; i++){

        //Condição que verifica se tal índice na string é 'A' ou 'B' e converte em 'Y' ou 'Z', respectivamente
        if(strCipher[i] == 65 || strCipher[i] == 66){
            strDecipher[i] = strCipher[i] + 24;
        }
        //Condição que verifica se tal índice na string é 'a' ou 'b' em 'y' ou 'z', respectivamente
        else if(strCipher[i] == 97 || strCipher[i] == 98){
            strDecipher[i] = strCipher[i] + 24;
        }
        //Se não atender a nenhuma condição, ele vai apenas trocar o caractere com o que vem 2 número antes na tabela ASCII
        else{
            strDecipher[i] = (strCipher[i] - cipherRatio);
        }
    }

    //Imprime a string resultante
    printf("%s", strDecipher);

return 0;
}




/* 5) Faça um programa em C que contenha uma função que receba o endereço de duas variáveis e que
altere os valores de forma que a primeira variável recebida como parâmetro passe a ter duas vezes o
valor da segunda variável, enquanto a segunda variável terá o valor da primeira variável ao
quadrado. O programa deverá invocar a função (na função principal - main) com valores inseridos
pelo usuário. Exemplo: se o usuário atribuir às duas variáveis os valores 2 e 4, estas deverão possuir
os valores 8 e 4 quando forem alteradas pela função implementada. */

#include <stdio.h>
#include <math.h>

/*Nome da função: first will be double the second, the second will be square of the first.
  Os parâmetros da função são os endereços de varOne e varTwo na main*/
void firstDoubleSecondSquare(double* firstVar, double* secondVar){
    //Definindo um double auxiliar para segurar o valor futuro da primeira variável, que é o valor da segunda vezes dois
    double aux;
    aux = (*secondVar * 2);
    //Alterando o valor da segunda com o valor da primeira ao quadrado
    *secondVar = pow(*firstVar, 2);
    //Alterando o valor da primeira através do auxiliar
    *firstVar = aux;
}

int main(){
    //Definindo as variáveis que vão dar o endereço como parâmetro pra função firstDoubleSecondSquare
    double varOne, varTwo;

        //Leitura das duas variáveis
        printf("Insert a double for the first variable: ");
        scanf("%lf", &varOne);
        printf("Insert a double for the second variable: ");
        scanf("%lf", &varTwo);

        //Chamando a função para alterar os valores através de ponteiros
        firstDoubleSecondSquare(&varOne, &varTwo);

        //Impressão dos resultados no console
        printf("First Variable: %.1lf\n", varOne);
        printf("Second Variable: %.1lf\n", varTwo);

return 0;
}
