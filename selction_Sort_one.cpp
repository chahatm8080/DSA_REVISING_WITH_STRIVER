#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
  for(int i=n-1;i>=0;i--)
  {
    for(int j=0;j<=i-1;j++)
    {
      if (arr[j]>arr[j+1])
      {
    int temp=arr[j+1];
    arr[j+1]=arr[j];
    arr[j]=temp;
    }
  }
}
}
int main()
{
  int n=6;
  int arr[n]={13,20,24,28,2,8};
  bubble_sort(arr,n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}