#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int billet_20 = 0;
	int billet_10 = 0;
	int billet_5 = 0;
	int piece_200 = 0;
	int piece_100 = 0;
	int piece_50 = 0;
	int piece_20 = 0;
	int piece_10 = 0;
	int piece_5 = 0;
	int piece_2 = 0;
	int piece_1 = 0;

	float montant_achat;
	float somme_donne;

	printf("Saissiez le montant total des achats: ");
	scanf("%f", &montant_achat);

	printf("\nSaissiez le montant de la somme donne: ");
	scanf("%f", &somme_donne);

	if (somme_donne == montant_achat)
	{
		printf("\nIl n'y a pas de monnaie a rendre.\n");
	}
	else if(somme_donne < montant_achat)
	{
		printf("\nLa somme donne est insufisante. Il manque %.2f\n", montant_achat - somme_donne);
	}
	else
	{	
		float monnaie = somme_donne - montant_achat;
		int monnaie_c = monnaie * 100;
		billet_20 = monnaie_c / 2000;
		monnaie_c -= billet_20 * 2000;
		billet_10 = monnaie_c / 1000;
		monnaie_c -= billet_10 * 1000;
		billet_5 = monnaie_c / 500;
		monnaie_c -= billet_5 * 500;
		piece_200 = monnaie_c / 200;
		monnaie_c -= piece_200 * 200;
		piece_100 = monnaie_c / 100;
		monnaie_c -= piece_100 * 100;
		piece_50 = monnaie_c / 50;
		monnaie_c -= piece_50 * 50;
		piece_20 = monnaie_c / 20;
		monnaie_c -= piece_20 * 20;
		piece_10 = monnaie_c / 10;
		monnaie_c -= piece_10 * 10;
		piece_5 = monnaie_c / 5;
		monnaie_c -= piece_5 * 5;
		piece_2 = monnaie_c / 2;
		monnaie_c -= piece_2 * 2;
		piece_1 = monnaie_c / 1;
		monnaie_c -= piece_1 * 1;

		printf("Il faut rendre: %.2f\n", monnaie);
		printf("Il faut rendre: \n%d billet 20 euros\n%d billet 10 euros\n%d billet 5 euros\n%d piece 2 euros\n%d piece 1 euro\n%d piece 50 centimes\n%d piece 20 centimes\n%d piece 10 centimes\n%d piece 5 centimes\n%d piece 2 centimes\n%d piece 1 centimes\n", 
							billet_20,
							billet_10,
							billet_5,
							piece_200,
							piece_100,
							piece_50,
							piece_20,
							piece_10,
							piece_5,
							piece_2,
							piece_1);
	}
	
	system("pause");
	return 0;
}