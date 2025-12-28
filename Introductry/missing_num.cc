#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll expected_sum = n * (n + 1) / 2;
    ll actual_sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;
        actual_sum += x;
    }

    cout << (expected_sum - actual_sum) << endl;

    return 0;
}
