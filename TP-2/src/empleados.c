/*amarilla juan sebastian 1B
 *
 *
 *
 *
 */

#include "empleados.h"
#include "validaciones.h"
#include <string.h>
#define VACIO 0
#define OCUPADO 1

int inicializarEmpleados(empleado* lista, int tam)
{
   int i;

   for (i=0;i<tam;i++)
   {
	   lista[i].isEmpty = VACIO;
   }

   return 0;
}

int agregarEmpleados(empleado* lista, int tam, int id, char nombre[],char
apellido[],float salario,int sector)
{
	int i;
	int index;

	index = -1;

	for(i=0; i<tam; i++)
	{
		if(lista[i].isEmpty==VACIO)
		{
			        index = i;
		            break;
		}
	}

	i = index;

    if(i!=-1)
	{
         lista[i].id=id;
         strcpy(lista[i].nombre, nombre);
         strcpy(lista[i].apellido, apellido);
         lista[i].salario=salario;
         lista[i].sector=sector;

         lista[i].isEmpty=OCUPADO;

         return i;

	}

    return -1;
}

int buscarEmpleadoPorId(empleado* lista, int tam,int id)
{
	int i;
	int opcion;
	int flag;
	int validar;

	flag=0;

	printf("Ingrese id para modificar: \n");
	scanf("%d", &id);

	printf("1-nombre \n");
	printf("2-apellido \n");
	printf("3-salario \n");
	printf("4-sector \n");
	printf("Ingrese numero de opcion: \n");
	scanf("%d", &opcion);

	for (i=0;i<tam;i++)
	{
		if (id==lista[i].id && lista[i].isEmpty==OCUPADO && opcion==1)
		{
			flag=1;

			printf("Ingrese nombre: \n");
			fflush(stdin);
			validar=validarLetras(lista[i].nombre);
			while(validar==0)
			{
						printf("Error: Ingrese nombre: \n");
						validar=validarLetras(lista[i].nombre);
			}

			printf("La modificacion fue exitosa\n");

            break;
		}

		else if (id==lista[i].id && lista[i].isEmpty==OCUPADO && opcion==2)
		{
			flag=1;

			printf("Ingrese apellido: \n");
			fflush(stdin);
			validar=validarLetras(lista[i].apellido);
			while(validar==0)
			{
						printf("Error: Ingrese apellido: \n");
						validar=validarLetras(lista[i].apellido);
			}

			printf("La modificacion fue exitosa\n");

			break;
		}

		else if (id==lista[i].id && lista[i].isEmpty==OCUPADO && opcion==3)
		{
			flag=1;

			printf("Ingrese salario: \n");
			//scanf("%f", &lista[i].salario);
			validar=validarFlotante(&lista[i].salario);
			while(validar==0)
			{
					printf("Error: Ingrese salario: \n");
					validar=validarFlotante(&lista[i].salario);
			}

			printf("La modificacion fue exitosa\n");

			break;
		}

		else if (id==lista[i].id && lista[i].isEmpty==OCUPADO && opcion==4)
		{
			flag=1;

			printf("Ingrese sector: \n");
			validar=validarEntero(&lista[i].sector);
			while(validar==0)
			{
					printf("Error: Ingrese sector: \n");
					validar=validarEntero(&lista[i].sector);
			}

			printf("La modificacion fue exitosa\n");

			break;
		}

	}

	if(flag==0)
	{
		printf("La modificacion no fue exitosa\n");

	}

	return 0;

}

int eliminarEmpleado(empleado* lista, int tam, int id)
{
   int i;
   int flag;

   flag=0;

   printf("Ingrese id para la baja: \n");
   scanf("%d", &id);

   for (i=0;i<tam;i++)
   {
	   if (id==lista[i].id && lista[i].isEmpty==OCUPADO)
	   {
	   		flag=1;

	   		lista[i].isEmpty=VACIO;

	   		printf("La baja fue exitosa\n");

	        break;
	   }
   }

   if(flag==0)
   {
	   printf("La baja no fue exitosa\n");
   }

   return -1;
}

int ordenarEmpleados(empleado* lista, int tam, int orden)
{
   int i;
   int j;
   empleado auxiliar;

   if(orden==1)
   {
      for(i=0;i<tam-1;i++)
      {
         for(j=i+1;j<tam;j++)
         {
        	 if(strcmp(lista[i].apellido,lista[j].apellido)>0)
        	 {
        		 auxiliar=lista[i];
        		 lista[i]=lista[j];
        		 lista[j]=auxiliar;
        	 }


         }
      }
   }

   else if (orden==0)
   {

	   for(i=0;i<tam-1;i++)
	   {
	        for(j=i+1;j<tam;j++)
	        {
	           	 if(lista[i].sector<lista[j].sector)
	           	 {
	           		 auxiliar=lista[i];
	           		 lista[i]=lista[j];
	           		 lista[j]=auxiliar;
	           	 }


	        }
	   }

   }

   return 0;
}

int imprimirEmpleados(empleado* lista, int tam)
{
	int i;

	for(i=0;i<tam;i++)
	{
		if(lista[i].isEmpty == OCUPADO)
		{
			printf("la id es %d, el nombre del empleado es %s, su apellido %s, con un salario de %.2f y del sector %d \n",
					lista[i].id,
					lista[i].nombre,
					lista[i].apellido,
					lista[i].salario,
					lista[i].sector
			                       );
		}
	}

	return 0;
}
