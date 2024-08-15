#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int count = n;
   if (count % 2 == 0)
   {
      count += 1;
   }
   else
   {
      count = n;
   }
   for (int i = 1; i <= 6; i++)
   {
      cout << count << endl;
      count += 2;
   }
   return 0;
}