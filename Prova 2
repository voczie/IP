/* 1) Faça um programa em C que preencha e exiba uma string (um array de caracteres)
com 26 caracteres contendo todas as letras em ordem reversa (“ZYX...CBA”).
Posteriormente, a string deve ser exibida na ordem correta (“ABC...XYZ”). Dica: a letra ‘A’
maiúscula possui valor convertido de char para inteiro igual a 65. */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define TAM 27

char *preencherString(char *string){
    int i, letra;
    /*Fiz um inteiro (letra) que contém o número do caractere A na tabela ASCII e que fica subindo até chegar em Z*/
    /*O loop preenche a string desde o índice 0 até o índice TAM - 1*/
    for(i = 0, letra = 65; i < TAM; i++, letra++){
        string[i] = letra;
    }
    /*No índice de número i - 1 (Ou seja, 26), coloca-se o delimitador, para fechar a string*/
    string[i-1] = '\0';

return string;
}

void imprimirContrario(char *string){
    int i;
    /*O valor inicial de i pega o tamanho da string e diminui em um, para que não seja impresso o delimitador, e vai decrescendo, imprimindo
    a string ao contrário*/
    for(i = strlen(string) - 1; i>=0; i--){
        printf("%c", string[i]);
    }
}

void imprimir(char *string){
    int i;
    /*Loop normal que imprime, caractere por caractere, a string*/
    for(i = 0; string[i] != '\0'; i++){
        printf("%c", string[i]);
    }
}

int main(){
    /*Declaração da string com macro de tamanho 26*/
    char strVar[TAM];

        /*Função que preenche a string de A até Z*/
        preencherString(strVar);

        /* Função que imprime a string ao contrário*/
        imprimirContrario(strVar);

        /*New Line para deixar mais visível os resultados*/
        putchar('\n');

        /*Função para imprimir a string na ordem correta*/
        imprimir(strVar);

return 0;
}




/* 2) Faça um programa que declare uma matriz de inteiros 3x4 (e.g. int array[3][4]) e
depois solicite ao usuário todos os seus elementos; faça então o programa exibir a soma
de todos os elementos presentes nesta matriz cujo conteúdo for um número ímpar. */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define ROW 3
#define COLUMN 4

int main(){
    int matVar[ROW][COLUMN];
    int i, j;
    int sumTotal = 0;

        for(i=0; i<ROW; i++){
            for(j=0; j<COLUMN; j++){
                printf("Insira o elemento matriz[%d][%d]\n", i+1, j+1);
                scanf("%d", &matVar[i][j]);
                if((matVar[i][j] % 2)!= 0){
                    sumTotal += matVar[i][j];
                }
            }
        }

        printf("\nSoma total: %d\n", sumTotal);



return 0;
}




/* 3) Implemente as funções leiNumerosComplexos(), exibeNumerosComplexos()
e somaNumerosComplexos() para completar o código abaixo:

#include <stdio.h>
#define QUANTIDADE_NUM 5
typedef struct{
float parteReal;
float parteImaginaria;
} tNumeroComplexo;
int main() {
tNumeroComplexo numeros[QUANTIDADE_NUM];
tNumeroComplexo aux;
leiaNumerosComplexos(numeros, QUANTIDADE_NUM); // Função que lê de teclado
// um array de numeros complexos
exibeNumerosComplexos(numeros); // Função que imprime os dados
// de todos os numeros complexos inseridos
somaNumerosComplexos(numeros[0], numeros[1], &aux); //Função que calcula
// soma de dois numeros complexos e os
// armazena num passado no terceiro parametro (aux)
return 0;
}
*/

#include <stdio.h>

#define QUANTIDADE_NUM 5

typedef struct{
    float parteReal;
    float parteImaginaria;
} tNumeroComplexo;

void leiaNumerosComplexos(tNumeroComplexo *ptr, int qnt){
    int i;
    /*Loop para leitura de cada componente do array numeros, lendo a parte real e imaginária do número complexo*/
    for(i=0; i < qnt; i++){
        printf("Insira a parte real do numero[%d]: ", i+1);
        scanf("%f", &ptr[i].parteReal);
        printf("Insira a parte imaginaria do numero[%d]: ", i+1);
        scanf("%f", &ptr[i].parteImaginaria);
    }
}

void exibeNumerosComplexos(tNumeroComplexo *ptr){
    int i;
    /*Loop para a exibição de cada variável do array numeros, dizendo sua parte real e imaginária*/
    for(i=0; i < QUANTIDADE_NUM; i++){
        printf("Numero[%d] = %.2f + %.2fi\n", i, ptr[i].parteReal, ptr[i].parteImaginaria);
    }
}

void somaNumerosComplexos(tNumeroComplexo ptrUm, tNumeroComplexo ptrDois, tNumeroComplexo *ptrSoma){
    /*Aqui eu somo membros iguais de duas variáveis do array numeros e insiro no membro equivalente da variável aux*/
    ptrSoma->parteReal = ptrUm.parteReal + ptrDois.parteReal;
    ptrSoma->parteImaginaria = ptrUm.parteImaginaria + ptrDois.parteImaginaria;
}

int main(){
    tNumeroComplexo numeros[QUANTIDADE_NUM];
    tNumeroComplexo aux;

    leiaNumerosComplexos(numeros, QUANTIDADE_NUM);
    /*Função que lê de teclado um array de números complexos*/

    exibeNumerosComplexos(numeros);
    /*Função que imprime os dados de todos os números complexos inseridos*/
    
    somaNumerosComplexos(numeros[0], numeros[1], &aux);
    /* Função que calcula soma de dois números complexos e os armazena num passado no terceiro parâmetro (aux) */
    
    /*Impressão apenas para mostrar os resultados, não foi pedido na questão*/
    printf("Soma: %.2f + %.2fi\n", aux.parteReal, aux.parteImaginaria);


return 0;
}




/* 4) Faça um programa em C que defina um tipo/estrutura para um aluno em uma
instituição de ensino – tal estrutura deverá conter matrícula (int) e media final (float).
Declare um array com 5 elementos desta estrutura e faça o necessário para que o
usuário realize o preenchimento desse array. Uma vez lidos os dados, divida este array
em 2 novos, armazenando alunos aprovados e reprovados separadamente,
considerando a media mínima para aprovação como 7.0. */

#include <stdio.h>

#define QUANTIDADE_NUM 5

/*Definição do tipo struct com tipo tAluno, nele está contido um inteiro que representa matrícula, no outro um float da Média final*/
typedef struct aluno{
    int Matricula;
    float MediaFinal;
} tAluno;

/*Declarando uma função que preenche um array com os alunos que foram aprovados. Devolve um inteiro que é o tamanho do array (a quantidade de alunos
aprovados)*/
/* A função recebe como parâmetros o array com todos os alunos (*ptrOrig), o array destinatário (*ptrDest) e a quantidade de elementos no
primeiro array*/
int preencherAprovados(tAluno *ptrOrig, tAluno *ptrDest, int qnt){
    int i, j;
    for(i=0, j = 0; i < qnt; i++){
            /*Dentro do ciclo for, verificamos se a média foi acima ou igual a 7.0, se for, os dados são registrados no array destinatário e aumenta
            o inteiro j, que vai retornar quantos elementos tem o array destinatário*/
        if(ptrOrig[i].MediaFinal >= 7.0){
           ptrDest[j].Matricula = ptrOrig[i].Matricula;
           ptrDest[j].MediaFinal = ptrOrig[i].MediaFinal;
           j++;
        }
    }
return j;
}

/*Declarando uma função que preenche um array com os alunos que foram reprovados. Devolve um inteiro que é o tamanho do array (a quantidade de alunos
reprovados)*/
/* A função recebe como parâmetros o array com todos os alunos (*ptrOrig), o array destinatário (*ptrDest) e a quantidade de elementos no
primeiro array*/
int preencherReprovados(tAluno *ptrOrig, tAluno *ptrDest, int qnt){
    int i, j;
    for(i=0, j = 0; i < qnt; i++){
            /*Dentro do ciclo for, verificamos se a média foi menor que 7.0, se for, os dados são registrados no array destinatário e aumenta
            o inteiro j, que vai retornar quantos elementos tem o array destinatário*/
        if(ptrOrig[i].MediaFinal < 7.0){
           ptrDest[j].Matricula = ptrOrig[i].Matricula;
           ptrDest[j].MediaFinal = ptrOrig[i].MediaFinal;
           j++;
        }
    }
return j;
}

/*Declarando uma função que lê do usuário a matrícula do aluno e a média final, armazenando em um array (*ptr). Devolve nada*/
/*Recebe como parâmetros o array em que vai ser registrado os alunos (suas matrículas e médias finais) e a quantidade de elementos nesse array*/
void preencherArrays(tAluno *ptr, int qnt){
    int i;
        for(i=0; i < qnt; i++){
            printf("Insira a matricula do Aluno[%d]: ", i+1);
            scanf("%d", &ptr[i].Matricula);
            printf("Insira a media final do Aluno[%d]: ", i+1);
            scanf("%f", &ptr[i].MediaFinal);
        }
}

int main(){
    /*Declarando três arrays com a mesmo tamanho. Um array (arrAlunos) que tem registrado todos os alunos e suas matrículas e médias finais.
    Outro array (arrAprovados) que irá receber os alunos com médias acima ou igual a 7.0. E outro array (arrReprovados) que irá receber os
    alunos com médias abaixo de 7.0*/
    tAluno arrAlunos[QUANTIDADE_NUM];
    tAluno arrAprovados[QUANTIDADE_NUM];
    tAluno arrReprovados[QUANTIDADE_NUM];

    /*Declarando inteiros que irão receber os retornos das funções preencherAprovados(qntAprovados) e preencherReprovados(qntReprovados), para poder
    utilizá-los na hora de imprimir os arrays arrAprovados e arrReprovados*/
    int qntAprovados, qntReprovados;
    /*Declarando int i que auxilia nos loops*/
    int i;

        /*Preenchimento do arrAlunos*/
        preencherArrays(arrAlunos, QUANTIDADE_NUM);
        /*Preenchimento do arrReprovados e passando para o int qntReprovados a quantidade de alunos reprovados*/
        qntReprovados = preencherReprovados(arrAlunos, arrReprovados, QUANTIDADE_NUM);
         /*Preenchimento do arrAprovados e passando para o int qntAprovados a quantidade de alunos aprovados*/
        qntAprovados = preencherAprovados(arrAlunos, arrAprovados, QUANTIDADE_NUM);

        /*Impressão dos alunos aprovados*/
        printf("ALUNOS APROVADOS:\n");
        for(i=0; i < qntAprovados; i++){
            printf("%d com media final %.2f\n", arrAprovados[i].Matricula, arrAprovados[i].MediaFinal);
        }
        
        putchar('\n');
        
        /*Impressão dos alunos reprovados*/
        printf("ALUNOS REPROVADOS:\n");
        for(i=0; i < qntReprovados; i++){
            printf("%d com media final %.2f\n", arrReprovados[i].Matricula, arrReprovados[i].MediaFinal);
        }


return 0;
}




/* 5) Implemente um programa em C que tenha uma função que receba um array de tipo
igual ao definido na questão 3), além da quantidade de elementos que ele contém (int) e
uma string com o nome de um arquivo; a função deve armazenar todo conteúdo do
array em um arquivo de texto com o nome definido pela string passada por parâmetro */

#include <stdio.h>

#define QUANTIDADE_NUM 5

typedef struct{
    float parteReal;
    float parteImaginaria;
} tNumeroComplexo;

void armazenarEmArquivo(tNumeroComplexo *array, int qnt, char *arquivo){
    FILE *fp;
    int i;

    fp = fopen(arquivo, "w");

    for(i=0; i<qnt; i++){
        fprintf(fp, "%f %f ", array[i].parteReal, array[i].parteImaginaria);
    }

    fclose(fp);
}

void leiaNumerosComplexos(tNumeroComplexo *ptr, int qnt){
    int i;
    /*Loop para leitura de cada componente do array numeros, lendo a parte real e imaginária do número complexo*/
    for(i=0; i < qnt; i++){
        printf("Insira a parte real do numero[%d]: ", i+1);
        scanf("%f", &ptr[i].parteReal);
        printf("Insira a parte imaginaria do numero[%d]: ", i+1);
        scanf("%f", &ptr[i].parteImaginaria);
    }
}

int main(){
    tNumeroComplexo arrVar[QUANTIDADE_NUM];
    char arquivo[] = "quintaquestao.txt";
    FILE *fp;
    int i;
    tNumeroComplexo arrMostrar[QUANTIDADE_NUM];

    leiaNumerosComplexos(arrVar, QUANTIDADE_NUM);
    armazenarEmArquivo(arrVar, QUANTIDADE_NUM, arquivo);

    fp = fopen(arquivo, "r");

    if(fp == NULL){
        printf("Erro ao abrir o arquivo %s\n", fp);
        return 1;
    }

    do{
        for(i=0; i<QUANTIDADE_NUM; i++){
            fscanf(fp, "%f %f ", &arrMostrar[i].parteReal, &arrMostrar[i].parteImaginaria);
            printf("Numero Complexo [%d]: %.2f + %.2fi\n", i+1, arrMostrar[i].parteReal, arrMostrar[i].parteImaginaria);
        }
    }while(!feof(fp));



return 0;
}

