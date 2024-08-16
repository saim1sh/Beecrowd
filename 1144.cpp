#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long n;
   cin >> n;
   for (int i = 1; i <= n * 2; i++)
   {
      if (i > n)
         break;
      cout << i << " " << i * i << " " << i * i * i << endl;
      cout << i << " " << i * i + 1 << " " << i * i * i + 1 << endl;
   }
}