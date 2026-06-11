#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phrase;

    cout << "Enter the string you would like to use to construct the pyramid: ";
    cin >> phrase;

    int mid = phrase.size() - 1;
    for (int i = 0; i < mid + 1; i++)
    {
        string newLine((mid + 1) * 2, ' ');
        newLine[mid] = phrase[i];

        for (int j = 0; j < i; j++)
        {
            newLine[mid - i + j] = phrase[j];
            newLine[mid + i - j] = phrase[j];
        }

        cout << newLine << endl;
    }

    return 0;
}