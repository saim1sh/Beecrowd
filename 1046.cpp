#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b;
    c=(24-a)+b;
    if(a>=b){
        cout << "O JOGO DUROU " << c <<  " HORA(S)" << "\n";
    }
    else if(b>a){
        cout << "O JOGO DUROU " << b-a <<  " HORA(S)" << "\n";
    }
    return 0;
}