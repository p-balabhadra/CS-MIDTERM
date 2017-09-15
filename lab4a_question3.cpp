#include <iostream>

using namespace std;
int maximum (int a ,int b)
{
  return (a>b) ? a:b;

}int minimum (int a ,int b)
{
  return (a>b) ? b:a;

}int main()
{   int a1,a2,x,n;
    cout << "enter your 1st number : "<< endl;
    cin >> a1;
    cout<< "enter your 2nd number : "<< endl;
    cin>> a2;
    x=maximum(a1,a2);
    n=minimum(a1,a2);
    cout << "the  maximum number is " << x <<endl;
    cout << "the minimum  number is " << n <<endl;
    return 0;
}
