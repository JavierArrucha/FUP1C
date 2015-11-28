#include <stdio.h>
#include <stdlib.h>

int arreglo[10];
int i;
int mayor=0;
int j;
int masGrande=60000;
int menor=0;




int main ()
{
	
	for (i=0;i<10;i++)
	{
		printf ("dame un nuemro:\n");
		scanf("%d",&arreglo[i]);
	}
	//for(j=0;j<2;j++)
	//{
		mayor=0;
		
	for(i=0;i<10;i++)
	{
		if (arreglo[i]>mayor  && arreglo[i]<masGrande)
		{
			mayor=arreglo[i];
		}
	}
	menor=0;
	for (i=1;i<10-1;i++) 
	{ 
		if (arreglo[i]<menor) 
		{ 
			menor=arreglo[i];  
		} 
	}
	printf ("La posicion del elemento menor es: %d \n",menor); 
	
	printf("El numero mayor es:\n %d \n",mayor);
	//masGrande=mayor;

	//}
	
	return 0;
}
