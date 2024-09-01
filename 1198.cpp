#include <bits/stdc++.h>
using namespace std;
#define int long long
int a, b;
signed main()
{
   while (cin >> a >> b)
   {
      int num1 = max(a, b);
      int num2 = min(a, b);
      int diff = num1 - num2;
      cout << diff << endl;
   }
   
}