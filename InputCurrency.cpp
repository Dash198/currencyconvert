#include "InputCurrency.h"
#include <iostream>
#include "OutputCurrency.h"
using namespace std;
double a = 0, c = 0;
OutputCurrency oc;
void InputCurrency::euro()
{
	cout << "Entering currency in Euros\nEnter the amount\n";
	cin >> a;
	cout << "Press\n1 to convert to Rupees\n2 to convert to Dollars\n";
	cin >> c;
	if (c == 1)
		oc.er(a);
	else if (c == 2)
		oc.ed(a);
	else
		cout << "Wrong Input!\n";
}

void InputCurrency::dollars()
{
	cout << "Entering currency in Dollars\nEnter the amount\n";
	cin >> a;
	cout << "Press\n1 to convert to Rupees\n2 to convert to Euros\n";
	cin >> c;
	if (c == 1)
		oc.dr(a);
	else if (c == 2)
		oc.de(a);
	else
		cout << "Wrong Input!\n";
}

void InputCurrency::rupees()
{
	cout << "Entering currency in Rupees\nEnter the amount\n";
	cin >> a;
	cout << "Press\n1 to convert to Dollars\n2 to convert to Euros\n";
	cin >> c;
	if (c == 1)
		oc.rd(a);
	else if (c == 2)
		oc.re(a);
	else
		cout << "Wrong Input!\n";
}
