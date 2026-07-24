#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout<<"To what unit do you want to convert to (c/f)?: ";
    std::cin>>unit;

    std::cout<<"Input your temperature: ";
    std::cin>>temp;

    if(unit=='F'||unit=='f'){
        std::cout<<"Your temp in farenheit is: "<<(temp * 9/5) + 32;
    }
    else if(unit=='C'||unit=='c'){
        std::cout<<"Your temp in celcius is: "<<(temp - 32) * 5/9;
    }

    else{
        std::cout<<"Please Enter A Valid Input.";
    }
    
    /*
    switch(unit){
        case 'f':
        std::cout<<"Your temp in farenheit is: "<<(temp * 9/5) + 32;
        break;

        case 'c':
        std::cout<<"Your temp in celcius is: "<<(temp - 32) * 5/9;
        break;

        default:
        std::cout<<"Please Enter A Valid Input.";
        

    }*/
    


    return 0;
}