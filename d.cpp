#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<s.size()<<" "<<t.size()<<endl;
    cout<<s+t<<endl;
    char temp=s[0];
    s[0]=t[0];
    t[0]=temp;
    cout<<s<<" "<<t<<endl;
    return 0;
}
