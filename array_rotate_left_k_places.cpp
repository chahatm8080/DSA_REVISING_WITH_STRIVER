#include<bits/stdc++.h>
using namespace std; 
int sort(int arr[], int n)
{
  int temp[n];
  for(int i=1;i<n;i++)
  {
     temp[i-1]=arr[i];
  }
  temp[n-1]=arr[0];
  for(int i=0;i<n;i++)
  {
    cout<<temp[i]<<" ";
    
  }
}
int main()
{
  int arr[]={1,2,3,4,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  sort(arr,n);
}