#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int i,j,p=1,n,reverse;

int main()
{
  cout<<"Enter The Number To Print A Pattern\n";
  cin>>n;
  int dig=log10(n);

   cout<<"\n"<<n<<endl;  
  
  for(i=1;i<=dig;i++)
  {
   while (n != 0)
     {
        reverse = reverse * 10;
        reverse = reverse + n%10;
        n       = n/10;
     }
     n=reverse/10;
    cout<<n<<endl;
    reverse=0;
   }  
 return 0; 
}
