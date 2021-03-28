

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <math.h>



    double la_difference;
    int billet2000=25;
    int billet1000=30;
    int billet500=40;
    int billet200=50;
    int billet100=60;
    int billet50=70;
    int billet25=80;
    int piece20=90;
    int piece10=100;
    int piece5=200;
    int piece1=300;
    int sous50=500;
    int sous20=500;
    int sous5=500;
    
    int calcule_monnaie();
    
int main()
{
    double valeur_a_payer;
    int monnaie;
    
    start:printf("Voici la valeur a payer : RS ");
    
    srand(time(0));
    valeur_a_payer = (double)rand()/ (double)(RAND_MAX/10000); 
    printf("%.2f \n ", valeur_a_payer);

    printf("Inserez votre monnaie : ");
    scanf("%d",&monnaie);
   
    LOOP:if(monnaie<valeur_a_payer)
    {
    printf("Fond insuffisants! ");
    printf("Inserez une nouvelle valeur : ");
    scanf("%d",&monnaie);
    goto LOOP;
    }
    else if(valeur_a_payer==monnaie)
    {
    printf("C'est la valeur exacte.Merci beaucoup! ");
    }

    else
    {
    la_difference=monnaie - valeur_a_payer;
    printf("Votre monnaie d'echange est :%.2f\n ", la_difference);
    }
    printf("------------------------------------------------------------\n");
   
    calcule_monnaie();
    printf("\n");
    printf("\n");
    goto start;

    return 0;
}


  
int calcule_monnaie()
{
    
    int rendu;
    int stock;
    int answer;

reset:printf("Votre monnaie rendu sera : \n");

while(la_difference/2000!=0)
{
 if( billet2000>0)
 {
    rendu=la_difference/2000;
     if(rendu>billet2000)
        {
        rendu=billet2000;
        printf("%d de billet(s) de RS 2000\n ",rendu);
        la_difference = la_difference-(rendu*2000);
        stock=rendu;
        billet2000=billet2000 - stock;
        goto next1;
         }
        else{
        printf("%d billet(s) de Rs 2000\n ", rendu);
        la_difference = la_difference-(rendu*2000);
        stock=rendu;
        billet2000=billet2000 - stock;
        goto next1;
        }
 }
 else
 {
   billet2000=0;  
   goto next1;  
 }
}



next1: while( la_difference/1000!=0)
{
 if(billet1000>0)
 {
        rendu = la_difference/1000;
       if(rendu>billet1000)
        {
        rendu=billet1000;
        printf("%d de billet(s) de RS 1000\n ",rendu);
        la_difference= la_difference-(rendu*1000);
        stock=rendu;
	billet1000=billet1000-stock;
        goto next2;
        }
        else{
	printf("%d billet(s) de Rs 1000\n ", rendu);
	la_difference= la_difference-(rendu*1000);
        stock=rendu;
	billet1000=billet1000-stock;
        goto next2;
        }
 }
else
 {
  billet1000=0; 
  goto next2;
 }

}




next2:while( la_difference/500!=0)
{
if(billet500>0)
 {
	rendu = la_difference/500;
   if(rendu>billet500)
        {
       rendu=billet500;
        printf("%d de billet(s) de RS 500\n ",rendu);
	la_difference = la_difference-(rendu*500);
	stock=rendu;
	billet500=billet500-stock;
        goto next3;
        }
        else{
	printf("%d billet(s) RS 500\n ", rendu);
	la_difference = la_difference-(rendu*500);
	stock=rendu;
	billet500=billet500-stock;
        goto next3;
        }
 }
else
 {
   billet500=0;  
   goto next3;  
 }
}




next3:while(la_difference/200!=0)
{
if(billet200>0)
 {
        rendu= la_difference/200;
   if(rendu>billet200)
        {
        rendu=billet200;
        printf("%d billet(s) de RS 200\n ",rendu);
	la_difference= la_difference-(rendu*200);
        stock=rendu;
	billet200=billet200-stock;
        goto next4;
         }
        else{
	printf("%d billet(s) de RS 200\n ", rendu);
	la_difference= la_difference-(rendu*200);
        stock=rendu;
	billet200=billet200-stock;
        goto next4;
        }
 }
else
 {
   billet200=0;  
   goto next4;  
 }
}




next4:while(la_difference/100!=0)
{
if(billet100>0)
 {

        rendu=la_difference/100;
   if(rendu>billet100)
        {
        rendu=billet100;
        printf("%d billet(s) de RS 100\n ",rendu);
        la_difference = la_difference-(rendu*100);
        stock=rendu;
	billet100=billet100-stock;
        goto next5;
         }
        else{
	printf("%d billet(s) de Rs 100\n ", rendu);
        la_difference = la_difference-(rendu*100);
        stock=rendu;
	billet100=billet100-stock;
        goto next5;
        }
 }
else
 {
   billet100=0;  
goto next5;
 }
}




next5:while(la_difference/50!=0)
{
if(billet50>0)
 {
        rendu = la_difference/50;
   if(rendu>billet50)
        {
        rendu=billet50;
        printf("%d de billet(s) de RS 50\n ",rendu);
	la_difference=la_difference-(rendu*50);
        stock=rendu;
	billet50=billet50-stock;
        goto next6;
        }
        else{
	printf("%d billet(s) de Rs 50\n ", rendu);
	la_difference=la_difference-(rendu*50);
        stock=rendu;
	billet50=billet50-stock;
        goto next6;
        }
 }
else
 {
   billet50=0;  
   goto next6;  
 }
}




next6:while(la_difference/25!=0)
{
if(billet25>0)
 {
        rendu = la_difference/25;
    if(rendu>billet25)
        {
        rendu=billet25;
        printf("%d billet(s) RS 25\n ", rendu);
	la_difference = la_difference-(rendu*25);
        stock=rendu;
	billet25=billet25-stock;
        goto next7;
        }
        else{
	printf("%d billet(s) RS 25\n ", rendu);
	la_difference = la_difference-(rendu*25);
        stock=rendu;
	billet25=billet25-stock;
        goto next7;
        }
 }
else
 {
  printf("\n");
  printf("\n");
  printf("Desole!! Rupture d'un ou plusieur stock!! Il y a plus de monnaie a rendre!!\n");
  printf("\n");
  printf("\n");
  printf("Si vous voulez continuer inserez 0 et si non inserez 1 :\n");
  scanf("%d :  ",&answer);
   switch(answer)
  { 
 case 0:
 printf("Okay.La caisse va se remplir a nouveau pour de nouvelles transactions");
printf("\n");
  printf("\n");
    billet2000=25;
    billet1000=30;
    billet500=40;
    billet200=50;
    billet100=60;
    billet50=70;
    billet25=80;
    piece20=90;
    piece10=100;
    piece5=200;
    piece1=300;
    sous50=500;
    sous20=500;
    sous5=500;
  goto reset;
  
  case 1:
  printf("okay.Vous ne voulez pas.Bonne journee :)");
  exit(0);
  default:
  printf("Votre choix n'est ni 0 ou 1!!");
 }
}
}


next7:while(la_difference/20!=0)
{
if(piece20>0)
 {
	rendu= la_difference/20;
    if(rendu>piece20)
        {
        rendu=piece20;
        printf("%d piece(s) RS 2\n ", rendu);
	la_difference = la_difference-(rendu*20);
        la_difference = la_difference-(rendu*20);
        stock=rendu;
	piece20=piece20-stock;
        goto next8;
         }
        else{
	printf("%d piece(s) de RS 20\n ", rendu);
	la_difference = la_difference-(rendu*20);
        stock=rendu;
	piece20=piece20-stock;
        goto next8;
        }
}
else
 {
   piece20=0;  
   goto next8;  
 }
}




next8:while(la_difference/10!=0)
{
if(piece10>0)
 {
        rendu= la_difference/10;
    if(rendu>piece10)
        {
        rendu=piece10;
        printf("%d piece(s) de Rs 10\n ", rendu);
	la_difference = la_difference-(rendu*10);
        stock=rendu;
	piece10=piece10-stock;
        goto next9;
        }
        else{
	printf("%d piece(s) de Rs 10\n ", rendu);
	la_difference = la_difference-(rendu*10);
        stock=rendu;
	piece10=piece10-stock;
        goto next9;
        } 
 } 
else
 {
  printf("\n");
  printf("\n");
  printf("Desole!! Rupture d'un ou plusieur stock!! Il y a plus de monnaie a rendre!!\n");
  printf("\n");
  printf("\n");
  printf("Si vous voulez continuer inserez 0 et si non inserez 1 :\n");
   scanf("%d :  ", &answer);
   switch(answer)
  { 
 case 0:
 printf("Okay.La caisse va se remplir a nouveau pour de nouvelles transactions");
printf("\n");
  printf("\n");
    billet2000=25;
    billet1000=30;
    billet500=40;
    billet200=50;
    billet100=60;
    billet50=70;
    billet25=80;
    piece20=90;
    piece10=100;
    piece5=200;
    piece1=300;
    sous50=500;
    sous20=500;
    sous5=500;
  goto reset;
  
  case 1:
  printf("okay.Vous ne voulez pas.Bonne journee :)");
printf("\n");
  printf("\n");
  exit(0);
  default:
  printf("Votre choix n'est ni 0 ou 1!!");
 }
}
}



next9:while(la_difference/5!=0)
{
if(piece5>0)
 {
	rendu= la_difference/5;
    if(rendu>piece5)
        {
        rendu=piece5;
        printf("%d piece(s) RS 5\n ", rendu);
	la_difference= la_difference-(rendu*5);
        stock=rendu;
	piece5=piece5-stock; 
        goto next10;
         }
        else{
	printf("%d piece(s) de RS 5\n ", rendu);
	la_difference= la_difference-(rendu*5);
        stock=rendu;
	piece5=piece5-stock;
        goto next10;
        }
 }
else
 {
   piece5=0;  
   goto next10;  
 }
}


next10:while(la_difference/1!=0)
{
if(piece1>0)
 {
	rendu= la_difference/1;
    if(rendu>piece1)
        {
        rendu=piece1;
        printf("%d piece(s) RS 1\n ", rendu);
        la_difference=la_difference-(rendu*1);
        stock=rendu;
	piece1=piece1-stock;
        goto next11;
         }
        else{
	printf("%d piece(s) de RS 1\n ", rendu);
        la_difference=la_difference-(rendu*1);
        stock=rendu;
	piece1=piece1-stock;
        goto next11;
        }
 }
else
 {
  piece1=0;  
  goto next11;  
 }
} 


next11:while(la_difference/0.50!=0)
{
if(sous50>0)
 {
        rendu= la_difference/0.50;
        if(rendu>sous50)
        {
        rendu=sous50;
        printf("%d piece(s) 50 SOUS\n ", rendu);
        la_difference= la_difference-(rendu*0.50);
        stock=rendu;
	sous50=sous50-stock;
        goto next12;
        }
        else{
	printf("%d piece(s) de 50 SOUS \n ", rendu);
	la_difference= la_difference-(rendu*0.50);
        stock=rendu;
	sous50=sous50-stock;
        goto next12;
        }
 }
else
 {
   sous50=0;  
   goto next12;  
 }
}




next12:while(la_difference/0.20!=0)
{
if(sous20>0)
 {
	rendu= la_difference/0.20;
       if(rendu>sous20)
        {
        rendu=sous20;
        printf("%d piece(s) 20 SOUS\n ", rendu);
        la_difference= la_difference-(rendu*0.20);
        stock=rendu;
	sous20=sous20-stock;
        goto next13;
        }
        else{
	printf("%d piece(s) de 20 SOUS\n ", rendu);
	la_difference= la_difference-(rendu*0.20);
        stock=rendu;
	sous20=sous20-stock;
        goto next13;
        }
 }
else
 {
   sous20=0;  
   goto next13;  
 }
}


next13:while(la_difference/0.05!=0)
{
if(sous5>0)
 {
        rendu= la_difference/0.05;
        if(rendu>sous5)
        {
          rendu=sous50;
          printf("%d piece(s) 5 SOUS\n ", rendu);
          stock=rendu;
	  sous5=sous5-stock;
        }
        else{

	  printf("%d piece(s) de 5 SOUS\n ", rendu);
          stock=rendu;
	  sous5=sous5-stock;
          goto end;}
 }
else
 {
  sous5=0;
 }
}

end:printf("***************************************************** \n");
printf("Il nous reste :\n ");

printf("%d billet de Rs 2000 \n",billet2000);
printf("%d billet de Rs 1000 \n",billet1000);
printf("%d billet de Rs 500 \n",billet500);
printf("%d billet de Rs 200 \n",billet200);
printf("%d billet de Rs 100 \n",billet100);
printf("%d billet de Rs 50 \n",billet50);
printf("%d billet de Rs 25 \n",billet25);
printf("%d piece de Rs 20 \n",piece20);
printf("%d piece de Rs 10 \n",piece10);
printf("%d piece de Rs 5 \n",piece5);
printf("%d piece de Rs 1 \n",piece1);
printf("%d piece de 50 sous \n",sous50);
printf("%d piece de 20 sous \n",sous20);
printf("%d piece de 5 sous \n",sous5);

}


    

    

