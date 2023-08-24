#include <stdio.h>
#include <stdlib.h>

void mostrar(int num)
{
	
	printf("El numero ingresado en la tabla ascci se representa como: %c\n",num);
	
}
int main() 
{
	int num;
	
	printf("ingrese un numero\n");
	scanf("%d",&num);
	
	mostrar(num);
		
	
	system("pause");
	return 0;
}

