#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice); 
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout<<"You Chose ";
    showChoice(player);


    computer = getComputerChoice();
    std::cout<<"Computer Chose ";
    showChoice(computer);

    chooseWinner(player,computer);

    return 0;
}


char getUserChoice(){
    char player;

    do{
    std::cout<<"Input (r)ock, (p)aper, or (s)cissors\n";
    std::cin>>player;}while(player!='r'&&player!='p'&&player!='s');

    return player;

}

char getComputerChoice(){
    srand(time(0));
    
    int choice = (rand() % 3); //without plus one it will give number between 0-2 

    switch(choice){
        case 0:
            return 'r';

        case 1:
            return 'p';

        case 2:
            return 's'; 
    }
    return 0;

}

void showChoice(char choice){

    switch(choice){
        case 'r':
            std::cout<<"Rock\n";
            break;

        case 'p':
            std::cout<<"Paper\n";
            break;

        case 's':
            std::cout<<"Scissors\n";
            break;
    }

}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r':
            if(computer=='r'){
                std::cout<<"Tie!";
            }

            else if(computer=='p'){
                std::cout<<"You Lose!";
            }

            else{
                std::cout<<"Your Win!";
            }

            break;

        case 'p':
            if(computer=='p'){
                std::cout<<"Tie!";
            }

            else if(computer=='s'){
                std::cout<<"You Lose!";
            }
            
            else{
                std::cout<<"Your Win!";
            }

            break;

        case 's':
            if(computer=='s'){
                std::cout<<"Tie!";
            }

            else if(computer=='r'){
                std::cout<<"You Lose!";
            }
            
            else{
                std::cout<<"Your Win!";
            }

    }

}