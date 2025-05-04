#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        int minn=min(x,y);
        int maxx=max(x,y);
        int sum=0;
        for(int j=minn+1;j<maxx;j++)
        {
        if(j%2!=0)
        sum +=j;
        }
       cout<<sum<<endl;
   }
   return 0;
}
