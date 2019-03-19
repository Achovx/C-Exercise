#include <stdio.h>
#include <stdlib.h>
int main()

{
	int numJ, numAn, nbrejoursR, numJH, numJD, delaiJ, delaiD, numA, moisA, delaiA;
	char nomJ[10];
	int mois;


	
	printf ("Saisir le numero de jour : \n");
	scanf ("%d", &numJ);
	printf ("\n");
	printf ("Saisir le nom de jour : \n");
	scanf ("%s", &nomJ);
	printf ("\n");
	printf ("Saisir le numero du mois : \n");
	scanf ("%d", &mois);
	printf ("\n");
	printf ("Saisir l'annee : \n");
	scanf ("%d", &numAn);
	printf ("\n");
	
	numJH = numJ - 1;
	numJD = numJ + 1;
	
	printf ("Aujourd'hui, on est le %s ", nomJ);
	printf ("%d ", numJ);
	
	if (mois == 1)
	{
		printf ("janvier ");
	}
	else if (mois == 2)
	{
		printf ("fevrier ");
	}
	else if (mois == 3)
	{
		printf ("mars ");
	}
	else if (mois == 4)
	{
		printf ("avril ");
	}
	else if (mois == 5)
	{
		printf ("mai ");
	}
	else if (mois == 6)
	{
		printf ("juin ");
	}
	else if (mois == 7)
	{
		printf ("juillet ");
	}
	else if (mois == 8)
	{
		printf ("aout ");
	}
	else if (mois == 9)
	{
		printf ("septembre ");
	}
	else if (mois == 10)
	{
		printf ("octobre ");
	}
	else if (mois == 11)
	{
		printf ("novembre ");
	}
	else if (mois == 12)
	{
		printf ("decembre ");
	}
	
	printf ("%d\n", numAn);
	printf ("Le numero de jour d'hier etait le %d ", numJH);
	printf ("et le numero de jour de demain sera le %d\n", numJD);
	
	if (mois == 1)
	{
		delaiJ = numJ;
		delaiD = 364 - numJ;
	}
	else if (mois == 2)
	{
		delaiJ = numJ + 31;
		delaiD = 333 - numJ;
	}
	else if (mois == 3)
	{
		delaiJ = numJ + 31 + 28;
		delaiD = 303 - numJ;
	}
	else if (mois == 4)
	{
		delaiJ = numJ + 31 + 28 + 31;
		delaiD = 272 - numJ;
	}
	else if (mois == 5)
	{
		delaiJ = numJ + 31 + 28 + 31 + 30;
		delaiD = 242 - numJ;
	}
	else if (mois == 6)
	{
		delaiJ = numJ + 31 + 28 + 31 + 30 + 31;
		delaiD = 211 - numJ;
	}
	else if (mois == 7)
	{
		delaiJ = numJ + 31 + 28 + 31 + 30 + 31 + 30;
		delaiD = 180 - numJ;
	}
	else if (mois == 8)
	{
		delaiJ = numJ + 31 + 28 + 31 + 30 + 31 + 30 + 31;
		delaiD = 150 - numJ;
	}
	else if (mois == 9)
	{
		delaiJ = numJ + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30;
		delaiD = 119 - numJ;
	}
	else if (mois == 10)
	{
		delaiJ = numJ + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30 + 31;
		delaiD = 89 - numJ;
	}
	else if (mois == 11)
	{
		delaiJ = numJ + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30;
		delaiD = 58 - numJ;
	}
	else if (mois == 12)
	{
		delaiJ = numJ + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + 31;
		delaiD = 30 - numJ;
	}
	
	printf ("%d jours se sont ecoules depuis le 1er janvier\n", delaiJ);
	printf ("il reste %d jours avec le 31 decembre\n", delaiD);
	
	
	/*printf ("Saisir le jour d'anniversaire : \n");
	scanf ("%d", &numJA);
	printf ("\n");
	printf ("Saisir le numero du mois d'anniversaire : \n");
	scanf ("%d", &moisA);
	printf ("\n");
	

	
	printf ("il reste %d jours avant la date d'anniversaire\n", delaiA);*/
	
	system ("Pause");
	return 0;
}
