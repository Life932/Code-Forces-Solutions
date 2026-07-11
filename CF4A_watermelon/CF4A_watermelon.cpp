#include <bits/stdc++.h> //Includes all the libraries

using namespace std; //Time efficiency without having to write std with each instance

int main() {

  ios::sync_with_stdio(0); // Syncing with scanf and printf is turned off for faster execution
  cin.tie(0); //Must be added with the int main()

    int w; //Declaring the weight of the watermelon
    cin >> w; //Receiving inputs
    
 (w%2 == 0 && w>2)? cout << "YES" : cout << "NO"; //Using a ternary operator to shorten the lines of code that need to be written

    return 0; //To verify if the code executed
}
