/*
ALUMNO: MARTIN CABRERA

Ejercicio 6-2:
Realizar un programa que permita el ingreso de 10 números enteros (positivos y negativos). Necesito generar un listado de los números positivos de manera creciente y negativos de manera decreciente. (Como máximo 4 for)
Ejemplo:
Listado 1 : 4-5-6-10-18-29
Listado 2 : -1,-5,-9,-12

*/


#include <stdio.h>
#include <stdlib.h>
#define LIMITE 10

void cargarVector(int vectorNumeros[]);
void ordenamientoBurbujeo(int vectorNumeros[]);
int printVectorInt(int vectorNumeros[]);

int main()
{

    int vectorNumeros[LIMITE];
    cargarVector(vectorNumeros);
    ordenamientoBurbujeo(vectorNumeros);
    printVectorInt(vectorNumeros);




    return 0;
}

void cargarVector(int vectorNumeros[])
{
    int i;
    for(i = 0; i < LIMITE; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vectorNumeros[i]);
    }
}

void ordenamientoBurbujeo(int vectorNumeros[])
{
    int i;
    int j;
    int aux;

    for(i = 0; i < LIMITE-1; i++)
    {
        for(j = i + 1; j < LIMITE; j++)
        {
            if(vectorNumeros[i] < vectorNumeros[j])
            {
                aux = vectorNumeros[i];
                vectorNumeros[i] = vectorNumeros[j];
                vectorNumeros[j] = aux;


            }


        }
    }


}

int printVectorInt(int vectorNumeros[])
{
    int retorno = 1;
    int i;

    if(vectorNumeros != NULL)
    {
        retorno = 0;
        for(i = 0; i < LIMITE; i++)
        {
            printf("%d\n", vectorNumeros[i]);

        }
    }
    return retorno;
}
