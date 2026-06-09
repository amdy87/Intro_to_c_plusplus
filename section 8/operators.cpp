#include <iostream>

using namespace std;

int main()
{
    int change{};
    int dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    cout << "Enter the amount in cents: " << endl;
    cin >> change;

    change -= 100 * (dollars = change / 100);
    change -= 25 * (quarters = change / 25);
    change -= 10 * (dimes = change / 10);
    change -= 5 * (nickels = change / 5);
    change -= 1 * (pennies = change);

    cout << "You can provide this change as follows: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
}