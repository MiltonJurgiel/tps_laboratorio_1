/*
 * calcular.h
 *
 *  Created on: 15 abr. 2022
 *      Author: milto
 */

#ifndef CALCULAR_H_
#define CALCULAR_H_

float debitoAerol(float *precioAerol);

float debitoLatam(float *precioLatam);

float creditoAmbas(float *precioLatam, float *precioAerol);

float btcAmbas( float *precioLatam, float *precioAerol);

float precioUnit(float *km, float *precioLatam, float *precioAerol);

float diferenciaPrecio(float *precioLatam, float *precioAerol);







#endif /* CALCULAR_H_ */
