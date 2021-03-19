#include <stdio.h>
#include <stdlib.h>

//Creado por Vazquez Reyes Sebastian el dia 11/03/2021

int main()
{
    //inciso a y b:
    int *a, b;
    char *cadena, apcad;
    double *c, d;
    long *e, f;
    float *g, h;
    short *i, j;//declaramos las variables solicitadas junto con su respectivo apuntador

    //inciso c:
    a = &b;
    cadena = &apcad;
    c = &d;
    e = &f;
    g = &h;
    i = &j;//se asigna el apuntador a su variable correspondiente

    //inciso d:
    printf("El valor al que apunta el apuntador: a, es la sig.: %p \n", a);
    printf("La direccion de memoria de la variable (b) a la que apunta <<a>> es: %p \n", &b);//se imprime el valor al que apunta cada apuntador y su respectiva variable, se observa que es la misma

    printf("\nEl valor al que apunta el apuntador: cadena, es la sig.: %p \n", cadena);
    printf("La direccion de memoria de la variable (apcad) a la que apunta <<cadena>> es: %p \n", &apcad);

    printf("\nEl valor al que apunta el apuntador: c, es la sig.: %p \n", c);
    printf("La direccion de memoria de la variable (d) a la que apunta <<c>> es: %p \n", &d);

    printf("\nEl valor al que apunta el apuntador: e, es la sig.: %p \n", e);
    printf("La direccion de memoria de la variable (f) a la que apunta <<e>> es: %p \n", &f);

    printf("\nEl valor al que apunta el apuntador: g, es la sig.: %p \n", g);
    printf("La direccion de memoria de la variable (h) a la que apunta <<g>> es: %p \n", &h);

    printf("\nEl valor al que apunta el apuntador: i, es la sig.: %p \n", i);
    printf("La direccion de memoria de la variable (j) a la que apunta <<i>> es: %p \n", &j);

    //inciso e:
    b = 6;
    apcad = 54;
    d = 5000;
    f = 2000;
    h = 10000;
    j = 20;//asignamos un valor numerico a las variables, no a los apuntadores

    //inciso f:
    printf("\nEl valor de la variable apuntada de a (b) es: %d \n", *a);
    printf("El valor de la variable apuntada de cadena (apcad) es: %d \n", *cadena);
    printf("El valor de la variable apuntada de c (d) es: %f \n", *c);
    printf("El valor de la variable apuntada de e (f) es: %d \n", *e);
    printf("El valor de la variable apuntada de g (h) es: %f \n", *g);
    printf("El valor de la variable apuntada de i (j) es: %d \n", *i);//se imprime el valor de las variables a travez de sus apuntadores

    //inciso g:
    *a = 10;
    *cadena = 30;
    *c = 50;
    *e = 20;
    *g = 100;
    *i = 26;//asignamos un valor a las variables, pero esta vez a travez de sus apuntadores.

    //inciso h:
    printf("\nEl nuevo valor de la variable b es: %d \n", b);
    printf("El nuevo valor de la variable apcad es: %d \n", apcad);
    printf("El nuevo valor de la variable d es: %f \n", d);
    printf("El nuevo valor de la variable f es: %d \n", f);
    printf("El nuevo valor de la variable h es: %f \n", h);
    printf("El nuevo valor de la variable j es: %d \n", j);//imprimimos el nuevo valor asignado en las variables, para demostrar que si ha cambiado
}

