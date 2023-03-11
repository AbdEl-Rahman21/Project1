#include <iostream>
#include <array>
#include <cmath>

using namespace std;

array<int, 4> serialNum = { 0 };
array<int, 4> quantity = { 0 };
array<int, 4> totalSales = { 0 };

void InputProducts();
void ProductsLessThan(int quant);
int GetIndexOfHighestSales();

int main() {
	int quant = 0;

	cout << "Please enter the four products :" << endl;

	InputProducts();

	cout << "Serial Numbers of the Products that have less quantity than a value entered by the user :" << endl;
	cout << "Please enter the quantity : ";
	cin >> quant;

	ProductsLessThan(quant);

	cout << "Product with the highest sales :\n" << "Product " << GetIndexOfHighestSales() << endl;

	return 0;
}

void InputProducts() {
	for (int i = 0; i < 4; ++i) {
		cout << "Enter values of product #" << i + 1 << endl;
		cout << "Serial number : ";
		cin >> serialNum[i];
		cout << "Quantity : ";
		cin >> quantity[i];
		cout << "Sales : ";
		cin >> totalSales[i];
		//********
		//$$$$$$$$
	}
}

void ProductsLessThan(int quant) {
	for (int i = 0; i < 4; ++i) {
		if (quantity[i] < quant) {
			cout << "Product " << serialNum[i] << endl;
		}
	}

	//test
}

int GetIndexOfHighestSales() {
	int maxSales = 0;
	int index = 0;

	for (int i = 0; i < 4; ++i) {
		if (totalSales[i] > maxSales) {
			maxSales = totalSales[i];
			index = i + 1;
		}
	}

	return index;
}

//git test
//test
