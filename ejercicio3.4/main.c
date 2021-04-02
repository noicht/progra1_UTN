#include <stdio.h>
#include <stdlib.h>

int Sumar1(int,int);
int Sumar2(void);



int main()
{
    printf("Suma1: %d", Sumar1(1,2));
    x = Sumar2();
    printf("Suma2: %d", x);
    return 0;
}

int Sumar1(int n1, int n2)
{
    return n1 + n2;
}

int Sumar2()
{
    int n1, n2;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &n1, &n2);

    return n1 + n2;
}
