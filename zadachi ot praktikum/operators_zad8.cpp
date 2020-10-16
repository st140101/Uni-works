#include <iostream>
using namespace std;

int main()
{
	int apples_count, oranges_count, bananas_count = 0;
	double apples_price, oranges_price, bananas_price = 0;
	double apples_sum, oranges_sum, bananas_sum = 0;
	double total = 0;
	

	cout << "Enter how many apples you'd like to buy: ";
	cin >> apples_count; 
	cout << " for the price of: ";
	cin >> apples_price;

	cout << "Enter how many oranges you'd like to buy: ";
	cin >> oranges_count; 
	cout << " for the price of: "; 
	cin >> oranges_price;
	
	cout << "Enter how many bananas you'd like to buy: "; 
	cin >> bananas_count; 
	cout << " for the price of: ";
	cin >> bananas_price;
	

	apples_sum = apples_count * apples_price;
	oranges_sum = oranges_count * oranges_price;
	bananas_sum = bananas_count * bananas_price;
	
	total = apples_sum + oranges_sum + bananas_sum;
	

	cout << "You've bought " << apples_count << " apples for " << apples_sum << endl;
	cout << "You've bought " << oranges_count << " oranges for " << oranges_sum << endl;
	cout << "You've bought " << bananas_count << " bananas for " << bananas_sum << endl;
	cout << "Your total is: " << total;	
	
	return 0;
}
