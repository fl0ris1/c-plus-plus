#include <iostream>

int main(){
	int number;
	int guess;
	int attempts=0
	;

   srand(time(0)); //seed time(0)=time(NULL)
   
   number=(rand()%6)+1;
   
   do{
	attempts++;
   	std::cout<<"Input a number between 1-6: ";
	std::cin>>guess; //add "too high" or "too low" for guesses
   }while(guess!=number);
   
   std::cout<<"You guessed it in "<<attempts<<" guesses"<<"\nThe number was: "<<number;
   

    return 0;
}
