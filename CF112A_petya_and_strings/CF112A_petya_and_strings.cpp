#include <iostream> // For input and output
#include <string> // For using string class
#include <cctype> // For tolower function
//#include <algorithm> To use transform function if needed

using namespace std;

void fast_io() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{

    fast_io();

    string s1, s2;

    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    if (s1 < s2)
    {
        cout << "-1" << "\n";
    }

    else if (s1 > s2)
    {
        cout << "1" << "\n";
    }

    else
    {
        cout << "0" << "\n";
    }

    return 0;
}