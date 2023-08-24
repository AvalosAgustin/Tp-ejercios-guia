#include <stdio.h>
#include <stdlib.h>

int positivo_o_negativo(int num)
{
	int a=1,b=0,resul=0;
	if(num<0)
	{
		resul=num*-1;
		printf("%d=(numero negativo) y su numero es:%d sin el signo\n",a,resul);
		return 1;
		
	}
	
	else
	{
		return b;
	}
	
}
int main() 
{
	int num,numB;
	
	printf("Ingresar un numero\n");
	scanf("%d",&num);
	numB=positivo_o_negativo(num);
	if(num>0)
	{
		printf("\n%d=(numero positivo)",numB);
	}
	return 0;
}

