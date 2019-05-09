#include <iostream>

int main(int argc, char const *argv[])
{
    int value = 10;
    do  
    {
        std::cout << "the value is : \t " << value << "\n";
        if(value == 15)
            {
                value += 3;
                continue;
            }
        value ++;
    }while( value < 20 );
    
    system("pause");
    return 0;
}
