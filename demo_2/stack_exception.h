#ifndef STACK_EXCEPTION
#define STACK_EXCEPTION

#include <iostream>

class stack_exception
{
public:
    virtual void print() = 0;
};

class stack_exception_empty:public stack_exception
{
public:    
    void print();
};

class stack_exception_full:public stack_exception
{
public:
    void print();
};

void stack_exception_empty::print() 
{
    std::cout << "---Empty---!!\n"; 
}

void stack_exception_full::print() 
{
    std::cout << "---Full---!!\n";
}

#endif