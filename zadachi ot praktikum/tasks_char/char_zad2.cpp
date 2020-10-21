#include <iostream>
using namespace std;

int main()
{
    char Letter = 'a';
    cout << "Enter a letter:";
    cin >> Letter;

    const int lowercase_subtract = 96;
    int lowercase_position = Letter - lowercase_subtract;

    if (Letter >= 'a' && Letter <= 'z')
    {
        cout << "The letter " << Letter << " is in " << lowercase_position << " place in the alphabet." << endl;
    }

    const int uppercase_subtract = 64;
    int uppercase_position = Letter - uppercase_subtract;

    if (Letter >= 'A' && Letter <= 'Z')
    {
        cout << "The letter " << Letter << " is in " << uppercase_position << " place in the alphabet." << endl;
    }

    return 0;
}