#include <stdio.h>
#include <stdlib.h>
#include "funciones2.h"



int main()
{

    setbuf(stdout, NULL);
    int respuesta;
    float temp;
    char tipoTemperatura;

    do
    {
        system("cls");
        printf("\t\t\t----Conversor de temperatura----\n\n");
        printf("---Menu de Opciones---\n\n");
        printf("1- Cargar Temperatura\n");
        printf("2- Convertir Celsius a Fahrenheit\n");
        printf("3- Convertir Fahrenheit a Celsius\n");
        printf("4- Salir\n\n\n");
        printf("---Ingrese una opcion: ");
        scanf("%d", &respuesta);



        switch(respuesta)
        {
        case 1:
            printf("---Elija escala de temperatura a utilizar: ");
            fflush(stdin);
            scanf("%c", &tipoTemperatura);


            if(tipoTemperatura == 'c')
            {

                printf("Ingrese el valor de la temperatura (entre 0 y 100): ");
                scanf("%f", &temp);
                while (validarCelsius(temp) == 1 || validarCelsius(temp) == -1)
                {
                    printf("\nERROR: Ingrese el valor de la temperatura (entre 0 y 100): ");
                    scanf("%f", &temp);


                }
            }
            else
            {
                if(tipoTemperatura == 'f')
                {
                    printf("Ingrese el valor de la temperatura (entre 32 y 212): ");
                    scanf("%f", &temp);
                    // validarTemperatura(temp, tipoTemperatura);

                }
                else
                {
                    printf("El tipo de temperatura ingresado no se encuentra contemplado\n");
                    system("pause");

                }

            }
            break;
        case 2:
            if (tipoTemperatura == 'c')
            {
                temp = conversionCaF(temp);
                printf("Temperatura: %f\n", temp);
                system("pause");
            }
            else
            {
                printf("Error\n");
                system("pause");
            }
            break;
        case 3:
            if(tipoTemperatura == 'f')
            {
                temp = conversionFaC(temp);
                printf("Temperatura: %f\n", temp);
                system("pause");
            }
            else
            {
                printf("Error\n");
                system("pause");
            }


            break;

        case 4:
            printf("Muchas gracias por utilizar este programa\n");
            system("pause");
            break;


        }


    }while(respuesta != 4);


    return 0;
}


// NO FUNCIONAN LAS LIBRERIAS DE VALIDACION

/*
Select Window->Preferences from the menu bar.
Under C/C++->Editor->Documentation tool comments->Workspace default, select Doxygen.
Click Apply and OK.

--> ESTO ES PARA LOS DOXYGEN DE ECLIPSE
*/
