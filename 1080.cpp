#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[100];
   for (int i = 0; i < 100; i++)
   {
      cin >> arr[i];
   }
   int max = *max_element(arr, arr + 100);
   int index = distance(arr, max_element(arr, arr + 100));
   cout << max << endl;
   cout << index + 1 << endl;
   // int *max = max_element(arr, arr + 100);
   // int index = distance(arr, max);
   // cout << *max << endl;
   // cout << index + 1 << endl;
   return 0;
}