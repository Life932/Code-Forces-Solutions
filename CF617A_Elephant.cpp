#include <bits/stdc++.h>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x;
    
    cin >> x;
    
    (x%5==0)? cout << x/5 : cout << x/5 + 1; //Number of steps required, +1 incase there's a remainder since it is smaller than 5
    
    return 0;
    
    
}
