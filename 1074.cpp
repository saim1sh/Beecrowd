#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
         int x;
        cin >> x;
        if(x%2==0 && x<0)cout<< "EVEN NEGATIVE" << "\n";
        else if(x%2==0 && x>0)cout<< "EVEN POSITIVE" << "\n";
        else if(x==0)cout<< "NULL"<< "\n";
        else if(x%2!=0 && x<0)cout<< "ODD NEGATIVE"<< "\n";
        else if(x%2!=0 && x>0)cout<< "ODD POSITIVE"<< "\n";
    }

    return 0;
}