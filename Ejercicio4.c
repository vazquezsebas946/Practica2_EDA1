#include <stdio.h>

//Creado por Juan Carlos Muñoz Cruz el dia 11/03/2021

void imprimir(int *a, int *arr); //Prototipo de la función que imprime, no retorna nada
int *ptr; //Declaración de un apuntador entero

int main ()
{
    int arr[]= {0,1,2,3,4,5,6,7,8,9}; //Declaración de un arreglo tipo entero con 10 elementos inicializados
    ptr=arr;
    *(arr+1)=5; //arr[1] equivalente a *(arr+1)=5, asigna el valor de 5 al segundo elemento del arreglo
    ptr=&arr[2]; //Guarda la dirección de memoria del tercer elemento del arreglo en el apuntador
    imprimir(ptr,arr); //Función imprimir
    return 0;
}

void imprimir(int *a, int *arr)
{

    printf("\na) ptr:%p", a); //Imprime la dirección de memoria a la que apunta ptr
    printf("\nb) *ptr:%d", *a); //Imprime el valor al que esta apuntando ptr
    printf("\nc) ptr[0]:%p", a); // Imprime la dirección de memoria del elemento 3 del arreglo al que apunta


    printf("\nd) *ptr+6:%d", *a+6); // suma el valor al que apunta, 2, con 6
    printf("\ne) *(ptr+6):%d", *(a+6)); /* A partir del índice del arreglo donde guardo
                                            la dirreción de memoria en la variable ptr muestra el sexto valor */

    printf("\nf) *ptr[-1]:%d", *a-1); /* A partir del indice del arreglo donde guardo la dirección de memoria
                                            en la variable ptr muestra la dirección anterior */
    printf("\ng) ptr[-1]:%p", a-1);
    printf("\nh) ptr[9]:%p", a+7);/* A partir del indice del arreglo donde guardo la dirección de memoria
                                            en la variable ptr muestra la dirección novena */

    printf("\ni) ESCRIBA LA DIRECI%cN DE arr:%p",224, arr); //Imprime la dirección de memoria de la variable arr
    printf("\nj) ESCRIBA LA DIRECI%cN DE ptr:%p",224, &ptr); //Imprimer la dirección de memoria de la variable p
    printf("\nk) ESCRIBA LA DIRECI%CN A LA QUE APUNTA ptr:%p",224, ptr); //Imprime la dirección a la que apunta ptr
}

