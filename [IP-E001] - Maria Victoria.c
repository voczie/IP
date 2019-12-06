#include <stdio.h>
/* Fa�a um programa que leia uma dia, um m�s e um ano e
verifique se ela � valida, considerando os dias do m�s e se o ano � bissexto;*/

/*
    T�tulo: IP-E001
    Docente: Bidu
    Discente: Maria Vict�ria Grisi Pinheiro Fabi�o de Ara�jo
    Matr�cula: 20190027173
                                                            */


int main(void)
{
    int diaVar, mesVar, anoVar, diaVerif = 0, mesVerif = 0, anoVerif = 0;
    int verifUm, verifDois, verifTres, verifDia28, verifDia29, verifDia30, verifDia31, verifMes, verifGeral;
    int rangeAno;

        printf("Verificador de Datas Validas entre os anos de 1900 a 2100\n");

        printf("Insira um dia: ");
        scanf("%d", &diaVar);

        printf("Insira um mes: ");
        scanf("%d", &mesVar);

        printf("Insira um ano: ");
        scanf("%d", &anoVar);

    rangeAno = ((anoVar>=1900)&&(anoVar<=2100));
    /* Vari�vel para verificar se o ano inserido est�
    dendo do intervalo determinado pelo problema */

        while(!(rangeAno))
            {
                printf("Ano invalido\n");

                printf("Insira um novo ano: ");
                scanf("%d", &anoVar);

                rangeAno = ((anoVar>=1900)&&(anoVar<=2100));

                if(rangeAno)
                    {
                        continue;
                    }
            }
        /* La�o de repeti��o while para garantir que o dado de
        entrada do ano seja (1900 <= anoVar <= 2100) */

    verifDia28 = ((diaVar>=1)&&(diaVar<=28));
    verifDia29 = ((diaVar>=1)&&(diaVar<=29));
    verifDia30 = ((diaVar>=1)&&(diaVar<=30));
    verifDia31 = ((diaVar>=1)&&(diaVar<=31));
    /* Vari�veis para verificar se o dia � v�lido.
    V�o ser usadas em switch case com a vari�vel mesVar,
    para verificar os limites de dia de cada m�s e validar
    a data */

    verifMes = ((mesVar>=1)&&(mesVar<=12));
    /* Vari�vel para verificar se o m�s � v�lido */

    verifUm = ((anoVar%4==0)&&(anoVar%100!=0));
    verifDois = ((anoVar%4==0)&&(anoVar%100==0));
    verifTres = ((anoVar%100==0)&&(anoVar%400==0));
    /* Vari�veis para verificar se um ano � bissexto
    ou n�o */

        if(verifUm)
            {
                anoVerif = anoVar;
            }
            else if(verifDois)
                {
                    if(verifTres)
                        {
                            anoVerif = anoVar;
                        }
                }
        /* Verificando se um ano � bissexto (OK) */


        if(verifMes)
            {
                switch(mesVar)
                    {
                        case(1):
                            {
                                if(verifDia31)
                                    {
                                        mesVerif = mesVar;
                                        diaVerif = diaVar;
                                    }
                             break;
                            }

                        case(2):
                            {
                                if(anoVerif==0)
                                    {
                                        if(verifDia28)
                                            {
                                                mesVerif = mesVar;
                                                diaVerif = diaVar;
                                            }
                                    }
                                    else
                                        {
                                            if(verifDia29)
                                                {
                                                    mesVerif = mesVar;
                                                    diaVerif = diaVar;
                                                }
                                        }
                            break;
                            }

                        case(3):
                            {
                                if(verifDia31)
                                    {
                                        mesVerif = mesVar;
                                        diaVerif = diaVar;
                                    }
                             break;
                            }

                        case(4):
                            {
                                if(verifDia30)
                                    {
                                        mesVerif = mesVar;
                                        diaVerif = diaVar;
                                    }
                            break;
                            }

                        case(5):
                            {
                                if(verifDia31)
                                    {
                                        mesVerif = mesVar;
                                        diaVerif = diaVar;
                                    }
                            break;
                            }

                        case(6):
                            {
                                if(verifDia30)
                                    {
                                        mesVerif = mesVar;
                                        diaVerif = diaVar;
                                    }
                             break;
                            }

                        case(7):
                            {
                                if(verifDia31)
                                    {
                                        mesVerif = mesVar;
                                        diaVerif = diaVar;
                                    }
                            break;
                            }

                        case(8):
                            {
                                if(verifDia31)
                                    {
                                        mesVerif = mesVar;
                                        diaVerif = diaVar;
                                    }
                            break;
                            }

                        case(9):
                            {
                                if(verifDia30)
                                    {
                                        mesVerif = mesVar;
                                        diaVerif = diaVar;
                                    }
                            break;
                            }

                        case(10):
                            {
                                if(verifDia31)
                                    {
                                        mesVerif = mesVar;
                                        diaVerif = diaVar;
                                    }
                             break;
                            }

                        case(11):
                            {
                                if(verifDia31)
                                    {
                                        mesVerif = mesVar;
                                        diaVerif = diaVar;
                                    }
                            break;
                            }

                        case(12):
                            {
                                if(verifDia31)
                                    {
                                        mesVerif = mesVar;
                                        diaVerif = diaVar;
                                    }
                            break;
                            }
                    }
            }
        /* Verificando se o dia � v�lido em certo m�s (OK)*/

    verifGeral = ((mesVerif != 0)&&(diaVerif != 0));
    /* Vari�vel para verificar se o m�s e o dia s�o poss�veis entre s� */

            if(verifGeral)
                {
                    printf("\n%d/%d/%d eh uma data valida\n", diaVar, mesVar, anoVar);
                    if(anoVerif)
                        {
                            printf("%d eh um ano bissexto\n", anoVar);
                        }
                        else
                            {
                                printf("%d nao eh um ano bissexto\n", anoVar);
                            }
                }
                else
                    {
                        printf("\n%d/%d/%d nao eh uma data valida\n", diaVar, mesVar, anoVar);
                    }
            /* Verificando se a data � poss�vel e, se sim, imprimindo as sa�das requisitadas */

return 0;
}
