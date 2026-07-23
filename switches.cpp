#include <iostream>

int main(){

    int month;
    std::cout<<"Input A Month (1-12): ";
    std::cin>>month;

    switch(month){ //switches can also be done with chars ( ' ' ) and strings ( " " )
        case 1:
        std::cout<<"Jan";
        break;

        case 2:
        std::cout<<"Feb";
        break;

        case 3:
        std::cout<<"Mar";
        break;

        case 4:
        std::cout<<"Apr";
        break;

        case 5:
        std::cout<<"May";
        break;

        case 6:
        std::cout<<"Jun";
        break;

        case 7:
        std::cout<<"Jul";
        break;

        case 8:
        std::cout<<"Aug";
        break;

        case 9:
        std::cout<<"Sep";
        break;

        case 10:
        std::cout<<"Oct";
        break;

        case 11:
        std::cout<<"Nov";
        break;

        case 12:
        std::cout<<"Dec";
        break;

        default: //else
        std::cout<<"Please Only Input Numbers From 1-12";
    }

    return 0;
}