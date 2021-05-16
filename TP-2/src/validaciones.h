/*amarilla juan sebastian 1B
 *
 *
 *
 *
 */

#ifndef VALIDACIONES_H_
#define VALIDACIONES_H_

/** \brief valida si es un numero entero
 *
 * \param int numero
 * \return 1 si sale bien o 0 si sale mal
 *
 */
int validarEntero(int* numero);

/** \brief valida si es un numero decimal
 *
 * \param float numero
 * \return 1 si sale bien o 0 si sale mal
 *
 */
int validarFlotante(float* numero);

/** \brief valida si es solamente letras
 *
 * \param char letras
 * \return 1 si sale bien o 0 si sale mal
 *
 */
int validarLetras(char* letras);

#endif /* VALIDACIONES_H_ */
