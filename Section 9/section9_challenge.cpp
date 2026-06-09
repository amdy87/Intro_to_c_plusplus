#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> list{};
    int size = 0;
    int smallest = 0;
    int largest = 0;
    bool quit = false;

    while (!quit)
    {
        char choice{};
        cout << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - quit" << endl
             << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'p')
        {
            choice = 'P';
        }
        else if (choice == 'a')
        {
            choice = 'A';
        }
        else if (choice == 'm')
        {
            choice = 'M';
        }
        else if (choice == 's')
        {
            choice = 'S';
        }
        else if (choice == 'l')
        {
            choice = 'L';
        }
        else if (choice == 'q')
        {
            choice = 'Q';
        }

        int x = 0;
        double avg = 0.0;
        switch (choice)
        {
        case 'P':
            /* code */
            if (size == 0)
            {
                cout << "[] - the list is empty";
            }
            else
            {
                cout << "[ ";
                for (int i = 0; i < size; i++)
                {
                    cout << list.at(i) << " ";
                }
                cout << "]" << endl;
            }
            break;

        case 'A':

            cout << "What number would you like to add to the list: ";
            cin >> x;
            list.push_back(x);
            cout << x << " added" << endl;

            size++;
            if (size == 1)
            {
                largest = x;
                smallest = x;
            }
            else
            {
                if (largest < x)
                {
                    largest = x;
                }
                if (smallest > x)
                {
                    smallest = x;
                }
            }
            break;

        case 'M':
            if (size == 0)
            {
                cout << "Unable to calculate the mean - no data" << endl;
                break;
            }

            for (int i : list)
            {
                avg += i;
            }

            avg /= size;
            cout << "Mean: " << avg << endl;
            break;

        case 'S':
            if (size == 0)
            {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            }
            else
            {
                cout << "The smallest number is " << smallest << endl;
            }
            break;

        case 'L':
            if (size == 0)
            {
                cout << "Unable to determine the largest number - list is empty" << endl;
            }
            else
            {
                cout << "The largest number is " << largest << endl;
            }
            break;

        case 'Q':
            quit = true;
            break;

        default:
            cout << "Unknown selection, please try again" << endl;
            break;
        }
    }

    return 0;
}