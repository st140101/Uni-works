#include <iostream>
using namespace std;

int main()
{
	const int encryption_key = 51223;
	
	int value = 0;
	cout << "Enter value: \n";
	cin >> value;
    
	int encrypted = value ^ encryption_key;
	cout << "Your encrypted value is: " << encrypted << endl;
	
	int user_key;
	cout << "Enter key: \n" << endl;
	cin >> user_key;

	int decrypted = value ^ encryption_key;
	
	if (user_key == encryption_key)
	{
		cout << "Your decrypted value was: " << decrypted << endl;
	}
	else
	{
		cout << "The key you entered is incorrect." << endl;
	}
	
	return 0;
}