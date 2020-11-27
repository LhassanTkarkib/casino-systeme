#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int main ()
{
    int number,playernumber,i,wallet=1000,moneyforplaying=0,lower=0,upper=49,stop;

                                                           system("cls");
      srand(time(NULL));
       printf("\t===================================== welcome to the roulette =========================================================\n\n");
      printf("- The maximum to invest is 1000$\n");
         printf("- No cheating !\n");
         printf("- No complaining\n");
         printf("  are u ready to take the challenge ?\n\n\n");
       printf("you have now in your wallet 1000 $");
        do{
           printf("how much you gonna play with ?\n");
       scanf("%d",&moneyforplaying);
       if(moneyforplaying<=wallet){
       printf("you are going to play with %d $\n",moneyforplaying);
       printf("you still have in your wallet %d \n",wallet=wallet-moneyforplaying);
         printf("choose a number between 0 and 49\n");
         scanf("%d",&playernumber);
         printf("you have just selected %d \n\n",playernumber);
         printf("the roulette has started rolling\n\n");
              for (i = 1; i <=5 ; i++)
                   {
                      printf("\t %d\n",i);
                        Sleep(1000);
                   }
                   number=(rand()% (upper-lower+1))+lower;
                   printf("the winner number is %d\n\n",number);
                   Sleep(1500);
       if (playernumber==number)
            {
          printf("congatulation,you won; %d$ \n\n",moneyforplaying=moneyforplaying*3);
          printf("now you have %d\n",wallet=wallet+moneyforplaying);
            }
       else if (playernumber%number==0 || playernumber%number!=0 )
            {
       printf("you lost but at least you get %d$ \n\n",moneyforplaying=moneyforplaying/2);
        printf("now you have %d\n",wallet=wallet+moneyforplaying);
            }
       else if  (playernumber!=number)
            {
                printf("you have lost all your money\n\n");
                printf("now you onley have %d\n",wallet=wallet-moneyforplaying);
            }

    printf("if you want to play agin press any number without 0\n");
   printf("if you want to end the game press 0\n");
         scanf("%d",&stop);

    system("cls");
       }
     else
     {
      printf("yo do not have this mutch in your wallet\n");
     }

 }while (stop!=0);


return 0;
}





