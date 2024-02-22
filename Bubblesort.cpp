#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"enter the arry size";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
for(int k=0;k<n-1;k++)
{
    for(int l=0;l<n-k-1;l++){
    if(arr[l]>arr[l+1])
    {
        swap(arr[l],arr[l+1]);
    }
}
}
 cout<<"After swapping";
for(i=0;i<n;i++)
{
   cout<<arr[i]<<endl;
}
    return 0;
}
