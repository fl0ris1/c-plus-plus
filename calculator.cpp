#include <iostream>

int main(){
    double num1;
    double num2;
    char oper;

    std::cout<<"First Number: "; //FIX: Insta enter when letter is typed instead of number?
    std::cin>>num1;

    std::cout<<"Second Number: ";
    std::cin>>num2;

    std::cout<<"Operator: ";
    std::cin>>oper;

    switch(oper){
        case '+':
        std::cout<<num1+num2;
        break;

        case '-':
        std::cout<<num1-num2;
        break;

        case '*':
        std::cout<<num1*num2;
        break;

        case '/':
        std::cout<<num1/num2;
        break;

        default:
        std::cout<<"ERROR";
    }

    return 0;
}