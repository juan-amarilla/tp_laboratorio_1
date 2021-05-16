/*
 ============================================================================

 amarilla juan sebastian 1B

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empresa.h"
#define VACIO 0
#define OCUPADO 1
#define T 1000

int main(void) {

	int opcion;
	int retorno;
	int id;
	char nombre[51];
	char apellido[51];
	float salario;
	int sector;
	int orden;

	empleado trabajadores[T];

	inicializarEmpleados(trabajadores, T);

	setbuf(stdout, NULL);

	do
    {
		   opcion=menu();

		   switch(opcion)
		   {
		          case 1:

		          agregarDatos(&id, nombre, apellido, &salario, &sector);

		          retorno = agregarEmpleados( trabajadores, T,  id,  nombre,
		        		    apellido, salario, sector);

		          if(retorno !=-1)
		          {
		        	  printf("empleado ingresado con exito!!!\n");
		          }
		          else
		          {
		        	  printf("No hay mas lugar en la lista!!\n");
		          }

		          break;

		          case 2:
		          retorno = verificarEmpleado(trabajadores, T);

		          if(retorno!=-1)
		          {
		        	buscarEmpleadoPorId(trabajadores, T, id);
		          }
		          else
		          {
		        	  printf("Ningun empleado activo!!!\n");
		          }
		          break;

		          case 3:
		          retorno = verificarEmpleado(trabajadores, T);

		          if(retorno!=-1)
		          {
		        	  eliminarEmpleado(trabajadores, T, id);
		          }
		          else
		          {
		        	  printf("Ningun empleado activo!!!\n");
		          }
		          break;

	              case 4:
	              retorno = verificarEmpleado(trabajadores, T);

	              if(retorno!=-1)
	              {    printf("1-Listado de empleados\n");
	                   printf("2-Total y promedio de salarios, ademas cuantos superan el salario promedio \n");
	                   printf("Ingrese una opcion en numero: \n");
	                   scanf("%d", &opcion);

                       switch(opcion)
                       {
                          case 1:

                          printf("Ingrese 1 para ordenar alfabeticamente \n");
                          printf("Ingrese 0 para ordenar por sector \n");
                          scanf("%d", &orden);

                          ordenarEmpleados(trabajadores, T, orden);
                          imprimirEmpleados(trabajadores, T);

                          break;

                          case 2:
                          calcularSalarios(trabajadores, T);
                       }   break;


                  }
	              else
	              {
	            	  printf("Ningun empleado activo!!!\n");
	              }
               	  break;

		   }

    } while(opcion!=5);

	return 0;
}
