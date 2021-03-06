/*
 * calcular.c
 *
 *  Created on: 15 abr. 2022
 *      Author: milto
 */
#include <stdio.h>
#include <stdlib.h>
#include "ingresarDatos.h"
/**
 * Toma los precios y devuelve los montos con descuento
 * @param precioAerol
 * @param precioLatam
 * @return
 */

float debitoLatam(float *precioLatam)
{
	float descuento = 0.1;
	float descLatam;
	float debitoLatam;


	descLatam= descuento**precioLatam;
	debitoLatam=*precioLatam-descLatam;


	return 0;

}

float debitoAerol(float *precioAerol)
{
	float descuento = 0.1;
	float descAerol;
	float debitoAerol;

	fflush(stdin);
	descAerol= descuento**precioAerol;
	debitoAerol=*precioAerol-descAerol;

	return 0;

}

//////////////////////////////////

float creditoAmbas(float *precioAerol, float *precioLatam)
{
	float aumento = 0.25;
	float aumentoLatam;
	float aumentoAerol;
	float creditoLatam;
	float creditoAerol;

	aumentoLatam= aumento**precioLatam;
	aumentoAerol= aumento**precioAerol;
	creditoLatam=*precioLatam+aumentoLatam;
	creditoAerol=*precioAerol+aumentoAerol;

	return printf("El precio credito con interes de Latam es %2.f\nEl precio credito con interes de Aerolineas es %2.f\n", creditoLatam, creditoAerol);

}

//////////////////////////////////

float btcAmbas(float *precioAerol, float *precioLatam)
{
	float btc=4606954.55;
	float btcLatam;
	float btcAerol;

	btcLatam= *precioLatam/btc;
	btcAerol= *precioAerol/btc;


	return printf("El precio en btc de Latam es %f\nEl precio en btc de Aerolineas es %2f\n", btcLatam, btcAerol);
    // redondea, tiene que redondear o no?
}

//////////////////////////////////

float precioUnit(float *km, float *precioLatam, float *precioAerol)
{
	int x;
	float resultLatam;
	float resultAerol;

	x=*km;

	resultLatam=*precioLatam/x;
	resultAerol=*precioAerol/x;

	return printf("El precio por km de Latam es %f\nEl precio por km de Aerolineas es %f", resultLatam, resultAerol);

}

///////////////////////////////////

float diferenciaPrecio(float *precioLatam, float *precioAerol)
{
	float diferencia;

	if(*precioLatam>*precioAerol)
	{
		diferencia=*precioLatam-*precioAerol;
	}
	else
	{
		diferencia=*precioAerol-*precioLatam;
	}

	return printf("La diferencia de precios entre empresas es %f", diferencia);
}
