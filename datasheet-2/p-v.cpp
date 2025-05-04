#include<bits/stdc++.h>
using namespace std;
int main()
{
    short n;
    cin>>n;
    int contr=0;
    int i=1;
    while(1)
    {
        if(contr==n)
        {
            break;
        }
        if(i%4==0)
        {
            cout<<"PUM"<<endl;
            contr++;
            i++;
            continue;
        }
       cout<<i<<" ";
       i++;
    }
   return 0;
}
