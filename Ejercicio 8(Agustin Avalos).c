#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
int dias_o_Horas(int num)
{
	int i,acu=0;
	char opcion;
	
	printf("Seleccione la operacion:\n");
	printf("a) Convertir dias a horas\n");
	printf("b) Convertir horas a dias\n");
 fflush(stdin);
	scanf("%c",&opcion);
	
	if(opcion=='a'|| opcion=='A')
	{
		for(i=1; i<=num;i++)
		{
			acu=acu+24;
		}
		printf("Usted ingreso dias su equivalencia a horas es:");
		
	}
	
	if(opcion=='b' || opcion=='B')
	{
		
		while(num>=24)
		{
			if(num>=24)
			{
				acu=acu+1;
				num=num-24;
			}
		}
		printf("Usted ingreso horas su equivalencia a dias es:");
		
	}
	
	return acu;
	
}

int main() 
{
	int num,acu;
	
	printf("Ingrese la cantidad\n");
	scanf("%d",&num);
	
	acu=dias_o_Horas(num);
    printf("%d",acu);
	
	return 0;
}

