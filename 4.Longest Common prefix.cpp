#include <bits/stdc++.h>
using namespace std;
#define ll long long
string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return "";

    string prefix = "";
    int n = strs.size();

    for (int i = 0; i < strs[0].size(); i++)
    {
        char c = strs[0][i];
        bool match = true;
        for (int j = 1; j < n; j++)
        {
            if (i >= strs[j].size() || strs[j][i] != c)
            {
                match = false;
                break;
            }
        }

        if (match)
            prefix += c;
        else
            break;
    }

    return prefix;
}
int main()
{
    int n;
    cin >> n;
    vector<string> strs(n);
    for (int i = 0; i < n; i++)
        cin >> strs[i];

    string ans = longestCommonPrefix(strs);
    cout << ans;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
    }
}
