// What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: 4 5 6<enter<?

#include <iostream>

#include <string>

using namespace std;

int
main ()
{

  string s;

  getline (s);                //LINE I

   cout << s << ", " << s << ", " << endl;     //LINE II

  return 0;

}

// Options
/*
compilation error in LINE I
compilation error in LINE II
runtime error at LINE I
the program outputs 4 5 6 4 5 6,
the program outputs 4 5 6, 4 5 6,
the program outputs 4, 5, 6,,4, 5, 6,
*/

// Answer: compilation error in LINE I