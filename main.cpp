#include <iostream>
#include <ctime>

int getRandQuestion();

int main(){

    /*
    case 1: std::cout << "What is the center of a cell called?\n";
            return 1;
            break;
        case 2: std::cout << "What is the capital of Israel?\n";
            return 2;
            break;
        case 3: std::cout << "How many feet are in a mile?\n";
            return 3;
            break;
        case 4: std::cout << "Who was the 8th President of the United States of America?\n";
            return 4;
            break;
        case 5: std::cout << "What is the closes Galaxy to the Milky Way\n";
        */

    std::string guess;
    int index;

    std::string Ques[] = {"What is the center of a cell called?\n", "What is the capital of Israel?\n", "How many feet are in a mile?\n", "Who was the 8th President of the United States of America?\n", "What is the closes Galaxy to the Milky Way\n"};
    std::string Ans[] = {"Nucleus", "Jerusalem", "5280", "Martin Van Buren", "Andromeda"};

    std::cout << "********************* QUIZ GAME ***********************\n";
    std::cout << "PLEASE CAPITALISE THE FIRST LETTER AND SPELL CORRECTELY\n";
    //CHALLENGE IDEA: make them not have to input caps

    int Index = getRandQuestion();

    std::cout << Ques[Index];
    std::getline(std::cin, guess);


    if(guess == Ans[Index]){
        std::cout << "CORRECT!\n";
    }
    else{
        std::cout << "Sorry, that is Incorrect\n";
    }

    std::cout << "CORRECT ANSWER: " << Ans[Index] << '\n';

    std::cout << "********************************************************";



    return 0;
}


int getRandQuestion(){

    srand(time(0));
    int randQuestion = rand() % 5;

    return randQuestion;

    }

