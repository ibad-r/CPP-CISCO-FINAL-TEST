//What happens if you try to compile and run this program?

#include <vector>

#include <iostream>

#include <algorithm>

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

  bool operator < (const int &_Right) const
  {
  return value < _Right;
  }

  operator  int () const
  {
    return value;
  }

 };

ostream & operator << (ostream & stream, const Pocket & pocket)
{

  stream << pocket.getValue ()

  return stream;

}

void
printer (Pocket i)
{
 
  cout << i << ", ";
}

int
main ()
{

  Pocket mynumbers1[] = { 4, 9, 1, 6 };

  int mynumbers2[] = { 4, 1, 4, 5 };

  vector < Pocket > v1 (7, 0);

  set < Pocket > s1 (mynumbers1, mynumbers1 + 6);

  sort (mynumbers2, mynumbers2 + 4);

  sort (mynumbers1, mynumbers1 + 4);

  sort (mynumbers2, mynumbers2 + 4);    //LINE I

  set_intersection (mynumbers1, mynumbers1 + 3, mynumbers2, mynumbers2 + 3, v1.begin ())    //LINE II
  for_each (v1.begin (), v1.end (), printer);

  return 0;
}

// Options:
/*
compilation error in LINE I
the program outputs 1, 4, 0, 0, 0, 0, 0,
runtime error at LINE I
the program outputs », 0, 0, 0, 0, 0, 0,
the program outputs 4, 1,
compilation error in LINE II
*/

// Answer: the program outputs 1, 4, 0, 0, 0, 0, 0,