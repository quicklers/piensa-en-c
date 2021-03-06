#include <stdio.h>
#include <stdbool.h>

/*
 * ¿Es un número primo?
 * Se dice que un número N es primo si los únicos enteros positivos que lo
 * dividen son exactamente 1 y N.
 * Programa que, al recibir como dato un número entero positivo determina si
 * éste es un número primo.
 * Dato: X.
 */

bool esPrimo(unsigned int);
int main(int argc, char *argv[])
{
	int x;

	do
	{
		printf("Ingrese el numero: ");
		scanf("%d", &x);
	} while (x < 1);

	if (esPrimo(x))
		printf("\n%d es un numero primo.\n", x);
	else
		printf("\n%d NO es un numero primo.\n", x);

	return 0;
}

/** Función que determina si el número num es primo o no. */
bool esPrimo(unsigned int num)
{
	if (num == 1)
		return false;

	bool condicion_cumplida = true;

	for (int i = 2; i <= (num / 2); i++)
	{
		if (num % i == 0)
			condicion_cumplida = false;
	}

	return condicion_cumplida ? true : false;
}
