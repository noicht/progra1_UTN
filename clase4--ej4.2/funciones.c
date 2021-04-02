/*
    Funciones para ejercicio 4.2
*/
#include <stdio.h>
#include "funciones.h"

float ingresoTemp()
{
    float temp;
    printf("Ingrese el valor de la temperatura: ");
    scanf("%f", &temp);
    return temp;
}

float conversionFaC(float temp)
{
    float conversion;

    conversion = (temp * 1.8) + 32;

    return conversion;
}

float conversionCaF(float temp)
{
    float conversion;

    conversion = (temp - 32) / 1.8;

    return conversion;
}

void validarTemperatura(float temp, char tipoTemperatura)
{
    switch(tipoTemperatura)
    {
    case 'c':
        if(temp >= 0 && temp <= 100)
    }

}
