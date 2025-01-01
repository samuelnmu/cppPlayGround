#include <iostream>

int main(){
    char opperator;
    double num1;
    double num2;
    double results;

    std::cout << "**************WELCOME TO OUR CALCULATOR*************"<< std::endl;
    std::cout << "Enter either(+,/,*,-) ";
    std::cin >> opperator;

    std::cout << "Enter num1: ";
    std::cin >> num1;
    std::cout << "Enter num2: ";
    std::cin >> num2;

    switch(opperator){
        case '+':
        std::cout << num1 + num2;
        break;

        case '-':
        std::cout << num1 - num2;
        break;

        case '*':
        std::cout << num1 * num2;
        break;

        case '/':
        results = num1 / num2;
        std::cout << results;
        break;

        default:
        std::cout << "Invalid syntax";

    }
}