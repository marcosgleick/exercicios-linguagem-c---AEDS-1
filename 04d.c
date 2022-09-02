#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

//04-d) Leia uma temperatura dada na escala Celsius(C) e imprima o equivalente em Fahrenheit(F).//

    int main()

{
        float tempc, tempf;

        printf("Informe uma temperatura em escala Celsius (C):");
        scanf("%f",&tempc);
        tempf=(9/5)*(tempc+32);
        printf("A temperatura de %.2f em Celsius (C) é equivalente a %.2f em Fahrenheit (F)",tempc,tempf);

    return 0;
}