// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//   int n,i=0;
//   cin>>n;
//   int decimal = 0;
//   while(n!=0)
//   {
//     int r=n%10;
//     decimal=decimal+r*(pow(2,i));
//     n=n/10;
//     ++i;
//   }
//   cout<<"binary to decimal is "<<decimal;
//   return 0 ;
// }



// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   int i=0;
//   int decimal=0;
//   while(n!=0)
//   {
//     int r=n%10;
//     decimal=decimal + r* (pow(2,i));
//     n=n/10; 
//     i++;
//   }
//   cout<<decimal;
// }

// without using power function 
/*
step 1: intialize the variable
such as binary_num=0,decimal_num=0, base=1, rem;
step2:
take the input as n 
step 3:
using while loop we can find the decimal
step 4:
using the logic base*=2 every time it will multiply by  2 

for example : 1101=13
step5:

*/
#include<iostream>
using namespace std;
int main()
{
  int n ;
  cin>>n; 
  int i =0 ; 
  int decimal =0;
  int base=1;

  while(n!=0)
  {
    int r = n%10;
    decimal=decimal+r*base;
    n=n/10;
    base=base*2;
  }
  cout<<decimal;
}

