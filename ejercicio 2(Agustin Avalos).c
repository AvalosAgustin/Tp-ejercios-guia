#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void mostrar (char caracteres,char  numero[7])
{
	printf("\nDesea ver los numeros que ingreso (S/N)\n");
	caracteres = getch();
	
	if (caracteres == 'S' || caracteres == 's') {
		printf("Los numeros que ingreso son: %s\n", numero);
	}
}

int main() {
	int i = 0;
	char numero[7]; 
	char caracteres;
	
	printf("Ingresar numeros (de 6 digitos maximo)\n");
	
	while (i < 6) {
		caracteres = getch();
		numero[i++] = caracteres;
		printf("*");
		numero[6] = '\0';
	}
	
	mostrar (caracteres, numero);

	
	system("pause");


	return 0;
}
