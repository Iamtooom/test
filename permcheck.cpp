#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(vector<int> &A)
{
    int result;
    int answer = (1 + A.size()) * A.size() / 2;
    int total = 0;
    unordered_map<int, int> intCount;

    for (int num : A)
    {
        intCount[num]++;
    }
    for (const auto &pair : intCount)
    {
        if (pair.second > 1)
        {
            result = 0;
            return result;
        }
    }

    for (int i = 0; i < A.size(); i++)
    {
        total = total + A[i];
    }

    if (answer == total)
    {
        result = 1;
        return result;
    }
    else
    {
        result = 0;
        return result;
    }
}

int main()
{
    int number;
    int totalNumber;
    cout << "Please input the total number of elements in array A: ";
    cin >> totalNumber;
    vector<int> A;

    for (int i = 0; i < totalNumber; i++)
    {
        cout << "Please input a number in array A: ";
        cin >> number;
        A.push_back(number);
    }

    int result = solution(A);
    if (result == 1)
    {
        cout << "A is a permutation.";
    }
    else if (result == 0)
    {
        cout << "A isn't a permutation.";
    }
    else
    {
        return 0;
    }
}