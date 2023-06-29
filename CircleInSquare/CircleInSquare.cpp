#include <iostream>
#include "CircleInASquare.h"

int main()
{
    
    CircleInASquare cs;
    cs.Show();
    cout << endl << "--------------" << endl;
    (Circle(cs)).Show();
    cout << endl << "-------------" << endl;
    static_cast<Square>(cs).Show();
}