#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,num;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
         cin>>num;
         long long fact=1;
          for(long long j=1;j<=num;j++)
          fact=fact*j;
            cout<<fact<<endl;
       }
       return 0;
}
