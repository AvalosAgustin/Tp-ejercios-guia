#include <stdio.h>
#include <stdlib.h>

void mostrar(float acu, float cont, float mitad)
{
	
	mitad=acu/cont;
	
	printf("La division cualculada es: %.2f",mitad);
	
}
int main() 
{
	int num;
	float acu=0,cont=0,mitad=0;
	
	printf("Ingrese 3 numeros\n");
	do
	{
		scanf("%d",&num);
		if(num>0)
		{
			cont=cont+1;
			acu=num+acu;
		}
		
	}
	while(cont<3);
	
	mostrar(acu,cont,mitad);
	
	

	
	
	
	return 0;
}
