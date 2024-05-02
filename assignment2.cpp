#include <iostream>
using namespace std;
int naturalno(int r)
{
    float res = (3.14*r*r);
    cout<<"area of circle is : "<< res;
}
int main()
{
    int r;
    cout << "Enter value of r:";
    cin >> r;
    naturalno(r);
}