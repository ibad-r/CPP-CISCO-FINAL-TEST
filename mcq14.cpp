//What happens if you try to compile and run this program?

#include <deque>

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
    return value;
  }

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
{

  cout << i << ", ";

}

int
main ()
{

  int mynumbers[] = { 8, 9, 7, 6, 4, 1 };

  deque < Pocket > d1 (mynumbers, mynumbers + 6);

  d1.push_back (4);    //LINE I

  deque < Pocket >::iterator it = lower_bound (d1.begin (), d1.end (), 3)    //LINE II

  for_each (it, d1.end (), printer);

  return 0;

}

// Options:
/*
compilation error in LINE II
the program outputs 8, 9, 7, 6, 4, 4,
runtime error at LINE I
compilation error in LINE I
the program outputs 8, 9, 7, 6, 4, 1, 4,
the program outputs 8, 9, 7, 6, 4, 1,
*/

// Answer: the program outputs 8, 9, 7, 6, 4, 1, 4,