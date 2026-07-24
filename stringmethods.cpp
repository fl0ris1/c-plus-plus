#include <iostream>

int main(){

    std::string name;

    std::cout<<"Enter Your Name: ";
    std::getline(std::cin, name);

    name.append(" hi");

    std::cout<<"Your Name is "<<name.length()<<" Letters Long.\n";

    name.insert(0,"3");

    std::cout<<name.at(0)<<'\n';

    std::cout<<name.find("i")<<'\n';

    std::cout<<name.empty();

    name.clear();

    return 0;
}