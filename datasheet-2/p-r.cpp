#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
    int x,y;
    cin>>x>>y;
    int minn=min(x,y);
    int maxx=max(x,y);
    int sum=0;
    if(x<=0||y<=0)
   {
       break;
   }
       for(int i=minn;i<=maxx;i++)
       {
           cout<<i<<" ";
           sum+=i;
       }
       cout<<"sum ="<<sum<<endl;
   }
   return 0;
}
