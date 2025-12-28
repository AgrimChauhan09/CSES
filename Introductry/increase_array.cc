#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll diff = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            diff += arr[i - 1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout<<diff<<endl;
}