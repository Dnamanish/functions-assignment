#include <iostream>
using namespace std;
void digitcount(int n)
{
    int digit=0;
    while (n > 0)
    {
       digit++;
       n/=10;
    }
    cout<<"No of digit is:"<<digit<<endl;
}
void square(int n)
{
    cout<<"square is:" <<n*n;
}

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    digitcount(n);
    square(n);

}