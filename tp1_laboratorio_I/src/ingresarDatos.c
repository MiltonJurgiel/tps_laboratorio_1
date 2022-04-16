/*
 * ingresarDatos.c
 *
 *  Created on: 15 abr. 2022
 *      Author: milto
 */
#include <stdio.h>
#include <stdlib.h>

int ingresarOpcion ()
{
	int opcion;

	printf("Ingrese una opcion: ");
	scanf("%d", &opcion);

	while(opcion<1 || opcion>6)
	{
		printf("Error. Ingrese una opcion valida (1 a 6): ");
		scanf("%d", &opcion);
	}

	return opcion;
}
/////////////////////////////////////////////////

int ingresarFlotante(float *input,char mensaje[], char errorMensaje[],int minimo,int maximo,int reintentos)
{
	int retorno=-1;
	float bufferFloat;

	if(input!=NULL && mensaje !=NULL && errorMensaje !=NULL && minimo<=maximo && reintentos >=0)
	{
		do
		{
			printf("%s", mensaje);
			scanf("%f",&bufferFloat);

			if(bufferFloat >= minimo && bufferFloat<= maximo)
			{
				*input=bufferFloat;
				retorno=0;
				break;
			}
			printf("%s", errorMensaje);
			reintentos--;
		}while(reintentos>=0);
	}
	return retorno;
}

/////////////////////////////////////////////////




