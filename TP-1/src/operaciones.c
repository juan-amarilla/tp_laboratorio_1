/*amarilla juan sebastian 1B
 *
 *
 *
 *
 */

float operacionSuma(float numero1, float numero2)
{
	float resultado1;

	resultado1 = numero1 + numero2;

	return resultado1;
}

float operacionResta(float numero3, float numero4)
{
	float resultado2;

	resultado2 = numero3 - numero4;

	return resultado2;
}

float operacionDivision(float numero5, float numero6)
{
	float resultado3;

	resultado3 = numero5 / numero6;

	return resultado3;
}

float operacionMultiplicacion(float numero7, float numero8)
{
	float resultado4;

	resultado4 = numero7 * numero8;

	return resultado4;
}

float operacionFactorial1(float numero9)
{
	   int i;
	   float factorial;

	   factorial=1;

	   for (i=numero9;i>1;i--) {

		   factorial = factorial * i;
	   }

	   return factorial;
}

float operacionFactorial2(float numero10)
{
	   int i2;
	   float factorial2;

	   factorial2=1;

	   for (i2=numero10;i2>1;i2--) {

		   factorial2 = factorial2 * i2;
	   }

	   return factorial2;
}
