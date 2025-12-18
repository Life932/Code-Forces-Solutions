#include <iostream>

#define ll long long // Define ll as long long, no semicolons

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, a;

    cin >> n >> m >> a;

    ll theater_length = (n + a - 1) / a;

    ll theater_width = (m + a - 1) / a;

    ll theater_area = theater_length * theater_width;

    cout << theater_area;

    return 0;
}