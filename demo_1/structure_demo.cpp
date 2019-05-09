#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t
{
    string title;
    int year;
} mine, yours;

void printmovie (movies_t movie);

int main() 
{
    string mystr;
    mine.title = "2001 a space odyssey";
    mine.year = 1968;

    cout << "enter title: ";
    getline(cin, yours.title);

    cout << "enter year: ";
    
    // cannot handle yours.year directly by getline
    getline(cin, mystr);
    stringstream(mystr) >> yours.year;

    cout << "my favourite movie is :\n";
    printmovie(mine);

    cout << "and yours is : \n";
    printmovie(yours);

    system("pause");
    return 0;
}

void printmovie (movies_t a)
{
    cout << a.title;
    cout << "(" << a.year <<")\n";
}