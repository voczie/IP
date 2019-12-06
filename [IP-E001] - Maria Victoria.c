#include <stdio.h>
/* Faça um programa que leia uma dia, um mês e um ano e
verifique se ela é valida, considerando os dias do mês e se o ano é bissexto;*/

/*
    Título: IP-E001
    Docente: Bidu
    Discente: Maria Victória Grisi Pinheiro Fabião de Araújo
    Matrícula: 20190027173
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
    /* Variável para verificar se o ano inserido está
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
        /* Laço de repetição while para garantir que o dado de
        entrada do ano seja (1900 <= anoVar <= 2100) */

    verifDia28 = ((diaVar>=1)&&(diaVar<=28));
    verifDia29 = ((diaVar>=1)&&(diaVar<=29));
    verifDia30 = ((diaVar>=1)&&(diaVar<=30));
    verifDia31 = ((diaVar>=1)&&(diaVar<=31));
    /* Variáveis para verificar se o dia é válido.
    Vão ser usadas em switch case com a variável mesVar,
    para verificar os limites de dia de cada mês e validar
    a data */

    verifMes = ((mesVar>=1)&&(mesVar<=12));
    /* Variável para verificar se o mês é válido */

    verifUm = ((anoVar%4==0)&&(anoVar%100!=0));
    verifDois = ((anoVar%4==0)&&(anoVar%100==0));
    verifTres = ((anoVar%100==0)&&(anoVar%400==0));
    /* Variáveis para verificar se um ano é bissexto
    ou não */

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
        /* Verificando se um ano é bissexto (OK) */


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
                                if(verifDia30)
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
        /* Verificando se o dia é válido em certo mês (OK)*/

    verifGeral = ((mesVerif != 0)&&(diaVerif != 0));
    /* Variável para verificar se o mês e o dia são possíveis entre sí */

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
            /* Verificando se a data é possível e, se sim, imprimindo as saídas requisitadas */

return 0;
}
