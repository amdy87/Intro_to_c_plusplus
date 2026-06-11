#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgijhqdyvtkfuompciasr"};

    string phrase;

    cout << "Enter the phrase you would like to encrypt: ";
    getline(cin, phrase);

    int loc = 0;
    string encryptedPhrase;
    for (char i : phrase)
    {
        if (i == ' ')
        {
            encryptedPhrase += i;
        }
        else
        {
            loc = alphabet.find(i);
            encryptedPhrase += key[loc];
        }
    }

    cout << "The encrypted phrase is: " << encryptedPhrase << endl;

    loc = 0;
    string decryptedPhrase;
    for (char i : encryptedPhrase)
    {
        if (i == ' ')
        {
            decryptedPhrase += i;
        }
        else
        {
            loc = key.find(i);
            decryptedPhrase += alphabet[loc];
        }
    }

    cout << "The decrypted phrase is: " << decryptedPhrase << endl;

    return 0;
}