#include <iostream>

using namespace std;

int main()
{
    int numSmallRooms;
    int numLargeRooms;
    const int priceSmall = 25;
    const int priceLarge = 35;
    const double taxRate = 0.06;

    double total;
    double tax;

    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n"
         << endl;
    cout << "How many small rooms would you like cleaned? ";
    cin >> numSmallRooms;
    cout << "How many large rooms would you like cleaned? ";
    cin >> numLargeRooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << numSmallRooms << endl;
    cout << "Number of large rooms: " << numLargeRooms << endl;
    cout << "Price per small room: $" << priceSmall << endl;
    cout << "Price per large room: $" << priceLarge << endl;

    total = numSmallRooms * priceSmall + numLargeRooms * priceLarge;
    tax = total * taxRate;
    cout << "Cost: $" << total << endl;
    cout << "Tax: $" << tax << endl;
    cout << "===========================================" << endl;

    total += tax;
    cout << "Total estimate: $" << total << endl;
    cout << "This estimate is valid for 30 days";

    return 0;
}