#include<iostream>
using namespace std;
int linearsearch( int arr[], int size, int value)
{
    int i=0;
    while(i<size)
    {
        if(arr[i]==value)
        {
            return i;
        }
     i++;  
    }
  return -1;  
}
int main(){
int arr[6]={10,45,65,79,87,12};
int key=79;
cout<<linearsearch(arr,6,key);

return 0;

}