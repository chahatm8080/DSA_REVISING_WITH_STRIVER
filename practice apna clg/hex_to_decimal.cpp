#include<iostream>
using namespace std;
int hexToDec(string n)
{
  int ans=0;
  int x=1;// this is base which multiply the simple logic is 16^0 =1;
  int s=n.size();
  for(int i=s-1;i>=0;i--)
  {
    if(n[i]>'0' && n[i]<='9')
    {
      //hrer n[i] is an strinig value which i am subtacting with the 
      // zeroth value so that we will get the value in an integer formats;
      ans +=x*(n[i]-'0');
    }
    else if(n[i]>'A' && n[i]<='F')
  {
    ans +=x*(n[i]-'A'+10);
    //for example C 67-65=2+10; its just to understand how the logic working
  }
  x=x*16;
  }
  return ans;
}
int main()
{
  string n;
  cin>>n;
  cout<<hexToDec<<endl;
}

// converting hexadecimal to decimal 
// #include<bits/stdc++.h>
// using namespace std;
// int hexadecimalToDecimal(string n)
// {
//    int ans=0;
//    int x=1;
//    int s=n.size();
//    for (int i=s-1;i>=0;i--)
//    {
//       if (n[i]>'0'&& n[i]<='9')
//       {
//         ans +=x*(n[i]-'0');
//       }
//       else if(n[i]>'A'&& n[i]<='F')
//       {
//         ans +=x*(n[i]-'A' + 10);
//       }
//       x *=16;
//    }
//    return ans;
// }

// int main()
// {
//   string n;
//   cin>>n;
//   cout<<hexadecimalToDecimal(n) <<endl;
// }



// #include<iostream>
// using namespace std;
// int hexadecimalToDecimal(string n)
// {
//   int ans=0;
//   int x=1;
//   int s=n.size();
//   for(int i=s-1; i>0; i++)
//   {
//     if(n[i]>'0' && n[i]<='9')
//     {
//       ans +=x*(n[i]-'0');
//     }
//     else if (n[i]>'A'&& n[i]<='F')
//     {
//       ans += x*(n[i]-'A'+10);
//     }
//     x*=16;
//   }
//   return ans;
// }
// int main()
// {
//   string n;
//   cin>>n;
//   cout<<hexadecimalToDecimal<<endl;
// }