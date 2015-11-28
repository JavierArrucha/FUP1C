#include <stdio.h>

int dia;
int mes;
int dia1;
int mes1;
int acont;
int i;

int main ()
{
	printf ("Dame el numero dia: \n");
	scanf ("%d",&dia);
	printf ("Dame el mes: \n");
	scanf ("%d",&mes);
	printf ("Dame el otro numero de dia: \n");
	scanf("%d",&dia1);
	printf ("Dame el otro mes:\n");
	scanf ("%d",&mes1);
	acont=0;
	i=1;
	if (mes<=30)
	{
	for (i=dia;i<=dia1;i++)
	{
		acont=acont+i;
		i++;
	}
}
	printf ("Los dia son:%d\n",acont);
	system("pause");
}
