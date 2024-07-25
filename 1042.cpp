#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr(3);
    
    for(int i=0; i<3; i++)
    {
        cin >> arr[i];
    }
    vector<int> arr_copy=arr;
    sort(arr.begin(),arr.end());
    for(int i=0; i<3; i++)
    {
        cout << arr[i] <<endl;
    }
    cout << "\n";
    for(int i=0; i<3; i++)
    {
        cout << arr_copy[i] << endl;
    }
    
    return 0;
}


