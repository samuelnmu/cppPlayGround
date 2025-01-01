#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout << "********TEMPARATURE CONVERTOR*********" <<std::endl;
    std::cout << "Input the unit (C/F) ";
    std::cin >> unit;

    std::cout << "Input the Temperature ";
    std::cin >> temp;


    switch(unit){
        case 'c':
        temp = (1.8 * temp) + 32;
        std::cout << "It is " << temp << "F";
        break;

        case 'f':
        temp = (temp - 32) / 1.8;
        std::cout << "It is " << temp << "C";
        break;

        default:
        std::cout << "Invalid output";
    }
    return 0;
}