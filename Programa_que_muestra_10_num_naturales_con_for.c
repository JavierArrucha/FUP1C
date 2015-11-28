#include <stdio.h>

int i;
int num;

int main ()
{
	printf ("programa que muestra los 10 numeros naturales con FOR\n");
	printf ("Dame un numero a llegar\n");
	scanf ("%d",&num);
	for (i=1;i<=num;i++)
	{
		printf ("%d\n",i);
	}
	system("pause");
}
