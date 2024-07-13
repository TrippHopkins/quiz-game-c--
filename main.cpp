#include <iostream>
#include <ctime>

void giveQuestion();

int main(){

    int question;
    std::string guess;
    std::string answer;
    std::string YN;

    std::cout << "************ QUIZ GAME ************";

    giveQuestion();



    std::cout << "************************************";



    return 0;
}


std::string giveQuestion(int question){

    srand(time(0));
    int question = rand() % 5 + 1;

    switch(){
        case 1: std::cout << "What is the center of a cell called?";
        case 2: std::cout << "What is the capital of Israel?";
        case 3: std::cout << "How many feet are in a mile?";
        case 4: std::cout << "Who was the 8th President of the United States of America?";
        case 5: std::cout << "What is the closes Galaxy to the Milky Way";



    }

}