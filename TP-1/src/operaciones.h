/*amarilla juan sebastian 1B
 *
 *
 *
 *
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_
#include <stdio.h>
/**
 * @fn float operacionSuma(float, float)
 * @fn float operacionResta(float, float)
 * @fn float operacionDivision(float, float)
 * @fn float operacionMultiplicacion(float, float)
 * @fn float operacionFactorial1(float)
 * @fn float operacionFactorial2(float)
 * @brief permite hacer las operaciones de +, -, /, * y factorial
 *
 * @param con numero1 + numero2 se calcula la suma
 * @param con numero3 - numero4 se calcula la resta
 * @param con numero5 / numero6 se calcula la division
 * @param con numero7 * numero8 se calcula la multiplicacion
 * @param con numero9 se calcula el factorial
 * @param con numero10 se calcula el factorial
 * @return cada return regresara un resultado dependiendo de cada operacion
 */

float operacionSuma(float numero1, float numero2);
float operacionResta(float numero3, float numero4);
float operacionDivision(float numero5, float numero6);
float operacionMultiplicacion(float numero7, float numero8);
float operacionFactorial1(float numero9);
float operacionFactorial2(float numero10);

#endif /* OPERACIONES_H_ */
