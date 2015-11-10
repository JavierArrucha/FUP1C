//Programa regresivo n numero//
#include <stdio.h>

int num1;
int num2;
int i;
int main()
{
	printf("Introduce un numero: \n"); 
    scanf("%d",&num1); 
    printf("Introduce otro numero: \n");
    scanf("%d",&num2);
    int i=num1;
        
         const int tope=num2;
         for(i=num1;i>=num2;i=i-1)
         
		 {
           printf("\n",i);
         }
         for(i=num1;i<=num2;i++)
         {
			printf("Tu cuenta es: \n",i);	
		  }
          {
			printf("\n",i);	
		  }
         printf("FINALIZADO \n");
    

}

