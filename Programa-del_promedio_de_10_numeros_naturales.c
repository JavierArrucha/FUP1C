#include <stdio.h>

int num;
int suma=0;
float prom;
int i;

int main ()
{
	
	while(i<=9)
	{
		printf("dame un numero\n");
		scanf("%d",&num);
		suma=suma+num;
		
		i=i+1;
	}
	prom=(float)suma/10;
	printf("La suma es: %d    ",suma);
	printf ("promedio es %f\n",prom);
	system("pause");
}
























