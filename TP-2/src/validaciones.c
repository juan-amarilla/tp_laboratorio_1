/*amarilla juan sebastian 1B
 *
 *
 *
 *
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int validarEntero(int* numero)
{
	int i;
	int validar;
	char str[20];
	int entero;

	i=0;
	validar=1;

	scanf("%s", str);

	while (str[i] != '\0')
	{
		if(str[i]<'0' || str[i]>'9')
		{
			validar=0;
			break;
		}

		i++;

	}

	if(validar==1)
	{
		entero=atoi(str);
		*numero=entero;

	}

	return validar;
}

int validarFlotante(float* numero)
{
	int validar;
	int i;
	int contador;
	float flotante;
	char str[20];


	validar=1;
	i=0;
	contador=0;

	scanf("%s", str);

	while(str[i] != '\0')
	{
	       if (str[i] == '.' && contador == 0)
	       {
	    	   contador++;
	           i++;
	           continue;

	       }

	       if(str[i] < '0' || str[i] > '9')
	       {
	    	   validar=0;
	           break;
	       }

	     i++;
	}

	if(validar==1)
	{
			flotante=atof(str);
			*numero=flotante;

	}

    return validar;
}

int validarLetras(char* letras)
{
   int validar;
   int i;
   char str[20];

   i=0;
   validar=1;

   scanf("%s", str);

   while(str[i]!='\0')
   {
        if((str[i]<'a' || str[i]>'z') && (str[i]<'A' || str[i]>'Z') && (str[i]!=' '))
        {
               validar=0;
               break;
        }

        i++;
   }

   if(validar==1)
   {
	   strcpy(letras, str);

   }

   return validar;
}
