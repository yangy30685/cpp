#include <iostream>
#include <iomanip>

int main()
{
    // the default is right
    std::cout << std::setw(10) << "DATA0" << "<-\n"
    << std::setw(10) << std::setiosflags(std::ios::left) << "DATA 1" << "<-" << std::endl
    << std::setw(20) << std::resetiosflags(std::ios::left) << "DATA 2" << "<-" << std::endl;
    
    std::cout << std::setw(10) << std::setiosflags(std::ios::left) << "DATA 3" << "<-\n";
    
    // use reset to restore
    std::cout << std::endl << std::resetiosflags(std::ios::left);

    std::cout << std::setw(10) << std::setiosflags(std::ios::fixed) << std::setprecision(2) << 102.1234 << "<-\n"
    << std::setw(10) << std::setiosflags(std::ios::scientific) << std::setprecision(3) << 102.1234 << "<-\n";




    system("pause");
    return 0;
}