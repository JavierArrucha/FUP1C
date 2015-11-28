#include <stdio.h>

int i=1;
int j=1;
int final;
 int main ()
 {
 	printf("dame un numero");
 	scanf("%d",&final);
 	i=i;
 	while (i <= final)
 	{
 		j=j;
 		while (j<=i)
 		{
		 printf("%d",i);
 		j++;
		 }
		 printf("\n");
		 i++;
	 }
 }
