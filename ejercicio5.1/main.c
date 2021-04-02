/*
ALUMNO: MARTIN CABRERA

Ejercicio 5-1:
Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.

*/


#include <stdio.h>
#include <stdlib.h>
#define NUMERO 5

int main()
{

    setbuf(stdout, NULL);

    int listaSuma[NUMERO];
    int i;
    int suma = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Ingrese un numero en la posicion %d: ", i);
        scanf("%d", &listaSuma[i]);

        suma = suma + listaSuma[i];
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", listaSuma[i]);
    }


    printf("\n%d", suma);
    return 0;
}
