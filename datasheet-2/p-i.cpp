#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    bool check =0;
    bool p =0;
    for(int i=0, j=len-1;i<len && j>=0;i++,j--)
    {
        if(s[i]!=s[j])
        {
            p=1;
        }
        if(s[j]!='0')
        {
            check=1;
        }
             if(s[j]=='0' &&check==0)
             {
                 continue;
             }
             cout<<s[j];
         }
       cout<<endl;
       if(p==0)
       {
           cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;
   return 0;
}
