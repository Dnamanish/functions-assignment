#include <iostream>
using namespace std;
void oddno(int a,int b)
{
  for(int i=a+1;i<=b;i++)
  {
    if(i%2!=0)
     cout<<i<<endl;
  }  
}


int main()
{
  int a,b;
  cout<<"Enter value of a:";
  cin>>a;
  cout<<"Enter value of b:";
  cin>>b;
  oddno(a,b);  
}