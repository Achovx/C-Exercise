#include <stdio.h>

int main()

{
	int nbre;
	int resulmulti;
	int somme;
	int nbDiviseur = 0;
	int sommeDiviseur = 0;
	
	printf ("Saisir un nombre : ");
	scanf ("%d", &nbre);
	printf ("\n");
	
	
	/* Afficher sa table multiplication jusqu'à 10 */
	
	for (int multi = 0; multi <= 10; multi++)
	{
		resulmulti = nbre * multi;
		printf ("%d x %d = %d\n", nbre, multi, resulmulti);
	}
 
 	printf ("\n");
 
	/* Afficher les diviseurs */
	
	for (int divi = 1; divi <= nbre; divi++)
	{
		if ((nbre % divi) == 0)
		{
			printf ("La liste des diviseurs : %d\n", divi);
			nbDiviseur++;
			sommeDiviseur = sommeDiviseur + divi;
			
		}
	}

	printf ("\n");
	
	/* Afficher le nombre premier */
	
	if (nbDiviseur == 2)
	{
		printf ("Le nombre est premier\n");
	}
	else
	{
		printf ("Le nombre n'est pas premier\n");	
	}
	
	printf ("\n");
	
	/* Afficher le nombre parfait */
	sommeDiviseur = sommeDiviseur - nbre;
	printf("Le sommes des diviseurs propres est : %d \n",sommeDiviseur);
	
	printf ("\n");
	
	if(nbre==sommeDiviseur)
	{
		printf("Votre nombre est un nombre parfait\n");
	}
	else
	{
		printf("Votre nombre n'est pas un nombre parfait \n");
	}

	/* Afficher le calcul factoriel */

	int resultat = 1;
	
	for (int facto = 1 ; facto <= nbre; facto++)
	{
		resultat = resultat * facto;
	}
	printf ("Le nombre factorielle est : %d\n", resultat);
	
	printf ("\n");
	
	/* Afficher le calcul fibonacci */
	
	int a = 0;
	int b = 1;
	int c;
	int d;
	
	for (int i = 0; i <= nbre; i++)
	{
		if (i <= 1)
		d = i;
		else
		{
			c = a + b;
			a = b;
			b = c;	
		}
	}
	printf ("Pour la %deme valeur, F(%d) = %d\n", nbre, nbre, c);
	
	/* Afficher son triangle de Pascal */
	
	printf ("\n");
	
	/* Afficher sa décomposition binaire */
	/* 128 64 32 16 8 4 2 1 (8 cas)*/
	int vb1, vb2, vb3, vb4, vb5, vb6, vb7, vb8;
	int valuedecimal;
	
	{	
		if (nbre >= 128)
		{
			vb1 = 1;
			nbre = nbre - 128;
		}
		else
		{
			vb1 = 0;
		}
		
		
		if (nbre >= 64)
		{
			vb2 = 1;
			nbre = nbre - 64;
		}
		else
		{
			vb2 = 0;
		}
	
	
		if (nbre >= 32)
		{
			vb3 = 1;
			nbre = nbre - 32;
		}
		else
		{
			vb3 = 0;
		}
	
		if (nbre >= 16)
		{
			vb4 = 1;
			nbre = nbre - 16;
		}
		else
		{
			vb4 = 0;
		}
		
		if (nbre >= 8)
		{
			vb5 = 1;
			nbre = nbre - 8;
		}
		else
		{
			vb5 = 0;
		}
		
		
		if (nbre >= 4)
		{
			vb6 = 1;
			nbre = nbre - 4;
		}
		else
		{
			vb6 = 0;
		}
		
		
		if (nbre >= 2)
		{
			vb7 = 1;
			nbre = nbre - 2;
		}
		else
		{
			vb7 = 0;
		}
		
		
		if (nbre >= 1)
		{
			vb8 = 1;
			nbre = nbre - 1;
		}
		else
		{
			vb8 = 0;
		}
		printf ("Les valeurs en binaires sont : %d%d%d%d%d%d%d%d\n", vb1, vb2, vb3, vb4, vb5, vb6, vb7, vb8);
	}
}
