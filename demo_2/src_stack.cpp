#include <iostream>
#include "stack_exception.h"
#include "stack.h"

int main(int argc, char const *argv[])
{
    int i, k;
    stack<int> m;
    try
    {
        for(i = 1; i <= 6; i++)
        {
            m.push(i);
        }
        for(i = 1; i <= 7; i++)
        {
            k = m.pop();
            std::cout << k << "\n";
        }    
    }
    catch(stack_exception &p)
    {
        p.print();
    }

    system("pause");
    return 0;
}
