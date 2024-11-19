// What happens if you try to compile and run this program?

#include <iomanip>

#include <iostream>

using namespace std;

int
main ()
{

  double goodpi = 3.141593;

  double badpi = 3.5;

   cout << goodpi << ", ";

  cout << setprecision (3);         //LINE I

  cout << goodpi << ", ";    // LINE II

  cout << badpi << ", ";

  return 0;

}

// Options:
/*
the program outputs 3.14159, 3.14, 3.5,
the program outputs 3.14159, 3.140, 3.500,
the program outputs 3.14159, 3.14, 3.50,
compilation error in LINE I
compilation error in LINE II
runtime error at LINE I
*/

// Answer: the program outputs 3.14159, 3.14, 3.5,