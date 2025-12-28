#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> ans;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    for (int i = 2; i <= n; i += 2)
    {
        ans.push_back(i);
    }

    for (int i = 1; i <= n; i += 2)
    {
        ans.push_back(i);
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}