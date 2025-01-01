#include <iostream>

int main(){
    int month;
    std::cout << "Enter month (1-12) ";
    std::cin >> month;
    
    switch(month){
        case 1: case 2: case 3:
        std::cout << "It is is Q1";
        break;

        case 4: case 5: case 6:
        std::cout << "It is Q2";
        break;

        case 7: case 8: case 9:
        std::cout << "It is Q3";
        break;

        case 10: case 11: case 12:
        std::cout << "It is Q4";
        break;

        default:
        std::cout << "Enter a valid Month number between (1-12)";
    }
    return 0;
}