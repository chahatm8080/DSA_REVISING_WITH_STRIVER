// #include<bits/stdc++.h>
// using namespace std;

// int sortArr(vector<int>& arr)
// {
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }
// int main()
// {
//   vector<int> arr1 = {2,5,1,3,0};
//   vector<int> arr2 = {2,4,2,4,5};
//   cout<<"largest_element will be "<<sortArr(arr1)<<endl;

// }
/*
step1: sort the array using vector method 
step2: access the last element by using arr[]-1
*/

#include<bits/stdc++.h>
using namespace std;
int sortArr(vector <int>&arr)
{
sort(arr.begin(),arr.end());
return arr[arr.size()-1];
}
int main()
{
  vector<int> arr={1,2,5,4,6,8};

  cout<<sortArr(arr);
}

