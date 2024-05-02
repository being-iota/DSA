#include <iostream>
using namespace std;

int main()
{
    int firstnum, secondnum, quotient, remainder;

    cout << "Enter First number: ";
    cin >> firstnum;

    cout << "Enter Second number: ";
    cin >> secondnum;

    quotient = firstnum / secondnum;
    remainder = firstnum % secondnum;
    cout << firstnum << "/" << secondnum << "=" << quotient << " with a remainder of " << remainder;

    return 0;
}
