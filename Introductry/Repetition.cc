#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    long long maxx = 1;

    long long count = 1;

    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i - 1] == s[i])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        maxx = max(maxx, count);
    }

    cout << maxx << endl;

    return 0;
}