
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstring>

class c_point
{
private:
    int xp, yp;
public:
    static int value;
    static int num;
    c_point(int x, int y);
    ~c_point();
};

int c_point::value = 0;
int c_point::num = 0;

c_point::c_point(int x, int y)
{
    xp = x;
    yp = y;
    value++;
    
    std::cout <<"this is constructor used: " 
            << value
            <<" times\n";
}

c_point::~c_point()
{
    num++;
    std::cout << "this is deconstructor used: " 
            << num
            <<"\n";
}


class c_rect
{
private:
    c_point mpt1;
    c_point mpt2;
public:
    c_rect(int x1,int x2);
    ~c_rect();
};
// parameter list
c_rect::c_rect(int x1,int x2):mpt1(x1,x2), mpt2(x1,x2)
{
    std::cout << "use constructor rect \n";
}

c_rect::~c_rect()
{
    std::cout<<"use deconstructor rect\n";
}

int main(int argc, char const *argv[])
{
    c_rect p(1,2);
    std::cout << "mian function\n";

    system("pause");
    return 0;
}