#include <stdio.h>
#include <stdlib.h>
float promeas(float acu, float cont)
{
	float promedio;
	int auxi;
	promedio=acu/cont;
	
	
	if(promedio<=10 && promedio>=9)
	{
		auxi=4;
	}
	else
	{
		if(promedio>=7 && promedio<=8)
		{
		 auxi=3;
		}
		else
		{
			if(promedio>6 && promedio<7)
			{
					auxi=2;
			}
			else
			{
				if(promedio>5 && promedio<=6)
				{
					auxi=1;
				}
				else
				{
				 auxi=0;
				}
				
			}
			
		}
	}
	
	return auxi;
}

int main() 
{
	float acu=0,cont=0;
	int nota,auxi;
	printf("al ingresar 0 se dejara de ingresar notas y mostrara el promedio\n");
	printf("Ingrese la cantidad de notas del alumno\n");
	scanf("%d",&nota);
	acu=nota;
	while(nota>0)
	{
		printf("Ingrese la cantidad de notas del alumno\n");
		scanf("%d",&nota);
		
			acu=acu+nota;
			cont++;
		
		
	} 
	
	auxi=promeas(acu,cont);
	printf("%d",auxi);
	

	return 0;
}

