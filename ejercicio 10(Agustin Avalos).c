#include <stdio.h>
#include <stdlib.h>

void multiplicar_o_dividir(int a , int b)
{
	int i,acu=0,cont=0;
	char opcion;
	printf("Seleccione la operacion:\n");
	printf("m) multiplicacion\n");
	printf("d) division\n");
	fflush(stdin);
	scanf("%c",&opcion);
	if(opcion=='m'|| opcion=='M')
	{
	
		for(i=1;i<=b;i++)
		{
		 acu=acu+a;
		}
		printf("la multiplicacion es:%d\n",acu);	
	}
	if(opcion=='d' || opcion=='D')
	{
		while(a>=b)
		{
			a=a-b;
			cont=cont+1;
		}
		printf("La division es: %d y su resto es: %d\n",cont,a);
	}

	
}


int main(int argc, char *argv[]) 
{
	
	int a,b;
	
	printf("Ingrese un numero\n");
	scanf("%d",&a);
	
	printf("Ingrese otro numero\n");
	scanf("%d",&b);
	multiplicar_o_dividir(a,b);
	
	
	return 0;
}



