#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    srand(time(0));
    int player;
    int computer=(rand() % 3);

    /*snake=0
      water=1 
      gun=2 */
    printf("Choose 0 for snake , 1 for water , 2 for gun:");
    scanf("%d",&player);
    printf("Computer choosed %d\n",computer);

    if ((player==0 && computer==1) || (player==1 && computer==2) || (player==2 && computer==0))
    {
        printf("You win\n");
    }
    else if ((player==1 && computer==0) || (player==2 && computer==1) || (player==0 && computer==2))
    {
        printf("You  loose\n");
    }
    else{
        printf("its a tie\n");
    }
    
    
    
    
    return 0;
}