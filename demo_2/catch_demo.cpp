#include<iostream>       
#include<cstdlib>

double fuc(double x, double y)                  
{   
    if(y == 0)
    {
        throw y;                       
    }

    return x/y;                                   
}

int main(int argc, char *argv[])
{
    double res;
    try                                            
    {
        res = fuc(2,3);
        std::cout << "The result of x/y is : " << res << std::endl;
        res=fuc(4,0);                                
    }
    catch(double)                                    
    {
        std::cerr << "error of dividing zero.\n";  
    }

    system("pause");
    return 0;
}