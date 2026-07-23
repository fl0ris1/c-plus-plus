#include <iostream>

using string=std::string;

int main(){
    double x = (int) 3.14;
    int questions = 10;
    int correct = 7;

    std::cout<<correct/(double)questions*100 << '\n';
    std::cout<<x+0.1;

    return 0;
}