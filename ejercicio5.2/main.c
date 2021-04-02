/******************************************************************************

Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.
Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.


*******************************************************************************/
#include <stdio.h>

/*1: par
0: impar*/
int VerificarParidad(int);
/*
1: positivos
0: cero
-1: negativo
*/
int EsPositivo(int);
/*
Llamar a la funcion PedirEntero validando que este entre -1000 y 1000
*/
void CargarNumeros(int[], int);
/* Llamar a la funcion EsPositivo*/
void ContarPositivos_Negativos(int[], int);

/*Llamar a la funcion VerificarParidad*/
int SumatoriaPares(int[], int);

/*Llamar a la funcion VerificarParidad*/
int CalcularMayorImpar(int[], int);


int main()
{
    printf("Hello World");

    return 0;
}

int SumatoriaPares(int numeros[], int cantidad)
{
    int i;
    int acumulador;
    int valor;

    acumulador = 0;

    for(i=0; i< cantidad; i++)
    {
        valor = VerificarParidad(numeros[i]);
        if(valor==1)
        {
            acumulador += numeros[i];
        }
    }

    return acumulador;
}



/*
Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.
Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.
Se deberán utilizar funciones y vectores.

*/


#include <stdio.h>
#include <stdlib.h>
#define NUMERO 10

void cargarVector(int[], int);
int validarVector(int );




int main()
{


    printf("Hello world!\n");
    return 0;
}

void cargarVector(int vectorNumeros[], int cantidad)
{
    int i;
    for(i = 0; i < cantidad; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vectorNumeros[i]);
    }
}
