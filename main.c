/*
 * Este programa fue hecho para sumar dos matrices
 *
 * Mario Emilio Aguilar Chung
 * A01411210@itesm.mx
 * 10/15/2018
 *
 */
#include <stdio.h>

int main()

{

    int a[10][10];
    int b[10][10];
    int c[10][10];
    int i;
    int j;
    int m;
    int n;
    //Obtengo la informacion del usuario
    printf("How many rows and columns?");
    scanf("%i",&m);

    //Establezco que el valor del numero de columnas y filas debe ser mayor a 1 y menor o igual a 10
    while ((m<=1) || (m>10))
    {
        printf ("Invalid input. Please type a number greater than 1.\n");
        scanf ("%i", &m);
    }
    n=m;


    printf("\nEnter first matrix:\n");
//Obtengo los valores de la matriz
    for(i=0;i<m;++i)
        for(j=0;j<n;++j)
            scanf("%i",&a[i][j]);

    printf("\nEnter second matrix:\n");

    for(i=0;i<m;++i)
        for(j=0;j<n;++j)
            scanf("%i",&b[i][j]);

    printf("\nMatrix after addition:\n");
//Hago la adicion de las matrices
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%i ",c[i][j]);
        }

        printf("\n");
    }

    return 0;

}