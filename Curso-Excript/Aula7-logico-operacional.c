#include<stdio.h>
#include<stdlib.h>


int main(){

    // && = (ture)&&(true)
    int i = 40;
    int condi = (i > 20) && ( i < 100);

    printf("%i", condi);
    printf("%i", !condi);

    /*
        || 
        (true) || (false)   -> 1 ok
        (false) || (true)   -> 1 ok
        (true) || (true)    -> 1
        (false) || (false)  -> 0
        
    */
   system("cls");
   int x = 10;
   int cond = 0;

   cond = (x==10) || (x<1);
   printf("%i", cond);

   cond = (x==0) || (x!=1000);
   printf("%i", cond);
   
   cond = (x==10) || (x!=0);
   printf("%i", cond);

   cond = (x==10) || (x!=0);
   printf("%i", cond);

   cond = (x!=10) || (x==0);
   printf("%i", cond);



    


    return 0;
}