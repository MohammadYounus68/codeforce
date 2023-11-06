#include<iostream>
using namespace std;
template < class mytemp1, class mytemp2 >
mytemp1 add (mytemp1 a, mytemp2 b)
{
  return a + b;
}

int main ()
{
  cout << add(2.3 , 5);
  return 0;
}