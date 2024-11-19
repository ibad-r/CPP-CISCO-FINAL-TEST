//What will happen when you attempt to compile and run the following code?
#include <iostream>

#include <algorithm>

#include <vector>

#include <deque>

#include <set>

using namespace std;

void
myprint (int i)

{

  cout << i << ", ";

}

int
main ()
{

  int mynumbers[] = { 8, 9, 7, 6, 4, 1 };

  vector < int >v1 (mynumbers, mynumbers + 6);

  v1.pop_back ();

  v1.pop_back ();

  v1.pop_back ();

  set < int >s1 (mynumbers, mynumbers + 6);

  deque < int >d1 (mynumbers, mynumbers + 6);

  d1.pop_front ();        //LINE II

  d1.pop_front ();
 
  d1.pop_front ();

  for_each (v1.begin (), v1.end (), myprint);    //LINE II

  for_each (s1.begin (), s1.end (), myprint);

  for_each (d1.begin (), d1.end (), myprint);

  return 0;

}

//Options:

/*

program output: 8, 9, 7, 6, 4, 1, 4, 6, 7, 8, 9, 6, 4, 1,
program output: 8, 9, 7, 1, 4, 6, 7, 8, 9, 6, 4, 1,
runtime error at LINE I
compilation error in LINE I
compilation error in LINE II
program output: 8, 9, 7, 1, 4, 6, 7, 8, 9,
*/

//Answer: compilation error in LINE I 