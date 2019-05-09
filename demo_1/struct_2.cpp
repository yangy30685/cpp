#include <iostream>
#include <string>
#include <sstream>

using namespace std;
#define N_MOVIES 3

// creat a data array
struct movies_t {
    string title;
    int year;
} films [N_MOVIES];

void printmovie (movies_t a);

int main() 
{
    
    for(int n = 0; n < N_MOVIES; n++)
    {
        cout << "enter title: ";
        getline(cin,films[n].title);

        cout << "enter year: ";
        string mystr;

        getline(cin, mystr);
        stringstream(mystr) >> films[n].year;
    }

    cout << "\n you have entered these movies: \n";

    for (int n = 0; n < N_MOVIES; n++ ) 
        printmovie(films[n]);   
    
    system("pause");
    return 0;
}

void printmovie (movies_t a)
{
    cout << a.title;
    cout << "(" << a.year << ")\n";
}