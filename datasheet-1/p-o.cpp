#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    char x;
    cin >> a >> x >> b;
    if(x == '+')
    cout << a+b;
    else if(x == '-')
    cout << a-b;
    else if(x == '*')
    cout << a*b;
    else
    cout << a/b;
}

