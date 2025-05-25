#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,reminder1,reminder2;
    cin>>a>>b>>c;
    reminder1=a%c;
    reminder2=b%c;
    if(reminder1==0 && reminder2==0)
    {
        cout<<"Both"<<endl;
    }
    else if(reminder1==0 && reminder2!=0)
    {
        cout<<"Memo"<<endl;
    }
     else if(reminder1!=0 && reminder2==0)
    {
        cout<<"Momo"<<endl;
    }
     else if(reminder1!=0 && reminder2!=0)
    {
        cout<<"No One"<<endl;
    }
}
