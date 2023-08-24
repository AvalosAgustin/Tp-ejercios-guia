#include <stdio.h>
#include <string.h>

void convertir_unidad(char cifra);
void convertirDecenas(char cifra);
void convertir_Numero_En_Letras(char numero[]);
void convertir_convertir_de_dos_cifras(char cifra);

int main()
{
	char numero[4];
	
	printf("Ingrese un número entre 0 y 999: ");
	scanf("%s", numero);
	
	int l = strlen(numero);
	
	if ( l< 1 || l>3) {
		printf("El numero que ingresaste es superior a 999 debe ser menor");
		return 0;
	}
	
	printf("El número en letras es: ");
	convertir_Numero_En_Letras(numero);
	
	return 0;
}

void convertir_unidad(char cifra)
{
	
	switch (cifra) {
	case '0':
		printf("cero");
		break;
	case '1':
		printf("uno");
		break;
	case '2':
		printf("dos");
		break;
	case '3':
		printf("tres");
		break;
	case '4':
		printf("cuatro");
		break;
	case '5':
		printf("cinco");
		break;
	case '6':
		printf("seis");
		break;
	case '7':
		printf("siete");
		break;
	case '8':
		printf("ocho");
		break;
	case '9':
		printf("nueve");
		break;
	}
}
void convertir_convertir_de_dos_cifras(char cifra)
{
	switch (cifra) {
	
	case '1':
		printf("once");
		break;
	case '2':
		printf("doce");
		break;
	case '3':
		printf("trece");
		break;
	case '4':
		printf("catorce");
		break;
	case '5':
		printf("quince");
		break;
}
}


void convertirDecenas(char cifra)
{
	switch (cifra) {
	case '1':
		printf("diez");
		break;
	case '2':
		printf("veinte");
		break;
	case '3':
		printf("treinta");
		break;
	case '4':
		printf("cuarenta");
		break;
	case '5':
		printf("cincuenta");
		break;
	case '6':
		printf("sesenta");
		break;
	case '7':
		printf("setenta");
		break;
	case '8':
		printf("ochenta");
		break;
	case '9':
		printf("noventa");
		break;
	}
}

void convertir_Numero_En_Letras(char numero[4])
{
	int l = strlen(numero);
	
	if((l==2 && numero[0]=='1' && numero[1]=='0')) 
	{
		
		printf("diez");
		
	}
	if (l == 1) {
		convertir_unidad(numero[0]);
	} else 
		if (l == 2) 
	   {
			if (numero[0] == '1' && numero[1]>='0') 
			{
				convertir_convertir_de_dos_cifras(numero[1]);
				
			}else
			
		if (numero[0] == '1') {
			
			printf("dieci");
			convertir_unidad(numero[1]);
		} 
		else {
			convertirDecenas(numero[0]);
			if (numero[1] != '0') {
				printf(" y ");
				convertir_unidad(numero[1]);
			}
		}
	} else if (l == 3) {
		if (numero[0] == '1') 
		{
			printf("ciento ");
		} else 
			if (numero[0] != '0') 
		{
			convertir_unidad(numero[0]);
			printf("cientos ");
		}
		
		if (numero[1] == '0') {
			convertir_unidad(numero[2]);
		} else {
			convertirDecenas(numero[1]);
			if (numero[2] != '0') 
			{
				printf(" y ");
				convertir_unidad(numero[2]);
			}
		}
	}
}
