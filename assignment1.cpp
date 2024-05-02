#include <iostream>
using namespace std;
int naturalno(int n)
{
   
    int a= n+1;
    int b= 2*n+1;
    int res = (0.166*((n*a)*b))+1;
    cout<<"Square of 1st n natural no is : "<< res;
}
int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    naturalno(n);
}