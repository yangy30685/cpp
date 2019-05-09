#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct m_t {
    string title;
    int year;
};

int main()
{
    m_t a_movie;
    m_t *p_movie;
    p_movie = & a_movie;

    cout << "enter title: \n";
    getline(cin, p_movie->title);
    cout << "enter year: \n";
    
    // getline(cin, p_movie->year) error! interger is not ok!!!
    // creat a container
    string mystr;
    getline(cin, mystr);
    stringstream (mystr) >> p_movie->year;

    cout << "\n you have entered: \n";
    cout << p_movie->title;
    cout << "(" << p_movie->year << ")\n" ;

    system("pause");
    return 0;
}