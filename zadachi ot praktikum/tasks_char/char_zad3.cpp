#include <iostream>
using namespace std;

int main()
{
    char First_Letter = 'a';
    cout << "Enter letter one:";
    cin >> First_Letter;

    char Second_Letter = 'b';
    cout << "Enter letter two:";
    cin >> Second_Letter;

    cout << (First_Letter > Second_Letter ? (int)First_Letter : (int)Second_Letter);

    return 0;
}