#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>

int demo_goto();

int main(int argc, char const *argv[])
{
    demo_goto();
    
    std::string normal_str, secret_str = "";
    std::cout << "Enter your string in uppercase: \n";
    std::cin >> normal_str;
    
    for(char c: normal_str) secret_str += std::to_string((int)c);
    std::cout << "secret : " << secret_str << "\n";
    
    // empty string nromal_str
    normal_str = "";
    
    for(int i = 0; i < secret_str.length(); i+=2)
    {
        std::string temp_str = "";
        temp_str += secret_str[i];
        temp_str += secret_str[i+1];

        int temo_int = std::stoi(temp_str);
        // integer to character
        char temp_char = temo_int;
        // retrive the string
        normal_str += temp_char;
    }
    std::cout << normal_str << "\n";

    system("pause");
    return 0;
}

int demo_goto()
{
    int a = 10;
    // just a text that will do the job
    This_is_goto:
    {
        std::cout << "this is a goto demo\n";
        a += 3;
    } 

    do
    {
        // when its ture it will do this_is_goto;
        if(a == 15) goto This_is_goto;

        std::cout << "the value of a: " << a <<"\n";
        a++;
    }while(a < 20);

    return 0;
}