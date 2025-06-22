#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    cin>>i;
    int maxx = INT_MIN;
    int minn = INT_MAXX;
    for(i=0;i<n;i++)
      {
         cin >>arr[i] ;
         maxx=max(maxx,arr[i]);
         minn=min(minn,arr[i]);
      }
      int posm,posmi;
      for(i=0;i<n;i++)
      {
          if(arr[i]==maxx)
          posm=i;
          else if (arr[i]==minn)
          posmi=i;
      }
      int temp=arr[posm];
      arr[posm]=arr[posmi];
      arr[posmi]=temp;
    for(i=0;i<n;i++)
    {
      cout << arr[i] << " ";
}
    return 0;
}

