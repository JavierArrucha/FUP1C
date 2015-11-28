#include <stdio.h>
#include <stdlib.h>

int cal[10];
int mayor, posmayor;
int mayor1;
int i;
int suma=0;
int moda[11];
float prom;
int main ()
{
	
	for (i=0;i<10;i++)
	{
		printf("Calificacion %d: \n",(i+1));
		scanf ("%d",&cal[i]);
		suma=suma+cal[i];
	}
	prom=(float)suma/10;
	printf("El promedio general es: %f \n",prom);
	for (i=0;i<11;i++)
	{
		moda[i]=0;
		
	}
	for (i=0;i<10;i++)
	{
		moda[cal[i]]++;
	}
	posmayor=0;
	mayor=moda[0];
	for (i=1;i<11;i++)
	{
		if(moda[i]> mayor)
		{
			mayor = moda[i];
			posmayor=i;
		}
	}
	printf ("La moda es: %d",posmayor);
}
