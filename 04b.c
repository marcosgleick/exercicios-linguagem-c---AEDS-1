#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
// 04-b)Calcular média aritmética de quatro números inteiros dados//

    int main()

{
    
        float n1,n2,n3,n4,media;

        printf("Insira um número:");
        scanf("%f",&n1);
        printf("Insira outro número:");
        scanf("%f",&n2);
        printf("Insira mais um número:");
        scanf("%f",&n3);
        printf("Insira o último número:");
        scanf("%f",&n4);

        media=(n1+n2+n3+n4)/4;


        printf("A média entre os números que você inseriu é %.2f.",media);





    return 0;
}