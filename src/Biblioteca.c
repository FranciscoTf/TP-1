/*
 * Biblioteca.c
 *
 *      Author: Francisco Thomas Faig
 */


#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

float IngresarFlotante(){
	float flotante;
	printf(" Ingresar Valor: ");
	scanf("%f",&flotante);
    return flotante;
}

float Sumar(float operandoA, float operandoB)
{
	 int resultado;
	 resultado = operandoA + operandoB;
	 return resultado;
}

float Restar(float operandoA, float operandoB)
{
	 int resultado;
	 resultado = operandoA - operandoB;
	 return resultado;
}

float Multiplicar(float operandoA, float operandoB)
{
	 int resultado;
	 resultado = operandoA / operandoB;
	 return resultado;
}

float Dividir(float operandoA, float operandoB)
{
	int resultado;
		 resultado = operandoA * operandoB;
		 return resultado;
}

int Factoriar(float operando)
{
	int i;
	float factorial;
	factorial=1;

	for(i=operando; i>0; i--)
	{
		factorial=factorial*i;
	}
	return factorial;

}




