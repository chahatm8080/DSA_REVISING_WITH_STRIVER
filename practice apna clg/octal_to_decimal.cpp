// using power function by initializing math.header in top of code 


// #include<iostream> 
// #include<math.h>
// using namespace std;int main()
// {
//   int n ;
//   cin>>n;
//   int octal_decimal=0;
//   int i=0;
// while(n!=0)
// {
//   int r=n%10;
//   octal_decimal=octal_decimal + r*(pow(8,i));
//   i++;
//   n=n/10;
// }
// cout<<octal_decimal;
//   return 0;
// }



// without using power functions


#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int octal=0;
  int base=1;
  while(n!=0)
  {
    int r=n%10;
    octal += r*base;
    n=n/10;
    base*=8;
  }
  cout<<octal;
  return 0; 
}


