#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,contador;
	printf("Dame un numero A: \n");
	scanf("%i",&a);
	printf("Dame un numero el numero B: \n");
	scanf("%i",&b);
	c=0;
	contador=0;
	while (contador<b)
		{
				  contador++;
				  c+=a;
	}
	if (b<0)
	{
		printf("El resultado de la multiplicacion es -%i \n",c);
	}
	else
	printf("El resultado de la multiplicacion es %i \n",c);
	system ("pause");
}

