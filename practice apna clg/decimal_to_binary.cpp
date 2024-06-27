#include<iostream>
using namespace std;
int func(int n)
{
  int ans=0;
  while(n!=0)
  {
     int r=n%2;
     ans=ans+r;
     n=n/2;
  }
  return ans;
}
int main()
{
  int n=15;
  int dec_binary=func(n);
  cout<<dec_binary;

}

/*
algorithms:

step1: I will take the number from the uses
step2: Calling the functions using some parameters
step3: storing the number in answer format 
step4: insinde the function which i have created
so at there i will upload the doucument 
*/