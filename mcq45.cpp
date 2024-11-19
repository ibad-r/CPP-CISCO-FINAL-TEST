//What will happen when you attempt to compile and run the following code?

#include <iostream>

using namespace std;

template < class T > void
f (double a)            //LINE I
{

  cout << 1 + a << endl;

}

int
main ()
{

  double a = 1.5;

  f < float &>(a);        //LINE II

  return 0;

}

//Options
/*
compilation error in LINE II
compilation error in LINE I
runtime error at LINE I
the program outputs 1.5
the program outputs 2
the program outputs 2.5
*/

//Answer: compilation error in LINE II