#include <stdio.h>
#include <stdlib.h>
int main()

{
	int vb1, vb2, vb3, vb4, vb5, vb6, vb7, vb8;
	int valuedecimal;
	int valuehexa1;
	char valuehexa2;
	char A, B, C, D, E, F;
	
	printf ("Voici un programme pour convertir les nombres decimals en binaire et hexadecimal\n");
	printf ("Saisir les valeurs decimales pour convertir en binaire : ");
	
	scanf ("%d", &valuedecimal);
	/*Partie binaire */
	/* 128 64 32 16 8 4 2 1 (8 cas)*/
	{	
		if (valuedecimal >= 128)
		{
			vb1 = 1;
			valuedecimal = valuedecimal - 128;
		}
		else
		{
			vb1 = 0;
		}
		
		
		if (valuedecimal >= 64)
		{
			vb2 = 1;
			valuedecimal = valuedecimal - 64;
		}
		else
		{
			vb2 = 0;
		}
	
	
		if (valuedecimal >= 32)
		{
			vb3 = 1;
			valuedecimal = valuedecimal - 32;
		}
		else
		{
			vb3 = 0;
		}
	
		if (valuedecimal >= 16)
		{
			vb4 = 1;
			valuedecimal = valuedecimal - 16;
		}
		else
		{
			vb4 = 0;
		}
		
		
		/* la */
	
	
		if (valuedecimal >= 8)
		{
			vb5 = 1;
			valuedecimal = valuedecimal - 8;
		}
		else
		{
			vb5 = 0;
		}
		
		
		if (valuedecimal >= 4)
		{
			vb6 = 1;
			valuedecimal = valuedecimal - 4;
		}
		else
		{
			vb6 = 0;
		}
		
		
		if (valuedecimal >= 2)
		{
			vb7 = 1;
			valuedecimal = valuedecimal - 2;
		}
		else
		{
			vb7 = 0;
		}
		
		
		if (valuedecimal >= 1)
		{
			vb8 = 1;
			valuedecimal = valuedecimal - 1;
		}
		else
		{
			vb8 = 0;
		}

		
		/* Partie hexadecimal */
		
		printf ("Saisir les valeurs decimales pour convertir en hexadecimal : ");
	
		scanf ("%d", &valuedecimal);
		
		
		if (valuedecimal >= 0 && valuedecimal <= 9)
		{
			valuehexa1 = valuedecimal;
		}
		else if (valuedecimal = 10)
		{
			valuehexa2 == (A);
		}
		else if (valuedecimal = 11)
		{
			valuehexa2 == (B);
		}
		else if (valuedecimal = 12)
		{
			valuehexa2 == (C);
		}
		else if (valuedecimal = 13)
		{
			valuehexa2 == D;
		}
		else if (valuedecimal = 14)
		{
			valuehexa2 == E;
		}
		else if (valuedecimal = 15)
		{
			valuehexa2 == F;
		}
	}
	
	printf ("Les valeurs en binaires sont : %d%d%d%d%d%d%d%d\n", vb1, vb2, vb3, vb4, vb5, vb6, vb7, vb8);
	
	if (valuehexa1)
	{
		printf ("Les valeurs en hexadecimal sont : %d\n", valuehexa1);
	}
	else
	{
		printf ("Les valeurs en hexadecimal sont : %c\n", valuehexa2);
	}
	system ("Pause");
	return 0;
}
