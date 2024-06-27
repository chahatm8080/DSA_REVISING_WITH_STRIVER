
// #include<iostream>
// using namespace std;
// int largest_numbers(int arr[],int n)
// {
//   int large=arr[0];
//   for(int i=0;i<n;i++)
//   {
//     if (large<arr[i])
//     {
//        large=arr[i];
//     }
//   }
//   return large;
// }
// int main()
// {
//   int arr[]={1,2,5,3,4,6,8};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout<<largest_numbers(arr,n);
// }

#include<iostream>
using namespace std;
int largest(int arr[], int n)
{
  int large=arr[0];
  for(int i=0; i<n;i++)
  {
    if(large<arr[i])
    {
      large=arr[i];
    }
  }
  return large;

}
int main()
{
  int arr[]={1,2,5,3,4,6,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"find largest element using iteration method"<<largest(arr,n);
}