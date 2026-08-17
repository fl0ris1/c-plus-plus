#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){
    
    double balance = 0;
    int choice = 0;
    
    
    do{
        std::cout<<"1. Show Balance 2. Deposit 3. Withdraw 4. Exit"<<'\n';
        std::cin>>choice;
    
        switch(choice){
            case 1:
                showBalance(balance);
                break;
        
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
        
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
        
            case 4:
                break;
        
            default:
                std::cout<<"Invalid Input";
        
        }
        
    }while(choice != 4);
    
    return 0;
}

void showBalance(double balance){
    std::cout<<std::setprecision(2)<<std::fixed<<balance<<"€"<<'\n'; //setprecision(2)+1365.01 = 1300. The fixed forces setprecision to display n amount of spots after the comma instead of rounding down to the n-th's place.
}

double deposit(){
    double amount = 0;
    std::cout<<"Input The Amount You Want To Deposit: ";
    std::cin>>amount;
    
    if (amount<0){
        std::cout<<"Please Input A Valid Number: ";
        return 0;
    }
    
    return amount;
}


double withdraw(double balance){
    double amount = 0;
    std::cout<<"Input The Amount You Want To Withdraw: ";
    std::cin>>amount;

    if(amount>balance){
        std::cout<<"Insufficient Funds"<<'\n';
        return 0;
    }
    else if(amount<0){
        std::cout<<"Please Input A Valid Amount"<<'\n';
        return 0;
        
    }
    
    return amount;
    
    
}
