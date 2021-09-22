/* 8) Solicite ao usuário 10 valores inteiros e armazene estes em um array. Após o programa
deve exibir qual o maior elemento contido no array. */

#include <stdio.h>

int main()
{

    int array[10];
    int maior = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Esse programa ira apresentar o maior numero dos 10 que o usuario digitar =)\n\n");
        printf("--------------------------------------------------\n");
        printf("Digite um numero:");
        scanf(" %d", &array[i]);
    }
    for (int i2 = 0; i2 < 10; i2++)
    {
        if (array[i2] > maior)
        {
            maior = array[i2];
        }
    }
    printf("O maior numero e:%d", maior);

    return 0;
}