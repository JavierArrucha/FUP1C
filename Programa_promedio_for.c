#include <stdio.h>

int i;
int num;
float promedio;
int suma;

int main ()
{
	suma=0;
	printf ("programa que muestra el promedio con FOR\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&num);
		suma=suma+num;
	}
	promedio=(float)suma/10;
	printf ("El promedio es: %f",promedio);
	
	system("pause");
}
