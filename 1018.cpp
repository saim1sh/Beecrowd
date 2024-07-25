#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << n << "\n";
    if (n % 2 == 0)
    {
        int x = n / 100;
        cout << x << " nota(s) de R$ 100,00\n";
        if (n % 100 >= 50)
        {
            int y = n % 100;
            y = y / 50;
            cout << y << " nota(s) de R$ 50,00\n";
        }
        else
            cout << "0 nota(s) de R$ 50,00\n";
        if (n % 100 % 50 >= 20)
        {
            int m = n % 50;
            m = m / 20;
            cout << m << " nota(s) de R$ 20,00\n";
        }
        else
            cout << "0 nota(s) de R$ 20,00\n";
        if (n % 100 % 50 % 20 >= 10)
        {
            int p = n % 20;
            p = p / 10;
            cout << p << " nota(s) de R$ 10,00\n";
        }
        else
            cout << "0 nota(s) de R$ 10,00\n";
        if (n % 100 % 50 % 20 % 10 >= 5)
        {
            int q = n % 10;
            q = q / 5;
            cout << q << " nota(s) de R$ 5,00\n";
        }
        else
            cout << "0 nota(s) de R$ 5,00\n";
        if (n % 100 % 50 % 20 % 10 % 5 >= 2)
        {
            int r = n % 5;
            r = r / 2;
            cout << r << " nota(s) de R$ 2,00\n";
        }
        else
            cout << "0 nota(s) de R$ 2,00\n";
        if (n % 100 % 50 % 20 % 10 % 5 % 2 >= 1)
        {
            int s = n % 2;
            if (s == 0)
                cout << "1 nota(s) de R$ 1,00\n";
        }
        if (n % 100 % 50 % 20 % 10 % 5 % 2 == 0)
        {
            int s = n % 2;
            if (s == 0)
                cout << "0 nota(s) de R$ 1,00\n";
        }
    }
    else
    {
        int x = n / 100;
        cout << x << " nota(s) de R$ 100,00\n";
        if (n % 100 >= 50)
        {
            int y = n % 100;
            y = y / 50;
            cout << y << " nota(s) de R$ 50,00\n";
        }
        else
            cout << "0 nota(s) de R$ 50,00\n";
        if (n % 100 % 50 >= 20)
        {
            int m = n % 50;
            m = m / 20;
            cout << m << " nota(s) de R$ 20,00\n";
        }
        else
            cout << "0 nota(s) de R$ 20,00\n";
        if (n % 100 % 50 % 20 >= 10)
        {
            int p = n % 20;
            p = p / 10;
            cout << p << " nota(s) de R$ 10,00\n";
        }
        else
            cout << "0 nota(s) de R$ 10,00\n";
        if (n % 100 % 50 % 20 % 10 >= 5)
        {
            int q = n % 10;
            q = q / 5;
            cout << q << " nota(s) de R$ 5,00\n";
        }
        else
            cout << "0 nota(s) de R$ 5,00\n";
        if (n % 100 % 50 % 20 % 10 % 5 >= 2)
        {
            int r = n % 5;
            r = r / 2;
            cout << r << " nota(s) de R$ 2,00\n";
        }
        else
            cout << "0 nota(s) de R$ 2,00\n";
        if (n % 100 % 50 % 20 % 10 % 5 % 2 >= 1)
        {
            int s = n % 2;
            s = s / 1;
            cout << s << " nota(s) de R$ 1,00\n";
        }
        else
            cout << "0 nota(s) de R$ 1,00\n";
    }
}