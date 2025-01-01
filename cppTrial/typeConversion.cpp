#include <iostream>

// int main(){
//     int total = 10;
//     int score = 7;
//     int percentage = score * 100 / total;
//     std::cout <<"You have scored: " << percentage <<"%" << std::endl;
//     return 0;
// }

int main(){
    int correct = 8;
    int questions = 10;
    double score = correct /(double) questions * 100;
    std::cout << score <<"%";
    return 0;
}