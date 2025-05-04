#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
   short n;
   cin>>n;
   for(i=2;i<=n;i++)
   {
        bool ch=0;
       for(j=2;j<i;j++)
       {
           if(i%j==0)
           ch=1;
       }
       if(ch==0)
       cout<<i<<" ";
   }
   return 0;
}
