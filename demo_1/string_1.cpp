#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <algorithm>


// declear a funciton 
std::string demo_line();
std::string demo_line(int n);

int main(int argc, char const *argv[])
{   
    // c type string need \0 in the end
    char c_string [] ={'a','s','d','f','c','\0'};
    std::cout << c_string << "\n";
    std::cout << demo_line(5) << "\n";

    // c++ string class
    std::vector<std::string> str_vec(10);
    std::string str("Im a string");
    str_vec[0] = str;
    std::cout << str.front() << " " << str.back() << "\n";
    std::cout << "the str length is: " << str.length() << "\n";
    std::cout << str << "\t" << str_vec[0] << "\n";
    std::cout << demo_line(5) << "\n";

    std::string str_2(9,'X');
    str_vec[1] = str_2;
    std::cout << str_2 << "\t" << str_vec[1] << "\n";
    std::cout << demo_line(15) << "\n";
    
    std::string str_3 = str_2.append("+ this is a append");
    std::cout << str_3 << "\n";
    str_vec[2] = str_3;
    std::cout << "\n" << demo_line(25) << "\n";
    
    std::string str_4 = str.append(str_3, 4, 10);
    str_vec[3] = str_4;
    std::cout << str_4 << "\t" << str_vec[3] << "\n";
    std::cout << "\n" << demo_line(25) << "\n";
    
    for(auto y: str_vec) std::cout << y << std::endl;
    std::cout << "\n" << demo_line(50) << "\n";

    // to reverse string 4 
    // need algorithm library
    std::reverse(str_4.begin(), str_4.end());
    std::cout << str_4 << "\n";

    std::transform(str_4.begin(),str_4.end(),str_4.begin(),::toupper);
    std::cout << str_4 << "\n";
    std::cout << "\n" << demo_line(50) << "\n";

    // std::string s("hello");
    // std::transform(s.begin(), s.end(), s.begin(),
    //                [](unsigned char c) -> unsigned char { return std::toupper(c); });
 
    // std::vector<std::size_t> ordinals;
    // std::transform(s.begin(), s.end(), std::back_inserter(ordinals),
    //                [](unsigned char c) -> std::size_t { return c; });
 
    // std::cout << s << ':';
    // for (auto ord : ordinals) std::cout << ' ' << ord;
    // }


    system("pause");
    return 0;
}

std::string demo_line()
{
    int n = 40;
    std::string str(n,'-');
    return str;
}

std::string demo_line(int n)
{
    std::string str(n,'-');
    return str;
}
