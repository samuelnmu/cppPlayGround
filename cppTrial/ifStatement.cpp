#include <iostream>

int main(){
    int age;
    std::cout << "What is your age? ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "You are of legal age";
    }
    else{
        std::cout << "You are a minor";
    }

    return 0;
}