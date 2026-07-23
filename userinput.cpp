#include <iostream>

int main(){
    std::string name;
    int age;
    
    std::cout<<"What is your age?"<<'\n';
    std::cin>>age; // without std::ws input stops at newline character and newline character stays in input buffer where it gets accepted as input

    std::cout<<"What is your name?"<<'\n';
    std::getline(std::cin>>std::ws, name);

    std::cout<<"Hello "<<name<<'\n';
    std::cout<<"You are "<<age<<" years old";

    //std::cin>>name; //points to which variable input should be stored in
    return 0;
}