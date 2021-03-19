#include <stdio.h>

//Creado por Berdejo Guzman Leonardo el dia 11/03/2021

void suma(int *a, int *b, int *c);//Declaramos los prototipos de las funciones que usaremos despues
void mult(int *a, int *b, int *c);//Prototipos de suma, resta, multiplicacion y division
void resta(int *a, int *b, int *c);
void div(int *a, int *b, int *c);
int main()
{
    int val[]={34,5};//estos son los valores que se usaran en las operaciones
    int res;//esta es la variable en la que se guardara el resultado
	int *ap,*ap1,*ap2, opcion;//declaramos apuntadores para las variables anteriores, y la opcion para el switch en la calculadora
	ap=val;//asignamos el apuntador ap al arreglo val, pero a su primer elemento
	ap1=ap+1;//asignamos el apuntador ap1 al arreglo val, pero a su segundo elemento
	ap2=&res;//asignamos el apuntador p2 a la variable del resultado, res
	while(1){//se abre un ciclo para permitirle al usuario ejecutar cuantas instrucciones quiera hasta que no lo necesite mas
		printf("\nElegir una opci%cn:\n",162);
		printf("1) Sumar\n");
		printf("2) Restar.\n");
		printf("3) Multiplicar.\n");
		printf("4) Dividir.\n");
		printf("5) Salir.\n");//Estas instrucciones le muestran al usuario que opcion ejecutar
		scanf("%d", &opcion);
		switch(opcion){//segun la opcion que escoja el usuario, se llama a una funcion para desarrollar la operacion
			case 1:
				suma(ap,ap1,ap2);//llamamos a la funcion suma
				printf("La suma es: %i \n", res);//imprimimos el resultado
				break;//se cierra el switch
			case 2:
				resta(ap,ap1,ap2);//llamamos a la funcion resta
				printf("La resta es: %i \n", res);//imprimimos el resultado
				break;//se cierra el switch
			case 3:
				mult(ap,ap1,ap2);//llamamos a la funcion mult (multiplicacion
				printf("La multiplicaci%cn es: %i \n", 162, res);//imprimimos el resultado
				break;//se cierra el switch
			case 4:
				div(ap,ap1,ap2);//llamamos a la funcion div (division)
				printf("La divisi%cn es: %i \n", 162, res);//imprimimos el resultado
				break;//se cierra el switch
			case 5:
				return 0;//se cierra el switch
			default:
				printf("Respuesta no válida");//se cierra el switch
		}
	}
	return 0;
}
void suma(int *a, int *b, int *c){//la funcion recibe los apuntadores de las funciones
	*c=*a+*b;//realiza la operacion con los apuntadores
}
void mult(int *a, int *b, int *c){//la funcion recibe los apuntadores de las funciones
	*c=(*a)*(*b);//realiza la operacion con los apuntadores
}
void resta(int *a, int *b, int *c){//la funcion recibe los apuntadores de las funciones
	*c=*a-*b;//realiza la operacion con los apuntadores
}
void div(int *a, int *b, int *c){//la funcion recibe los apuntadores de las funciones
	*c=(*a)/(*b);//realiza la operacion con los apuntadores
}
