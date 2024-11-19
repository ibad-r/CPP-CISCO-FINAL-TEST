//What happens if you try to compile and run this program?

#include <iostream>

using namespace std;

void
f (double a)            //LINE II
{

  cout << 2 + a << endl;

}
template < class A > void
f (A & a)            //LINE I
{

  cout << 1 + a << endl;

}

int
main ()
{

  double a = 1.5;

  f (a);            //LINE II

  return 0;

}

// Options
/*
the program outputs 3.5
the program outputs 2.5
the program outputs 1.5
compilation error in LINE II
compilation error in LINE I
runtime error at LINE II
*/

// Answer: the program outputs 3.5