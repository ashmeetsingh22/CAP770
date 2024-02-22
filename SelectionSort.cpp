#include<iostream>
using namespace std;

int main()
{
 int arr[6]={10,65,3,2,8,1};
 for(int i=0;i<5;i++)
 {
    int min=i;
    for(int j=i+1;j<6;j++)
    {
        if(arr[j]<arr[min])
        {
            min=j;
        }
       swap(arr[min],arr[i]);
    }
 }
 for(int k=0;k<6;k++)
 {
    cout<<arr[k]<<endl;
 }
}