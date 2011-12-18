//4. Napisać program obliczający silnię z podanej, niezbyt dużej, liczby naturalnej

#include <stdio.h>

int  main() {
 float x,silnia;
 
 printf ("podaj liczbe x \n");
 
  scanf("%f", &x);
  silnia = x;
  printf ("x= %f\t silnia= %f\n ",x,silnia);

   for (x=x-1; x >=1 ;--x){

   silnia = silnia*x;
   }



  printf("silnia z podanej  liczby =  %f\n ",silnia);

   return 0;
}
