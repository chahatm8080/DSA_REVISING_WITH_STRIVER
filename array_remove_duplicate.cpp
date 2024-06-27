/*
ALGORITHMS i am writting with my understanding 
step 1: As i have declared the array in main function 
step 2: 
*/
// #include<bits/stdc++.h>
// using namespace std;
// int removeDuplicates(int arr[], int n) {
//   set < int > set;
//   for (int i = 0; i < n; i++) {
//     set.insert(arr[i]);
//   }
//   int k = set.size();
//   int j = 0;
//   for (int x: set) {
//     arr[j++] = x;
//   }
//   return k;
// }
// int main() {
//   int arr[] = {1,1,2,2,2,3,3};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int k = removeDuplicates(arr, n);
//   cout << "The array after removing duplicate elements is " << endl;
//   for (int i = 0; i < k; i++) {
//     cout << arr[i] << " ";
//   }
// }


#include<bits/stdc++.h>
using namespace std; 
int removeDuplicate(int arr[],int n){
  set<int>set;
 for(int i=0;i<n;i++)
 {
    set.insert(arr[i]);
 }
 int k=set.size();
 int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
    cout<<"The array after removing duplicate elements is"<<endl;
  for(int i=0;i<k;i++)
  {
       cout<<arr[i]<<" ";
  }
}

int main()
{
  int arr[]={10,2,5,6,8,2,5,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  removeDuplicate(arr,n);

 
}