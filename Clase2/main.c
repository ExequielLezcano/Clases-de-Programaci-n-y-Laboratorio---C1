#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5
int main()
{
    int numero;
    int suma;
    float promedio;
    int i;
    int numeroMaximo;
    int numeroMinimo;
    int flag = 0;

    suma = 0;

    for(i = 1; i < CANTIDAD + 1; i++)
    {
            do
            {
                printf("Ingrese un numero mayor a 0 /n");
                scanf("%d" , &numero);
            }   while(numero <= 0);
            suma = suma + numero;
            if(flag == 0)
            {
                numero = numeroMaximo;
                numero = numeroMinimo;
                flag = 1;
            }
            else
            {
                if(numero > numeroMaximo)
                {
                    numeroMaximo = numero;
                }

                if(numero < numeroMinimo)
                {
                    numeroMinimo = numero;
                }
            }

    }

    promedio = (float)suma / cantidad;
    printf("El promedio es %2.f /n" , promedio);
    printf("El número maximo es %d /n" , numeroMaximo);
    printf("El número minimo es %d /n" , numeroMinimo);
    return 0;
}
