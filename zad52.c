// Program treba naci povrsinu jednakostranicnog trokuta.

#include<stdio.h>
#include<math.h>
int main()
{
   int stranica;
   float povrsina, temp_varijabla;

   printf("\nUnesi duljinu stranice trokuta:");
   scanf("%d",&stranica);

   //Izracunaj i ispisi povrsinu trokuta
   temp_varijabla = sqrt(3) / 4 ;
   povrsina = temp_varijabla * stranica * stranica ;
   printf("\nOpseg trokuta je: %f",povrsina);
   return(0);
}
