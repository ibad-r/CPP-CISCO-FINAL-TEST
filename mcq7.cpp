//What happens if you try to compile and run this program?

#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

class A
{

  int a;

public:

    A (int a):a (a)
  {
  }

  int getA () const
  {
  return a;
  }
  void setA (int a)
  {
    this->a = a;
  }

  bool operator== (const A & b) const
  {
    return a == b.a;
  }

};
bool
compare (const A & a, const A & b)
{
  return a == b;
}
int
main ()
{

  int mynumbers[] = { 3, 9, 9, 9, 0, 2, 5 };

  vector < A > v (mynumbers, mynumbers + 7);

  vector < A >::iterator it = v.begin ();

  while ((it = adjacent_find (it, v.end (), compare)) != v.end ())
    {                //LINE I

        cout << it - v.begin () << ", ";
        it++;            //LINE II

     }

  cout << endl;

  return 0;

}

//Options:

/*
the program outputs 2, 3,
compilation error in LINE II
the program outputs 3, 4,
compilation error in LINE I
runtime error at LINE I
the program outputs 1, 2,
*/

//Answer: the program outputs 1, 2,