#include <stdio.h>

int main(void)
{	
	int nombre;
	printf("Donnez un nombre entier : ");
	scanf("%d", &nombre);
	printf("\nVoila votre nombre en octal: %o et en hexa: %x", nombre, nombre);

	return 0;
}