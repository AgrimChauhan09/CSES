#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;

    vector<ll> result;
    result.push_back(n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
        result.push_back(n);
    }

    for (auto x : result)
    {
        cout << x << " ";
    }
    cout << endl;
}
