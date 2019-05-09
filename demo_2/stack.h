#ifndef STACK
#define STACK

#include <iostream>
#include "stack_exception.h"
const int MAX = 100;

template <class T>
class stack 
{
    public:
        stack();
        ~stack();
        T pop();
        void push(T x);
        int s_empty();
        int s_full();
    private:
        T s[MAX];
        int top;
};

template <class T>
stack<T>::stack() 
{
    top = -1;
    std::cout << "creat a stack\n";
}

template <class T>
stack<T>::~stack()
{
    std::cout << "stack is disappeared\n";
}

template <class T>
T stack<T>::pop()
{
    if(top == -1) 
    {
        stack_exception_empty temp;
        throw temp;
    } 
    return s[top--];
}

template <class T>
void stack<T>::push(T x)
{
    if(top == MAX-1) 
    {
        stack_exception_full temp;
        throw temp;
    }
    s[++top] = x;
}

template <class T>
int stack<T>::s_empty()
{
    int flag;
    // jugde the value of top then assign to flag
    flag = top == -1 ? 1:0;
    return flag;
}

template <class T>
int stack<T>::s_full()
{
    int flag;
    flag = top == MAX-1?1:0;
    return flag;
}
#endif