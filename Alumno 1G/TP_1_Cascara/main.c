#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numero_A;
    float numero_B;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        system("cls");

        switch(opcion)
        {
            case 1:
                printf(functionObtenerOperando);

                break;
            case 2:

                 printf(functionObtenerOperando);
                break;
            case 3:
                printf(functionSuma);
                break;

            case 4:
                printf(functionResta);
                break;

            case 5:
                printf(functionDivision);
                break;
            case 6:
                printf(functionMultiplicacion);
                break;
            case 7:
                printf(functionFactorial);
                break;

            case 8:
                printf(functionTodas);
                break;
            case 9:
                seguir = 'n';
                break;
        }


    return 0;
}
}
