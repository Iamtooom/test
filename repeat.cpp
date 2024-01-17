#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    string input;
    cout << "Please input word: ";
    cin >> input;

    unordered_map<char, int> charCount;

    for (char ch : input)
    {
        charCount[ch]++;
    }

    for (const auto &pair : charCount)
    {
        if (pair.second > 1)
        {
            cout << pair.first << " ";
        }
    }

    return 0;
}