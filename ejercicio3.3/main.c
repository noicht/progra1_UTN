#include <stdio.h>
#include <stdlib.h>

int ingresoEntero()
{
    int num;
    printf("Ingrese numero: ");
    scanf("%d", &num);
    return num;
}


int main()
{
    int num;

    num = ingresoEntero();

    printf("\nNumero devuelto: %d", num);
    return 0;
}

