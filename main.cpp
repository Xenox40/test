#include <iostream>

using namespace std;

int getNumber()
{
    int x;
    cout << "Write your favourite number: ";
    cin >> x;
    return x;
}

string getName()
{
    string name;
    cout << "Write your name: ";
    cin >> name;
    return name;
}

int main()
{
    string name = getName();
    int x = getNumber();
    cout << "Thank you bro!" << endl
         << "I like this number too " << name << "!" << endl;
    return 0;
}
