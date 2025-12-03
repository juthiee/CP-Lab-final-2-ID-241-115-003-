#include <bits/stdc++.h>
using namespace std;
#define ll long long
void error()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int target;
    cin >> target;

    int left = 0, right = n - 1;
    int ans = -1;

    // Binary Search
    while (left <= right)
    {

        int mid = left + (right - left) / 2;

        if (a[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (a[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        error();
    }
}
