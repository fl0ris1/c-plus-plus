#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    //using namespace first;
    using std::cout;
    //int x = 0;

    /*std::cout <<x<<'\n';
    std::cout <<first::x<<'\n';
    std::cout <<second::x;*/
    std::string a="hello";
    cout << a;
    
    return 0;
}