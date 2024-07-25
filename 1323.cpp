#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    while(cin >> n){
        if(n==0)break;
        int total_sqr_num=0;
        for(int i=1; i<=n; i++)
        {
            total_sqr_num+=pow(i,2);
        }
        cout<<total_sqr_num<<endl;
    }
    return 0;
}