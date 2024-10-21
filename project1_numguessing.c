#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int random,guess;
    int guesses=0;
    srand(time(NULL));
    random = rand()%100;
printf("Welcome to the World of Guessing Numbers\n");
do{
        printf("please enter your Guess between (1 to 100) ");
scanf("%d",&guess);
guesses++;
if(guess<random) {
        printf("Guess larger number.\n");
}
 else if   (guess>random)
 {
     printf("guess a smaller number.\n");
 }
 else
 {
     printf("\n\nCongratulations!!! You have successfully guessed the number in %d attempts",guesses);
 }
}
while(guess!=random);
printf("\nBye Bye,Thanks for Playing\n\n\ndeveloped by Het6518\n\n");
return 0;
}
