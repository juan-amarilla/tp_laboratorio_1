/*amarilla juan sebastian 1B
 *
 *
 *
 *
 */

#ifndef EMPLEADOS_H_
#define EMPLEADOS_H_

#include <stdio.h>
#define VACIO 0
#define OCUPADO 1

struct
{
   int id;
   char nombre[51];
   char apellido[51];
   float salario;
   int sector;
   int isEmpty;

}typedef empleado;

/** \brief inicializas a todos los empleados
 *
 * \param empleado lista de empleado
 * \param int tam la cantidad maxima de empleados
 * \return 0
 *
 */
int inicializarEmpleados(empleado* lista, int tam);

/** \brief los datos ingresados seran usados para dar de alta
 *
 * \param empleado lista de empleado
 * \param int tam la cantidad maxima de empleados
 * \param int id del empleado
 * \param char nombre[] del empleado
 * \param char apellido[] del empleado
 * \param float salario del empleado
 * \param int sector del empleado
 * \return i si salio bien, -1 si salio mal
 *
 */
int agregarEmpleados(empleado* lista, int tam, int id, char nombre[],char
apellido[],float salario,int sector);

/** \brief busca id del empleado y modifica:
 * nombre,
 * apellido,
 * salario,
 * o sector
 *
 * \param empleado lista de empleado
 * \param int tam la cantidad maxima de empleados
 * \param int id del empleado
 * \return 0
 *
 */
int buscarEmpleadoPorId(empleado* lista, int tam,int id);

/** \brief busca id del empleado y lo elimina
 *
 * \param empleado lista de empleado
 * \param int tam la cantidad maxima de empleados
 * \param int id del empleado
 * \return -1
 *
 */
int eliminarEmpleado(empleado* lista, int tam, int id);

/** \brief ordena los empleados:
 * alfabeticamente por apellido
 * o por sector
 *
 * \param empleado lista de empleado
 * \param int tam la cantidad maxima de empleados
 * \param int orden para determinar si es por apellido
 * o por sector
 * \return 0
 *
 */
int ordenarEmpleados(empleado* lista, int tam, int orden);

/** \brief imprime un listado sobre todos los empleados
 *
 * \param empleado lista de empleado
 * \param int tam la cantidad maxima de empleados
 * \return 0
 *
 */
int imprimirEmpleados(empleado* lista, int tam);


#endif /* EMPLEADOS_H_ */
