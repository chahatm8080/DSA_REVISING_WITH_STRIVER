// this brute force method only work if the number which are present in arrays are uniques 



// #include<bits/stdc++.h>
// using namespace std;
// int sortArr(vector <int>&arr)
// {
// sort(arr.begin(),arr.end());
// return arr[arr.size()-2];
// }
// int sortArr1(vector<int>&arr){
//     sort(arr.begin(),arr.end());
//     return arr[1];
// }
// int main()
// {
//   vector<int> arr={1,2,5,4,6,8};
//   int size=sizeof(arr)/sizeof (arr[0]);
//   cout<<"find second largest elements\n"<<sortArr(arr);
//   cout<<"\n find second smallest elements\n"<<sortArr1(arr);
// }


#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;
int sort(vector<int>&arr)
{
  sort(arr.begin(),arr.end());
  return arr[arr.size()-2];
}
int main()
{
  vector<int>arr={1,2,3,4,6,5};
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<"find second largest element of arrays : "<<sort(arr);
}