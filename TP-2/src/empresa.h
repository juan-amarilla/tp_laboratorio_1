/*amarilla juan sebastian 1B
 *
 *
 *
 *
 */

#ifndef EMPRESA_H_
#define EMPRESA_H_

#include "empleados.h"

/** \brief muestra menu
 *
 * \return retorna un entero
 *
 */
int menu();

/** \brief ingresas datos
 *
 * \param int id del empleado
 * \param char nombre[] del empleado
 * \param char apellido[] del empleado
 * \param float salario del empleado
 * \param int sector donde trabaja el empleado
 * \return void
 *
 */
void agregarDatos(int* id, char nombre[], char apellido[], float* salario, int* sector);

/** \brief Calcula total de todos los empleados
 * Calcula promedio de todos los empleados
 * Saca la cantidad de empleados que superan el salario promedio
 *
 * \param empleado lista de empleado
 * \param int tam la cantidad maxima de empleados
 * \return void
 *
 */
void calcularSalarios(empleado* lista, int tam);

/** \brief Verifica si hay un empleado dado de alta
 *
 * \param empleado lista de empleado
 * \param int tam la cantidad maxima de empleados
 * \return si es -1 no encontro nada, si es distinto a -1 encontro uno
 *
 */
int verificarEmpleado(empleado* lista, int tam);

#endif /* EMPRESA_H_ */
