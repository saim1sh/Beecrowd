#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   while (n--)
   {
      float x[3];
      for (int i = 0; i < 3; i++)
      {
         cin >> x[i];
      }
      float total_cnt = (x[0] * 2) + (x[1] * 3) + (x[2] * 5);
      cout << fixed << setprecision(1) << total_cnt / (float)10 << endl;
   }
   return 0;
}
