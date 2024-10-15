#include <iostream>

using namespace std;

int main ()
{
	double sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	double usdToPhp, poundToPhp;
	int totalCostPhp, sugarCostPhp, riceCostPhp, sardinesCostPhp, coffeeCostPhp, milkCostPhp;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float sugarPricePhp=0.0, ricePricePhp=0.0,sardinesPricePhp=0.0;
	float Php=0.0;

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
	sugarPricePhp = sugarPriceUSD * Php;
	ricePricePhp = ricePricePound * Php;
	sardinesPricePhp = sardinesPricePound * Php;
	totalCostPhp = sugarCostPhp + riceCostPhp + sardinesCostPhp + coffeeCostPhp + milkCostPhp;

	//Display
	
	return 0;
}

