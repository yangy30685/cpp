#include <iostream>

class box
{
public:
    void print()
    {
        std::cout << this->length <<" "
                << this->breadth <<" "
                << this->height <<" "
                <<"\n";
    }
    
    void setLength(double len)
    {
        length = len;
    }

    void setBreadth(double bre)
    {
        breadth = bre;
    }

    void setHeight( double hei )
    {
        height = hei;
    }
    
    // operator overload is function in fact
    box operator- ();
private:
      double length;     
      double breadth;     
      double height;      
};
    // overload operator
box box::operator- ()
    {
        box b_base;
        b_base.length = -(this->length) ;
        b_base.breadth = -(this->breadth);
        b_base.height = -(this->height);
        
        return b_base;
    }

int main(int argc, char const *argv[])
{
    box b1;
    box b2;
    box b3;

    b1.setLength(1.1);
    b1.setBreadth(2.2);
    b1.setHeight(3.3);

    b2.setLength(10.1);
    b2.setBreadth(20.1);
    b2.setHeight(30.1);

    b1.print();
    b2.print();
    b3=b1;
    
    b3.print();

    system("pause");
    return 0;
}
