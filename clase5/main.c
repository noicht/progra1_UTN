#include <stdio.h>
#include <stdlib.h>

int main()
{


    int listaNumeros[5];
    int listaNumeros2[5];
    int i;
    int pos;
    int aux;
    char respuesta;

    //carga secuencial

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &listaNumeros[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", listaNumeros[i]);

    }
    //carga aleatoria
    do
    {
        printf("Ingrese numero: ");
        scanf("%d", &aux);
        printf("Ingrese posicion 1-5: ");
        scanf("%d", &pos);

        listaNumeros2[pos - 1] = aux;

        printf("Desea ingresar otro numero?(s/n): ");
        fflush(stdin);
        scanf("%c", &respuesta);


    }while(respuesta == 's');

    // En memoria, el vector por referencia guarda el primer elemento (en su respectiva direccion de memoria) de la coleccion
    // Si imprimimos todas las direcciones, los numeros se parecen mucho (ej 0x50 0x60 etc etc);



    // definir un array por extension

    int listaNumPorExtension[5] = {1,2,3,4,5};

    //inicializar en 0 un array

    int arraydeceros[5];
    int j;
    for(j = 0; j < 5; j++)
    {
        arraydeceros[i] = 0;
    }

    return 0;
}
