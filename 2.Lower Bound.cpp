#include <bits/stdc++.h>
using namespace std;
#define ll long long
void error()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int left = 0, right = n - 1;
    int ans = n;

    while (left <= right)
    {

        int mid = left + (right - left) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
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
