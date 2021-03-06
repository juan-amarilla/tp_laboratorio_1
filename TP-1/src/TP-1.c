/*
 ============================================================================
amarilla juan sebastian 1B

Enunciado
Hacer una calculadora. Para ello el programa iniciar? y
contar? con un men? de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) ?El resultado de A+B es: r?
b) ?El resultado de A-B es: r?
c) ?El resultado de A/B es: r? o ?No es posible dividir por cero?
d) ?El resultado de A*B es: r?
e) ?El factorial de A es: r1 y El factorial de B es: r2?
5. Salir
? Todas las funciones matem?ticas del men? se deber?n realizar en una
biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
? En el men? deber?n aparecer los valores actuales cargados en los
operandos A y B
(donde dice ?x? e ?y? en el ejemplo, se debe mostrar el n?mero cargado)
? Deber?n contemplarse los casos de error (divisi?n por cero, etc)
? Documentar todas las funciones
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main(void) {

	float numeroUno;
	float numeroDos;
	int opcion;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	float resultadoFactorialUno;
	float resultadoFactorialDos;

	numeroUno=0;
	numeroDos=0;

	resultadoSuma=0;
	resultadoResta=0;
	resultadoDivision=0;
	resultadoMultiplicacion=0;
	resultadoFactorialUno=1;
	resultadoFactorialDos=1;

	setbuf(stdout, NULL);

	do
	{
		printf("1. Para ingresar un numero\n");
		printf("2. Para ingresar un numero\n");
		printf("3. Para calcular\n");
		printf("4. Para informar resultados\n");
		printf("5. Para salir del programa\n");
		scanf("%d", &opcion);

		while(opcion<1 || opcion >5){
			printf("error: ingrese 1, 2, 3, 4 o 5");
			scanf("%d", &opcion);
		}

	   switch(opcion){
         case 1:
         printf("ingrese un numero: \n");
         scanf("%f", &numeroUno);
         break;

         case 2:
         printf("ingrese un numero: \n");
         scanf("%f", &numeroDos);
         break;

         case 3:
         resultadoSuma=operacionSuma(numeroUno, numeroDos);
         resultadoResta=operacionResta(numeroUno, numeroDos);
         resultadoDivision=operacionDivision(numeroUno, numeroDos);
         resultadoMultiplicacion=operacionMultiplicacion(numeroUno, numeroDos);
         resultadoFactorialUno=operacionFactorial1(numeroUno);
         resultadoFactorialDos=operacionFactorial2(numeroDos);
         break;

         case 4:
         printf("1.el resultado de numeroUno + numeroDos es: %.2f\n", resultadoSuma);
         printf("2.el resultado de numeroUno - numeroDos es: %.2f\n", resultadoResta);
         if(numeroUno!=0 && numeroDos!=0){
           printf("3.el resultado de numeroUno / numeroDos es: %.2f\n", resultadoDivision);
         }
         else{

        	 if((numeroUno == 0 && numeroDos == 0) || (numeroUno != 0 && numeroDos == 0)){
                printf("3.no es posible dividir por cero\n");
        	 }
         }
         printf("4.el resultado de numeroUno * numeroDos es: %.2f\n", resultadoMultiplicacion);
         printf("5.el factorial de %.2f es: %.2f y el factorial de %.2f es %.2f\n",numeroUno, resultadoFactorialUno, numeroDos, resultadoFactorialDos);
         break;

         case 5:
         printf("Gracias por usar mi programa");
         break;
       }

	} while(opcion != 5);

	return 0;
}
