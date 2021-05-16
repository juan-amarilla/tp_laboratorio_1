/*amarilla juan sebastian 1B
 *
 *
 *
 *
 */

#include "empresa.h"
#include "validaciones.h"
#include <stdlib.h>
#include <string.h>
#define VACIO 0
#define OCUPADO 1

int menu()
{
	    int opcion;

		printf("1.ALTA empleado\n");
		printf("2.MODIFICAR empleado \n");
	    printf("3.BAJA empleado \n");
		printf("4.LISTAR \n");
		printf("5.SALIR \n");
		printf("Elija una opcion: \n");
		scanf("%d", &opcion);

		return opcion;
}

void agregarDatos(int* id, char nombre[], char apellido[], float* salario, int* sector)
{
	int validar;

	printf("Ingrese id: \n");
	validar=validarEntero(id);
	while(validar==0)
	{
		printf("Error: Ingrese id: \n");
		validar=validarEntero(id);
	}

    printf("Ingrese nombre: \n");
	fflush(stdin);
	validar=validarLetras(nombre);
	while(validar==0)
	{
			printf("Error: Ingrese nombre: \n");
			validar=validarLetras(nombre);
	}


	printf("Ingrese apellido: \n");
	fflush(stdin);
	validar=validarLetras(apellido);
	while(validar==0)
	{
				printf("Error: Ingrese apellido: \n");
				validar=validarLetras(apellido);
	}

	printf("Ingrese salario: \n");
	validar=validarFlotante(salario);
	while(validar==0)
	{
		    printf("Error: Ingrese salario: \n");
			validar=validarFlotante(salario);
	}

	printf("Ingrese sector: \n");
	validar=validarEntero(sector);
	while(validar==0)
	{
		printf("Error: Ingrese sector: \n");
		validar=validarEntero(sector);
	}

}

void calcularSalarios(empleado* lista, int tam)
{
     int i;
     float promedio;
     int contador;
     int contadorEmpleado;
     int acumulador;

     acumulador=0;
     contadorEmpleado=0;
     contador=0;
     promedio=0;

     for (i=0;i<tam;i++)
     {
    	 if(lista[i].isEmpty==OCUPADO)
    	 {
             acumulador+=lista[i].salario;
             contador++;

    	 }

     }

     if(contador>0)
     {
       promedio =  acumulador / contador;
     }

     for (i=0;i<tam;i++)
     {
    	 if(lista[i].salario>promedio && lista[i].isEmpty==OCUPADO)
    	 {
    		 contadorEmpleado++;
    	 }

     }

     printf("El total de los salarios es %d \n", acumulador);
     printf("El promedio de los salarios es %.2f \n", promedio);
     printf("La cantidad de empleados que superan el salario promedio: %d \n", contadorEmpleado);

}

int verificarEmpleado(empleado* lista, int tam)
{
	int i;
	int index;

	index=-1;

	for (i=0;i<tam;i++)
	{
		if (lista[i].isEmpty==OCUPADO)
		{
            index=i;
            break;

		}

	}

	return index;
}
