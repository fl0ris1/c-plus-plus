#include <iostream>
#include <ctime> //for pc

int main(){
	int number;
	int guess;
	int attempts=0
	;

   srand(time(0)); //seed time(0)=time(NULL)
   
   number=(rand()%100)+1; //1-100. without +1 after it will be 0-99
   
   do{
	attempts++;
   	std::cout<<"Input a number between 1-100: ";
	std::cin>>guess; //add "too high" or "too low" for guesses

    if(guess>number){
        std::cout<<"Lower!"<<'\n';
    }
    else{
        std::cout<<"Higher!"<<'\n';
    }
   }while(guess!=number);
   
   std::cout<<"You guessed it in "<<attempts<<" guesses"<<"\nThe number was: "<<number;
   

    return 0;
}