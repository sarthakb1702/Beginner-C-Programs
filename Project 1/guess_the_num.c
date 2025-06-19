#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
     srand(time(0)); 
    int randomNumber = rand() % 100+1; 
    

int i;
int no_of_guesses=0;

    do{
    printf("Guess the number:");
    scanf("%d",&i);
    if(i>randomNumber){
        printf("lower numbber please\n");
    }
    else{
        printf("higher number please\n");
    }
    no_of_guesses+=1;

    }while (i!=randomNumber);
    printf("you guessed the number in %d gusses",no_of_guesses);
        
    return 0;
}
