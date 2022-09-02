#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

//04-c) Faça um algoritmo que receba 03 notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.//

    int main()

{
        float nota1,nota2,nota3,media;

        printf("Informe a primeira nota:");
        scanf("%f",&nota1);
        printf("Informe a segunda nota:");
        scanf("%f",&nota2);
        printf("Insira a terceira nota:");
        scanf("%f",&nota3);
        media=((nota1+nota2+nota3)/4);
        printf("A média entre as notas que você informou é %.2f.",media);

    return 0;
}