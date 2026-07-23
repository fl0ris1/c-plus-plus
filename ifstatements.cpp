#include <iostream>

int main(){
    int age;

    std::cout<<"Input Your Age: ";
    std::cin>> age;

    if (age>=18){
        std::cout<<"You Are Atleast 18";
    }

    else if(age<0){
        std::cout<<"You Have Not Been Born Yet";
    }

    else{
        std::cout<<"You Are Younger Than 18";
    }
    return 0;
}