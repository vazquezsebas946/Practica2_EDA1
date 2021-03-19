#include<stdio.h>
#include<stdlib.h>

//Creado por Luis Enrique Martinez Maldonado el dia 11/03/2021

int main(){
	//Inciso a)
	int *apEnt;
	char *apChar;
	double * apLargoR;
	long *apLargoE;
	float *apFlo;
	short *apShor;//declaramos los apuntadores que se nos solicitan
	//Inciso b)
	apEnt=(int*)malloc(3*sizeof(int));
	apChar=(char*)malloc(3*sizeof(char));
	apLargoR=(double*)malloc(4*sizeof(double));
	apLargoE=(long*)malloc(4*sizeof(long));
	apFlo=(float*)malloc(3*sizeof(float));
	apShor=(short*)malloc(3*sizeof(short));//Como ningun apuntador tiene una variable a la que apuntar, usamos malloc para reservar el espacio de memoria que necesita el apuntador
	//Inciso c)
	printf("Direccion de memoria del primer apuntador: %p\n",apEnt);
	printf("Direccion de memoria del segundo apuntador: %p\n",apChar);
	printf("Direccion de memoria del tercero apuntador: %p\n",apLargoR);
	printf("Direccion de memoria del cuarto apuntador: %p\n",apLargoE);
	printf("Direccion de memoria del quinto apuntador: %p\n",apFlo);
	printf("Direccion de memoria del sexto apuntador: %p\n",apShor);//imprimimos la direccion de memoria de cada apuntador
	//Inciso d)
	*apEnt=1;
	*apChar='f';
	*apLargoR=654.0035;
	*apLargoE=696;
	*apFlo=8.09;
	*apShor=9;//le asisgnamos a cada variable anonima correspondiente a su apuntador un valor
	printf("\nValor de a: %i\n",*apEnt);
	printf("Valor de b: %c\n",*apChar);
	printf("Valor de c: %lf\n",*apLargoR);
	printf("Valor de d: %ld\n",*apLargoE);
	printf("Valor de e: %f\n",*apFlo);
	printf("Valor de f: %x\n",*apShor);//imprimimos los valores de esas variables
	//Inciso e)
	*apEnt=23;
	*apChar='T';
	*apLargoR=4578.90;
	*apLargoE=453;
	*apFlo=9.0094;
	*apShor=0x12;//modificamos el valor de las variables anonimas a traves de los apuntadores
	printf("\nValor modificado de a: %i\n",*apEnt);
	printf("Valor modificado de b: %c\n",*apChar);
	printf("Valor modificado de c: %lf\n",*apLargoR);
	printf("Valor modificado de d: %ld\n",*apLargoE);
	printf("Valor modificado de e: %f\n",*apFlo);
	printf("Valor modificado de f: %x\n",*apShor);//imprimimos este nuevo valor
	//Inciso f)
	free(apEnt);
	free(apChar);
	free(apLargoR);
	free(apLargoE);
	free(apFlo);
	free(apShor);//liberamos la mmemoria apartado con malloc usando la funcion free
	return 0;
}
