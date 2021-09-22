/* Programa em C que calcula a quantidade de notas e moedas de um valor digitado */

#include <stdio.h>

int main()
{

    int nota, moeda, aux, nota100, nota50, nota20, nota10, nota5, nota2, moeda100, moeda50, moeda25, moeda10, moeda5, moeda1;
    double valorN, valorM;

    scanf(" %lf", &valorN);

    nota = (int)valorN;
    nota100 = nota / 100;
    aux = nota % 100;
    nota50 = aux / 50;
    aux = aux % 50;
    nota20 = aux / 20;
    aux = aux % 20;
    nota10 = aux / 10;
    aux = aux % 10;
    nota5 = aux / 5;
    aux = aux % 5;
    nota2 = aux / 2;
    aux = aux % 2;

    valorM = valorN * 100;
    moeda = (int)valorM;

    moeda100 = aux;
    aux = moeda % 100;
    moeda50 = aux / 50;
    aux = aux % 50;
    moeda25 = aux / 25;
    aux = aux % 25;
    moeda10 = aux / 10;
    aux = aux % 10;
    moeda5 = aux / 5;
    aux = aux % 5;
    moeda1 = aux / 1;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);

    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", moeda100);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda1);

    return 0;
}