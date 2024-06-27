/*time complexity O(n)
space complexity O(1)  for this we are using arr[] so 
we can write the O(n) but for extra space i am using  O(1).
*/
#include<bits/stdc++.h>
using namespace std; 
int sort(int arr[], int n)
{
  int temp=arr[0];
  for(int i=1;i<n;i++)
  {
     arr[i-1]=arr[i];
  }
  arr[n-1]=temp;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int arr[]={1,2,3,4,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  sort(arr,n);
}