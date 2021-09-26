/*
 ============================================================================
 Name        : Trabajo Practico N°1
 Author      : Francisco Thomas Faig - 1F
 Version     :
 Description : Calculadora

-Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:

1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir

• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.

• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)

• Deberán contemplarse los casos de error (división por cero, etc)

• Documentar todas las funciones
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion;

	float operandoA;
	float operandoB;

	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;
	int resultadoFactorialA;
	int resultadoFactorialB;


	do{
		system("cls");
		printf("      --Menu Principal--\n\n");
		printf(" 1) Ingresar 1er operando (A=x)\n");
		printf(" 2) Ingresar 2do operando (B=y)\n");
		printf(" 3) Calcular todas las operaciones\n");
		printf(" 4) Informar resultados\n");
		printf(" 5) Salir\n\n");

		printf("   Opcion: ");
		scanf("%d", &opcion);

		switch (opcion) {

		case 1:
			operandoA = IngresarFlotante(operandoA);
			system("cls");
			break;

		case 2:
			operandoB = IngresarFlotante(operandoB);
			system("cls");
			break;

		case 3:

			resultadoSuma= Sumar(operandoA, operandoB);
			resultadoResta= Restar(operandoA, operandoB);
			resultadoMultiplicacion= Multiplicar(operandoA, operandoB);
			resultadoDivision= Dividir(operandoA, operandoB);
			resultadoFactorialA= Factoriar(operandoA);
			resultadoFactorialB= Factoriar(operandoB);

			printf("Se realizaron operaciones.\n\n");
			break;

		case 4:
			printf("Suma: %.1f\n",resultadoSuma);
			printf("Resta: %.1f\n",resultadoResta);
			printf("Multiplicacion: %.1f\n",resultadoMultiplicacion);
			printf("Division: %.1f\n",resultadoDivision);
			printf("Factorial de a: %d\n",resultadoFactorialA);
			printf("Factorial de b: %d\n",resultadoFactorialB);
			break;
		}

	}while(opcion != 5);




	}
