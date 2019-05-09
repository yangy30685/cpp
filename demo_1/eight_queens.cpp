#include<iostream>
using namespace std;

static int gEightQueen[8] = { 0 }, gCount = 0;

// print out all solution
void print()
{
    for (int i = 0; i < 8; i++)
    {   
        int inner;
        for (inner = 0; inner < gEightQueen[i]; inner++) cout << "[ ]";
        cout << "[X]";
        for (inner = gEightQueen[i] + 1; inner < 8; inner++) cout << "[ ]";
        cout << endl;
    }
    cout << "-----------------------------------\n";
}

// validate the queens' position
int check_pos_valid(int loop, int value)
{
    int index;
    int data;
    for (index = 0; index < loop; index++)
    {
        data = gEightQueen[index];
        if (value == data)
            return 0;
        if ((index + data) == (loop + value))
            return 0;
        if ((index - data) == (loop - value))
            return 0;
    }
    return 1;
}

void eight_queen(int index)
{
    for (int loop = 0; loop < 8; loop++)
    {
        if (check_pos_valid(index, loop))
        {
            gEightQueen[index] = loop;
            if (7 == index)
            {
                gCount++, print();
                gEightQueen[index] = 0;
                return;
            }
            eight_queen(index + 1);
            gEightQueen[index] = 0;
        }
    }
}

int main(int argc, char *argv[])
{
    eight_queen(0);
    cout << "total=" << gCount << endl;
    system("pause");
    return 0;
}