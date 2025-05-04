#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    bool check=0;
    cin>>x;
    for(long long i=2;i<x;i++)
    {
        if(x%i==0)
        {
            check=1;
        }
    }
     if(check==0)
     {
        cout<<"YES"<<endl;
     }
     else
     {
          cout<<"NO"<<endl;
     }
       return 0;
}
