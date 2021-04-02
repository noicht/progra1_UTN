/*
    Funciones para ejercicio 4.2
*/
#include <stdio.h>
#include <stdlib.h>
#include "funciones2.h"



float conversionFaC(float temp)
{
    float conversion;

    conversion = (temp - 32) / 1.8;

    return conversion;
}

float conversionCaF(float temp)
{
    float conversion;

    conversion = (temp * 1.8) + 32;

    return conversion;
}

int validarCelsius(float tempCelsius)
{


    if (tempCelsius > 0 && tempCelsius < 100)
    {
        return 0;
    }
    else
    {
        if(tempCelsius < 0)
        {
            return -1;
        }
        else
        {
            return 1;

        }
    }


    /*


    switch(tipoTemperatura)
    {
    case 'c':
        while(temp < 0 && temp > 100)
        {
            printf("Temperatura fuera de los limites establecidos, ingrese una temperatura de nuevo (Entre 0 y 100):");
            scanf("%f", &temp);
        }
        break;
    case 'f':
        while(temp < 32 && temp > 212)
        {
            printf("Temperatura fuera de los limites establecidos, ingrese una temperatura de nuevo (Entre 32 y 212):");
            scanf("%f", &temp);

        }
        break;
    }
    */

}


int validarFahrenheit(float tempFahrenheit)
{
    if (tempFahrenheit < 32)
    {
        return 1;
    }
    else
    {
        if(tempFahrenheit > 212)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}

/*
int menuTemp()
{
    system("cls");
    printf("\t\t\t----Conversor de temperatura----\n\n");
    int opcion;
    printf("---Menu de Opciones---\n\n");
    printf("1- Cargar Temperatura\n");
    printf("2- Convertir Celsius a Fahrenheit\n");
    printf("3- Convertir Fahrenheit a Celsius\n");
    printf("4- Salir\n\n\n");
    printf("---Ingrese una opcion: ");
    scanf("%d", &opcion);

    return opcion;

}
*/
