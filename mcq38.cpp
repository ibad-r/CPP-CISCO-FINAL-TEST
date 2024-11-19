// What happens if you try to compile and run this program?

#include <iostream>

using namespace std;

int
main ()
{

  cout << 31.23 << ", ";

  cout.setf (ios::hex, ios::basefield);

   cout.setf (ios::showbase);         //LINE I

  cout << 31.23 << ", ";

  cout.unsetf (ios::showbase);    // LINE II

  cout << 63.23 << ", ";

  return 0;

}

// Options:
/*
the program outputs 31.23, 31.23, 63.23
the program outputs 31.23, 31.27, 77.27,
the program outputs 31.23, 037.27, 77.27,
compilation error in LINE I
compilation error in LINE II
runtime error at LINE I
*/

// Answer: the program outputs 31.23, 31.23, 63.23