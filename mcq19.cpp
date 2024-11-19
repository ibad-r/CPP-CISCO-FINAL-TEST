//What happens if you try to compile and run this program?

#include <deque>

#include <iostream>

#include <algorithm>

#include <set>

using namespace std;

class Pocket
{

  int value;

public:

    Pocket (int value):value (value)
  {
  }

  int getValue () const
  {
    return value;
  }

  bool operator < (const Pocket & _Right) const
  {
    return value < _Right.value;
  }

};

ostream & operator << (ostream & stream, const Pocket & pocket)
{

  stream << pocket.getValue ()

  return stream;

}

int
main ()
{

  Pocket mynumbers1[] = { 8, 9, 7, 6, 4, 1 };

  Pocket mynumbers2[] = { Pocket (3), Pocket (2), Pocket (4), Pocket (1) };

  deque < Pocket > d1 (mynumbers1, mynumbers1 + 6);

  set < Pocket > s1 (mynumbers1, mynumbers1 + 6);

  sort (d1.begin (), d1.end ());

  sort (mynumbers1, mynumbers1 + 5);

  sort (mynumbers2, mynumbers2 + 4);

  cout << includes (d1.begin (), d1.end (), mynumbers1, mynumbers1 + 4) << ", "    //LINE I
    << includes (s1.begin (), s1.end (), mynumbers2, mynumbers2 + 3);    //LINE II

  return 0;
}

// Options:
/*
runtime error at LINE I
the program outputs 0, 1
compilation error in LINE I
the program outputs 1,0
compilation error in LINE II
the program outputs 8, 9, 7, 6, 3, 2, 4
*/

// Answer: compilation error in LINE II