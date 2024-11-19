// What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: false true true<enter>?

#include <iostream>

using namespace std;

int
main ()
{

  bool c1, c2, c3;

  cin >> boolalpha >> c1 >> c2 >> c3;

   cout << boolalpha << c3 << ", " << c1 << ", " << c2 << ", " << endl;     //LINE I

  return 0;

}

// Options
/*
the program outputs true, false, true,
the program outputs false, false, true,
the program outputs 1, 0, 1,
compilation error in LINE I
runtime error at LINE I
*/

// Answer: the program outputs true, false, true,