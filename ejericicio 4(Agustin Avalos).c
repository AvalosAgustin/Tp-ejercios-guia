#include <stdio.h>

int mitad(float num1, float num2)
{
	
	float media;
	
	media=(num1+num2)/2;
	return media;
	
}
int main() 
{
	float num1,num2,division;
	printf("Ingrese un numero\n");
	scanf("%f",&num1);
	printf("Ingrese otro numero\n");
	scanf("%f",&num2);
	
	division=mitad(num1,num2);
	printf("La media de los numeros es:%.2f",division);
	
	return 0;
}

