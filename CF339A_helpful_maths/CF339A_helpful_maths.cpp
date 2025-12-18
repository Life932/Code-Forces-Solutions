#include <iostream>
#include <string>
#include <vector>    //To include std::vector
#include <algorithm> //To include std::sort

using namespace std;

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();

    string s;
    cin >> s;

    vector<int> numbers;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            numbers.push_back(s[i] - '0');
        }
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); ++i)
    {
        cout << numbers[i];

        if (i < numbers.size() - 1)
        {
            cout << '+';
        }
        }
    
    cout << "\n";

    return 0;
}