//What happens if you try to compile and run this program?

#include <vector>

#include <iostream>

#include <algorithm>

#include <functional>

using namespace std;

struct Add:public binary_function < int, int, int >
{

int operator () (const int &_Left, const int &_Right) const     //LINE I
  {
    return _Left + _Right;
  }

 };

void
printer (int i)
{ 

  cout << i << ", ";

}

int
main ()
{

  int mynumbers[] = { 8, 9, 7, 6, 4, 1 };

  vector < int >v1 (mynumbers, mynumbers + 6);

  vector < int >v2 (7);

  transform (v1.begin (), v1.end (), v2.begin (), bind1st (Add (), -1));    // LINE II

  for_each (v2.rbegin (), v2.rend (), printer);

  return 0;

}

// Options:
/*
the program outputs 0, 0, 3, 5, 6, 8, 7,
the program outputs 0, 3, 5, 6, 8, 7,
compilation error in LINE II
compilation error in LINE I
runtime error at LINE II
the program outputs 7, 8, 6, 8, 7,
runtime error at LINE I
*/

// Answer: the program outputs 0, 0, 3, 5, 6, 8, 7,