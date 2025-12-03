#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findFirst(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    int first = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            first = mid;
            right = mid - 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return first;
}

int findLast(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    int last = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            last = mid;
            left = mid + 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return last;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int first = findFirst(arr, n, target);
    int last = findLast(arr, n, target);

    cout << first << " " << last << endl;

    return 0;
}
