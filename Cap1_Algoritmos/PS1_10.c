#include <stdio.h>

/*
 * Dígitos de un número.
 * Programa que al recibir como dato un número de cuatro dígitos genera una
 * impresión de cada dígito.
 */

int main(int argc, char *argv[])
{
	int num, dig1, dig2, dig3, dig4;

	printf("Ingrese un numero de 4 digitos: ");
	scanf("%d", &num);

	dig4 = num % 10;
	num /= 10;
	dig3 = num % 10;
	num /= 10;
	dig2 = num % 10;
	num /= 10;
	dig1 = num;

	printf("%u \n%u \n%u \n%u \n", dig1, dig2, dig3, dig4);

	return 0;
}
