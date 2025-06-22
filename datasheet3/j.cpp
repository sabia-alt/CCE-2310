#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int mini = arr[0];
    int cntr=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==mini)
            cntr++;
    }
    if(cntr%2==0)
        cout<<"Unlucky"<<endl;
    else
        cout<<"Lucky"<<endl;
    return 0;
}
