#include <iostream>
#include <vector>

int main(){
    std::string name;

    std::cout << "Enter your name ";
    std::getline(std::cin, name);

    // append
    name.append("@gmail.com");
    std::cout << "Your username is now " <<name;


    return 0;
}
