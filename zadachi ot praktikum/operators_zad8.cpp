#include <iostream>
using namespace std;

int main()
{
	int apples_count, oranges_count, bananas_count = 0;
	double apples_price, oranges_price, bananas_price = 0;
	double Asum, Osum, Bsum = 0; //ASum, OSum and Bsum refer respectively to the total sum of apples/oragnes/bananas each.
	double total = 0;
	cout << "Enter how many apples you'd like to buy: "; cin >> apples_count; cout << " for the price of: "; cin >> apples_price;
	cout << "Enter how many oranges you'd like to buy: "; cin >> oranges_count; cout << " for the price of: "; cin >> oranges_price;
	cout << "Enter how many bananas you'd like to buy: "; cin >> bananas_count; cout << " for the price of: "; cin >> bananas_price;
	Asum = apples_count * apples_price;
	Osum = oranges_count * oranges_price;
	Bsum = bananas_count * bananas_price;
	total = Asum + Osum + Bsum;
	cout << "You've bought " << apples_count << " apples for " << apples_price << ", " << oranges_count << " oranges for " << oranges_price << " and " << bananas_count << " bananas for " << bananas_price << endl;
	cout << "Your total is: " << total;	
	return 0;
}