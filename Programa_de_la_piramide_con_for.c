#include <stdio.h>

int i;
int j;
int final;

int main ()
{
	printf ("programa de la piramide con FOR\n");
	printf ("Dame un numero a llegar\n");
	scanf("%d",&final);
	for(i=1;i<=final;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	system ("pause");
}
