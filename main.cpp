#include <iostream>

using namespace std;

int getNumber()
{
    int x;
    cout << "Write your favourite number: ";
    cin >> x;
    return x;
}

int main()
{
    int x = getNumber();
    cout << "Thank you bro!" << endl
         << "I like this number too!" << endl;
    return 0;
}
