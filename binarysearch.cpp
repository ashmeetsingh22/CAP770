#include<iostream>
using namespace std;
int search( int arr[], int size, int value)
{
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
while(s<=e)
{
    if(arr[mid]==value)
    {
        return mid;
    }
    else if(arr[mid]<value)
    {
        s=mid+1;
    }
    else {
        e=mid-1;
    }
    mid=(s+e)/2;
}
return -1;
}
int main(){
    int arr[7]={1,4,8,67,89,98,100};
    int key;
    cout<<"enter the number you want to find";
    cin>>key;
    cout<<search(arr,7,key);
return 0;

}