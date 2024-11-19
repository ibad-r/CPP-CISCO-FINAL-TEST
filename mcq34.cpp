// What happens if you try to compile and run this program?

#include <vector>

#include <iostream>

#include <algorithm>

#include <functional>

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

  operator  int () const
  {
    return value;
  }

  operator  int () const
  {
    return value;
  };
  bool operator < (const Pocket & _Right) const
  {
    return value < _Right.value;
  }

};

ostream & operator << (ostream & stream, const Pocket & pocket)
{

  stream << pocket.getValue ();

  return stream;

}
void 
printer (Pocket i)
{                // LINE I

  cout << i << ", ";

}

struct Add:public binary_function < Pocket, Pocket, Pocket >
{

  Pocket operator () (const Pocket & _Left, const Pocket & _Right) const
  {
    return _Left + _Right;
  }

};

int
main ()
{

  Pocket mynumbers1[] = { 8, 9, 7, 6, 4, 1 };

  vector < Pocket > v1 (mynumbers1, mynumbers1 + 6);

  vector < Pocket > v2 (6, 0);

  vector < Pocket > v2 (mynumbers2, mynumbers2 + 6);

  vector < Pocket > v3 (6, 0);

  transform (v1.begin (), v1.end (), v2.begin (), bind2nd (Add (), 1));     //LINE II

  for_each (v2.rbegin (), v2.rend (), printer);

  return 0;

}

// Options:
/*
the program outputs 2, 5, 7, 8, 10, 9,
the program outputs 0, 0, 0, 0, 0, 0,
the program outputs 9, 10, 8, 7, 5, 2,
compilation error in LINE I
compilation error in LINE II
runtime error at LINE I
*/

// Answer: the program outputs 2, 5, 7, 8, 10, 9,