#include <iostream>

int main()
{
    int num;

    std::cout << "Enter your favorite number between 1 and 100:";
    std::cin >> num;
    std::cout << "Amazing!! That's my favorite number too!";
    std::cout << "\nNo really!!, " << num << " is my favorite number!" << std::endl;
    return 0;
}