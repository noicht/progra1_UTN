/*
ALUMNO: MARTIN CABRERA

Ejercicio 6-1:
Disponemos de dos variables numéricas (a y b). Realizar un algoritmo que permita el intercambio de valores de dichas variables.


*/



#include <stdio.h>
#include <stdlib.h>

void intercambio(int var1, int var2);


int main()
{
    intercambio(1,2);
    return 0;
}

void intercambio(int var1, int var2)
{
    printf("Valores a intercambiar: %d y %d", var1,var2);
    int aux;

    aux = var2;
    var2 = var1;

    printf("\n\nValores intercambiados: %d %d", aux, var2);

}
