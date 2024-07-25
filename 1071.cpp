#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int start = min(x, y);
    int end = max(x, y);
    int oddsum = 0;
    for (int i = start + 1; i < end; i++)
    {
        if (i % 2 != 0)
        {
            oddsum += i;
        }
    }
    cout << oddsum << "\n";
    return 0;
}