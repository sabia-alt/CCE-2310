#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    if((a-b==1||b-a==1)||(a==b && a!=0 && b!=0))
    {
        cout<<"YES"<<endl;
    }
    else
     {
        cout<<"NO"<<endl;
    }
    return 0;
}
