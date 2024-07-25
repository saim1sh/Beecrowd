#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    int start = min(x,y);
    int end = max(x,y);
    for(int i=start+1; i<=end-1; i++){
        if(i%5==2 || i%5==3){
            cout << i << "\n";
        }
    }
    return 0;
}