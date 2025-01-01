#include <iostream>
#include <vector>

typedef std::string text_t;

int main(){
    text_t name;
    int age;

    std::cout << "Happy New year and Welcome" << std::endl;
    std::cout << "Enter Your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello "<< name << std::endl;

    std::cout << "Whats your age? ";
    std::cin >> age;
    std::cout <<"Welcome " << age << " is of legal age";
    return 0;
}