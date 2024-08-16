#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a, b;
   cin >> a >> b;
   int sum_notdev_13 = 0;
   for (int i = min(a, b); i <= max(a, b); i++)
   {
      if (i % 13 != 0)
      {
         sum_notdev_13 += i;
      }
   }
   cout << sum_notdev_13 << endl;
   return 0;
}