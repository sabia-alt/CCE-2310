#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long eye,mouth,body,result=0;
    cin>>eye>>mouth>>body;
    if(eye == 0 || body == 0)
    {
       result=0;
    }
    else{
        if (min ({eye,mouth,body}) !=mouth)
   {
       result = min (eye,body);
   }
   else{
       result+=mouth;
       eye-=mouth;
       body-=mouth;
       result+=min((long long) (0.5*eye),body);
   }

    }
    cout<<result;
    return 0;
}
