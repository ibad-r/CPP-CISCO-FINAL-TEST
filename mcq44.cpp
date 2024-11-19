//What happens if you try to compile and run this program?

include <iostream>

using namespace std;

template < class T > void
f (T & a)           //LINE I
{

  cout << 2 * a << endl;

}

int
main ()
{

  int a = 2;

  f (a);            //LINE II

  return 0;

}

//Options
/*
the program outputs 4
the program outputs 2
the program outputs 1
compilation error in LINE I
compilation error in LINE II
runtime error at LINE I
*/

// Answer:the program outputs 4