#include <stdio.h>
#include <stdlib.h>

#define T 5

int main()
{
    int i,j,aux;
    int miVector[T] = {8,1,4,9,2};

    for (i = 0; i < T; i++)  //AMARILLO (TERMINA UNO ANTES)
    {
        for (j = i + 1; j < T; j++) // VERDE (ARRANCA UNO DESPUES Y RECORRE TODO EL ARRAY)
        {
            if(miVector[i] > miVector[j])//CRITERIO DE ORDENAMIENTO
            {
                aux = miVector[i];
                miVector[i] = miVector[j];
                miVector[j] = aux;


            }

        }

    }

    for(i = 0; i < T; i++)
    {
        printf("%d\n", miVector[i]);
    }




    return 0;
}
// puts() ---> printf para cadenas
/*
¿Como definimos un string?

--> char miString[tamaño de array] = "Hola vengo a flotar" --> el tamaño del array debe alojar el
tamaño del string + caracter "\0" --> sirve para reconocer hasta donde llega la cadena

usamos printf("%s", miString); para mostrarlo


strlen(const char*) --> recibe: un literal(string) o un puntero a char(vector de caracteres)
                    --> devuelve: longitud del vector (cant de elementos o SIZE_T) sin contar el "\0"

strcpy(char*, const char*) --> recibe:  un puntero a char(vector de chars) //destino
                                        una const de puntero a char o un puntero a char //origen
                           --> devuelve: el string copiado

strcmp(const char*, const char*) --> recibe: dos const de puntero a char
                                 --> devuelve: <0 si la primer cadena es menor a cadena2
                                               >0 viceversa
                                               =0 si ambas cadenas son iguales
                                 --> Basicamente compara los caracteres segun la tabla de ASCII hasta que encuentra dos diferentes

stricmp y strcmpi hacen lo mismo pero ignoran diferencias entre mayusculas y minusculas


strupr(const char*) --> recibe: const de puntero a char
                    --> devuelve: el string pasado en mayusculas


strlwr(const char*) --> mismo que strupr pero en minusculas

strcat() --> recibe: puntero a char, const de puntero a char

         --> devuelve: string de origen concatenado con el string2 (nota: ojo con el tamaño de los vectores)


dos funciones utiles (incluir ctype.h):

char toupper(char) --> devuelve un caracter en mayuscula,si es un string, devuelve el primer caracter en mayuscula
              --> Hay que asignarlo a una variable char para que el valor no se pierda


-->Ingresar valores por teclado a un string: --> gets(cadena), (scanf se le complica al toparse con '\n', pero se puede usar scanf("%[^\n]", cadena) --> sin &)
                                             --> fgets(char*,int, FILE*) (ej fgets(cadena, 15(tamaño), stdin)) --> agrega un '\n' y '\0' al final

// INVESTIGAR : isspace, isalpha, isdigit.



*/

