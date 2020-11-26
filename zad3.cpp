/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Siyana Todorova
* @idnumber 62559
* @task 3
* @compiler VC
*
*/

#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> combined;

int UserInput() {
    int inp;
    const int from = 3, to = 1000;
    do {
        cin >> inp;
    } while (inp < from || inp > to);

    return inp;
}

int digitsInput() {
    int inp;
    const int min = 0;
    do {
        cin >> inp;
    } while (inp < min);

    return inp;
}
bool searchVec(vector<int> value) { // check if element exists
    for (int i = 0; i < combined.size(); i++) {
        if (combined[i] == value) {
            return true;
        }
        else {
            for (int i = 0; i < combined.size(); ++i) {
                for (int j = 0; j < combined[i].size(); ++j) {
                    cout << combined[i][j] << " ";
                    cout << endl;
                }
            }
        }
    }
    return false;
}


bool is_pally(const vector<int> v) {
    vector<int> reverse;
    for (int i = v.size() - 1; i >= 0; i--) {
        reverse.push_back(v[i]);
    }
    return v == reverse;
}

void checkPalin(vector<int> v) {

    if (v.size() < 3) {
        return;
    }

    if (is_pally(v)) {

        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;

        if (searchVec(v) == false) {
            combined.push_back(v);
        }

    }
    vector<int> left_side = v, right_side = v;

    left_side.erase(left_side.begin());
    right_side.pop_back();


    checkPalin(left_side);
    checkPalin(right_side);
    is_pally(v);
}

int main() {
    int numOfdigits = UserInput();

    vector<int> enteredDigits;

    for (int i = 0; i < numOfdigits; i++) {

        int temp = digitsInput();
        enteredDigits.push_back(temp);
    }
    checkPalin(enteredDigits);
    for (int i = 0; i < combined.size(); ++i) {
        for (int j = 0; j < combined[i].size(); ++j) {
            cout << combined[i][j] << " ";
            cout << endl;
        }
    }
    cout << "\npalindrome count: ";

    cout << "* " << combined.size() << "*" << endl;
    return 0;
}
