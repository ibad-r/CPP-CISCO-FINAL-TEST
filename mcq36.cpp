//What happens if you try to compile and run this program?

#include <iostream>

using namespace std;

int
main ()
{

  cout << 31 << ", ";

  cout.setf (ios::hex, ios::basefield);

  cout.setf (ios::showbase);         //LINE I

  cout << 31 << ", ";

  cout.unsetf (ios::showbase);    // LINE II

  cout << 63 << ", ";

  return 0;

}

// Options:
/*
the program outputs 31, 0x1f, 3f,
the program outputs 31, 31, 63
the program outputs 31, 31, 3f,
compilation error in LINE I
compilation error in LINE II
runtime error at LINE I
*/

// Answer: the program outputs 31, 0x1f, 3f,