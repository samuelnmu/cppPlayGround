#include <iostream>

// ? is like the if else statement(ternery operator)

int main(){
    int age;
    std::cout << "How old are you? ";
    std::cin >> age;

    age >= 18 ? std::cout << "You are of legal age" : std::cout << "You are a minor";
}