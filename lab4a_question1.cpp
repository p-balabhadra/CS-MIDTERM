#include <iostream>
using namespace std;
int main ()
{
  //Write a C++ program to find cube of any number using function.
  int cube(int);
  int a,cu;
  cout << "enter your number ";
  cin >> a;
  cu = cube (a);
  cout << cu << endl;
  return 0;
}
int cube(int a)
{
    int cu;
    cu =a*a*a;
    cout << "the cube of the "<< a <<" is ";return (cu);
}
