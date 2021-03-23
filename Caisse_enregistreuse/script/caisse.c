#include <stdio.h>
#include <stdlib.h>
int main()
{  
   double valeur_a_payer,monnaie,nouvelle_valeur,la difference;
   int lower,upper;
   printf("voici la valeur_a_payer: ");
   printf("%d\n",rand()% 10000 + 100);
   printf("Entrez la monnaie: ");
   scanf("%d", &monnaie);
   printf("Entrez la nouvelle_valeur : ");
   scanf("%d",&nouvelle_valeur );
   printf("Entrez la difference : ");
   scanf("%d", &ladifference);

  if (valeur_a_payer<monnaie)
     {
      print("Fond insuffisants: ");
      printf("Entrez la nouvelle_valeur : ");
      scanf("%d",&nouvelle_valeur );

     }
  else if(valeur_a_payer<=monnaie)
     {
       printf("c'est la valeur exacte : ");
     } 
  else(nouvelle_valeur>valeur_a_payer)
     {
      printf("la difference est : ");
      scanf("%d",&ladifference);
     }
     
