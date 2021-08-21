#include <bits/stdc++.h>
using namespace std;
long long catalan(int n)
{
    if (n <= 1)
        return 1;
    long long ans = 0;
    for (int i = 0; i < n; i++)
        ans += catalan(i)*catalan(n-i-1);
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << catalan(n) << endl;
    }
    return 0;
}
