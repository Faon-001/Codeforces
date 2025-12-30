#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

    string name;
    cin >> name;

    name.at(0) = toupper(name.at(0));

    cout << name;

    return 0;
}