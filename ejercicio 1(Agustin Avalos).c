#include <stdio.h>
#include <stdlib.h>

void mostrar()
{
	char nombre[20];
	char apellido[20];
	
	printf("Ingresar su nombre\n");
	gets(nombre);
	
	printf("Ingresar su apellido\n");
	gets(apellido);
	
	printf("Su nombre es:%s\n",nombre);

	printf("Su apellido es:%s\n",apellido);
	
}
int main() 
{
	char nombre[20];
	char apellido[20];
	mostrar(nombre,apellido);
	
	return 0;
}

