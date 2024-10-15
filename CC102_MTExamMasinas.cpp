#include <iostream>

using namespace std;

int main ()
{
	double sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	int totalCostPhp, sugarCostPhp, riceCostPhp, sardinesCostPhp, coffeeCostPhp, milkCostPhp;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float USDToPhp = 57.46;
	float PoundToPhp = 75.06;

	//get the price of each product
	cout << "Enter the Price of sugar: ";
	cin >> sugarPriceUSD;
	cout << "Enter the Price of rice: ";
	cin >> ricePricePound;
	cout << "Enter the Pound of sardines: ";
	cin >> sardinesPricePound;
	cout << "Enter the Price of coffee: ";
	cin >> coffeePriceUSD;
	cout << "Enter the Price of milk: ";
	cin >> milkPriceUSD;

	//get quantity of each product
	cout << "Enter the Quantity of sugar: ";
	cin >> sugarQty;
	cout << "Enter the Quantity of rice: ";
	cin >> riceQty;
	cout << "Enter the Quantity of sardines: ";
	cin >> sardinesQty;
	cout << "Enter the Quantity of coffee: ";
	cin >> coffeeQty;
	cout << "Enter the Quantity of milk: ";
	cin >> milkQty;

	//Calculate
	float sugarCostPHP = (sugarPriceUSD * sugarQty);
	float riceCostPHP = (ricePricePound * riceQty);
	float sardinesCostPHP = (sardinesPricePound * sardinesQty);
	float coffeeCostPHP = (coffeePriceUSD * coffeeQty);
	float milkCostPHP = (milkPriceUSD * milkQty);
	float totalCostPHP = (sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP);

	//Display

	cout << "\n--- Purchase Details ---" << endl;
	cout << "Item: Sugar, Quantity: " << sugarQty << "; Total Cost: PHP " << sugarCostPHP << endl;
	cout << "Item: Rice, Quantity: " << riceQty << "; Total Cost: PHP " << riceCostPHP << endl;
	cout << "Item: Sardines, Quantity: " << sardinesQty << "; Total Cost: PHP " << sardinesCostPHP << endl;
	cout << "Item: Coffee, Quantity: " << coffeeQty << "; Total Cost: PHP " << coffeeCostPHP << endl;
	cout << "Item: Milk, Quantity: " << milkQty << "; Total Cost: PHP " << milkCostPHP << endl;
	cout << "\nTotal amount to be paid in PHP: PHP " << totalCostPHP << endl;

	return 0;
}

