#include<stdio.h>
#include<stdlib.h>

int num;
int opc;
int total;
int galltotal;
int reftotal;
int paptotal;
int palototal;
int aguatotal;
int totalventas;
int ganancias;
int eleccion;
int main()
{
	printf("*****Bienvenido a la tienda el Mamas*****\n");
	printf("-----Selecciona la opcion que deseas realizar-----\n");
	printf("+++++Selecciona 1 para un nuevo producto+++++\n");
	printf("+++++Selcciona 2 para ver tus ganacias+++++\n");
	scanf("%d",&eleccion);
	ganancias = 500;

	switch(eleccion)  
{
              case 1:{
                   printf("Usted eligio nuevo producto \n");
                   printf("Eliga usted el producto\n");
                   printf("1***galletas $10\n");  
				   printf("2***refresco $13\n"); 
				   printf("3***papas $11\n");
				   printf("4***palomitas $15\n");
				   printf("5***agua $8\n");
                   scanf("%d",& opc);
                   switch(opc)
				   {
                                  case 1:{
                                       printf("Usted elegio galletas \n");
                                       printf("Cuantos productos desea usted \n");
                                       scanf("%d",&num);
                                       galltotal=10*num;
                                       printf("El costo es: %d \n",galltotal);
                                    
                            
                                         }break;
                                  case 2:{
                                        printf("Usted elegio refresco \n");
                                        printf("Cuantos productos desea usted \n");
                                       scanf("%d",&num);
                                       reftotal=13*num;
                                       printf("El costo es: %d \n",reftotal);
                                       
                                      
                                         }break;
                                  case 3:{
                                        printf("Usted elegio papas \n");
                                        printf("Cuantos productos desea usted \n");
                                       scanf("%d",&num);
                                       paptotal=11*num;
                                       printf("El costo es: %d \n" ,paptotal);
                                       
                                         }break;
                                  case 4:{
                                       printf("Usted elegio palomitas \n");
                                       printf("Cuantos productos desea usted \n");
                                       scanf("%d",&num);
                                       palototal=15*num;
                                       printf("El costo es: %d \n",palototal);
                                       
                                         }break;
                                  case 5:{
                                       printf("Usted elegio agua \n");
                                       printf("Cuantos productos desea usted \n");
                                       scanf("%d",&num);
                                       aguatotal=8*num;
                                       printf("El costo es: %d \n",aguatotal);
                                       
                                         }break;
                                         default:{
                                         printf("  solo  opciones  1,2,3,4,5   ");
                                        
                            
                                         
									}
									}
                                      
                                      
                                    
                      }break;
              case 2:
            	{
            		printf("Las ganancias totales son: %d",ganancias);
				}break;
			default :
			{
				printf("sintaxis error!!!!");
				
				}
			}
			system ("pause");
		}	

