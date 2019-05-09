#include <ctime>
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int secret_number = std::rand() % 11;
    int guess = 0;
    
    std::string str_1;
    std::string quit = "q";

    while(true) 
    {
        std::cout << "guess a number :\n";
        std::cin >> guess;

        if(guess > secret_number) std::cout << "too big \n";
        if(guess < secret_number) std::cout << "too small\n";
        if(guess == secret_number) 
        {
            std::cout << "you guessed it\n";
            break;
        }
        
        // dont mix use getline() and cin 
        // if so, use cin.ingnore();
        std::cout << "to quit press q else to continue\n";
        std::cin >> str_1;
        if(str_1 == quit) break;
    }

    system("pause");
    return 0;
}
