#include<iostream>
using namespace std;
int insertion_Sort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
      int j=i;
      while(j>0 && arr[j-1]>arr[j])
      {
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
      }
    }
}
int main()
{
  int n=6;
  int arr[n]={14,9,15,12,6,8};
  insertion_Sort(arr,n);
  for (int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}