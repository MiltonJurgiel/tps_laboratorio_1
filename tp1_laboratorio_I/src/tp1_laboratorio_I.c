/*
 ============================================================================
 Name        : tp1_laboratorio_I.c
 Author      : Milton Jurgiel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/* Buenas tardes, el tp esta incompleto y muy mal hecho.
 * La verdad es que me da verguenza entregar esto.
 Cuando lo empece a corregir, se me lleno de errores.
 Estoy pasando una situacion familiar muy compleja y, sumado el trabajo, realmente me atrase
 mucho con las materias. NO es una excusa, es una aclaracion.
 Espero, si existiera, nueva fecha de entrega para presentarlo como corresponde.
 Disculpas.
 Milton Jurgiel.

 */

#include <stdio.h>
#include <stdlib.h>
#include "ingresarDatos.h"
#include "calcular.h"

float respuesta (float *debitoAeroli, float *debitoLatams);

int main(void)
{
	setbuf(stdout, NULL);
	float opcion;
	float respuesta;
	float km;
	int flag1=0;
	int flag2=0;
	int flag3=0;
	float precioLatam;
	float precioAerol;
	float debitoAeroli;
	float debitoLatams;

	do
	{
		respuesta=ingresarFlotante(&opcion, "1. Ingresar kilometros: \n2. Ingresar precio de Vuelos:\n\3. Calcular todos los costos:\n\4. Informar resultados\n5. Carga forzada de datos\n6. Salir\n","Error",1, 6, 3);
		if(respuesta==0)
		{


			switch(opcion)
			{
			case 1:
				flag1=1;
				km=ingresarFlotante(&km,"Ingrese la cantidad de kilometros: ", "error. Ingrese un kilometraje valido.", 1, 99999999, 3);
				printf("%f",&km);
				system("PAUSE");
				system("cls");

			break;
			case 2:
				if(flag1==1)
				{
					precioAerol=ingresarFlotante(&precioAerol,"Ingrese el precio de Aerolineas: ", "Error. Ingrese un precio valido: \n",1, 9999999999, 3);
					precioLatam=ingresarFlotante(&precioLatam,"Ingrese el precio de Latam: ", "Error. Ingrese un precio valido: \n",1, 999999999, 3);
				}
				else
				{
					printf("Error. Los kilometros no fueron ingresados. Vuelva a la opcion 1, por favor./n");
				}
				flag2=1;
				system("PAUSE");
				system("cls");
				break;
			case 3:
				if(flag2==1)
				{
					fflush(stdin);
					debitoAeroli= debitoAerol(&precioAerol);

					fflush(stdin);
					debitoLatams= debitoLatam(&precioLatam);

					fflush(stdin);
					creditoAmbas(&precioAerol, &precioLatam);

					fflush(stdin);
					btcAmbas(&precioAerol, &precioLatam);

					fflush(stdin);
					precioUnit(&km, &precioAerol, &precioLatam);

					fflush(stdin);
					diferenciaPrecio(&precioLatam, &precioAerol);






					system("\nPAUSE");
				}
				else
				{
					printf("Error. Los kilometros no fueron ingresados. Vuelva a la opcion 2, por favor./n");
				}
				flag3=1;

				break;
			case 4:
				if(flag3==1)
				{
					respuesta(&debitoLatams, &debitoAeroli);
				}


				break;
			default:


				break;


			}
		}
	}while(opcion!=6);


	return EXIT_SUCCESS;
}

float respuesta (float *debitoAeroli, float *debitoLatams)
{
	fflush(stdin);
	printf("El precio debito con descuento de Latam es %2.f\nEl precio debito con descuento de Aerolineas es %2.f\n", debitoLatams, debitoAeroli);
	system("PAUSE");
	return 0;
}


