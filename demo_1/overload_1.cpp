#include <iostream>
#include <vector>

class obj
{
    static int i,j;
public:
    void f() const {std::cout << i++ << "\n";}
    void g() const {std::cout << j++ << "\n";}
};

int obj::i = 10;
int obj::j = 20;

class obj_vector
{
    // a container for obj address
    std::vector<obj*> a;
public:
    
    // pointe to be parameter
    void add(obj *b)
    {
        a.push_back(b);
    }
    friend class obj_pointer;
};

class obj_pointer
{
    int index;
    obj_vector oc;
public:
    obj_pointer(obj_vector &objc)
    {
        index = 0;
        oc = objc; 
    }

    // ++x
    bool operator++()
    {
        if(index >= oc.a.size()-1) return false;
        if(oc.a[++index] == 0) return false;
        return true;
    }

    // x++
    bool operator++(int)
    {
        return operator++();
    }

    obj *operator->() const
    {
        if(!oc.a[index])
        {
            std::cout << "zero value\n";
            return (obj*)0;
        }
    return oc.a[index];  
    }
};

int main(int argc, char const *argv[])
{
    const int sz = 4;
    obj o[sz];
    obj_vector o_abc;
    for(int i = 0; i < sz; i++) 
    {
        o_abc.add(&o[i]);
    }
    obj_pointer sp(o_abc);

    do 
    {
        sp->f();
        sp->g();
    }while(sp++);

    system("pause");
    return 0;
}
