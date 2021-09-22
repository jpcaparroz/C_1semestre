/* Esse programa irá calcular a média de um aluno utilizando o método da UAM (Universidade Anehmbi Morumbi) = N1 40% + N2 60%*/
#include <stdio.h>

int main()
{
    float nota1, nota2;
    printf("Digite a nota da N1: ");
    scanf("%f", &nota1);

    printf("Digite a nota da N2: ");
    scanf("%f", &nota2);

    float media = ((nota1 * 0.4) + (nota2 * 0.6));
    printf("A media da nota e: %.2f", media);

    return 0;
}