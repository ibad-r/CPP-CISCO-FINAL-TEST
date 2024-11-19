//What will happen when you attempt to compile and run the following code?
#include <iostream>

#include <algorithm>

#include <vector>

#include <deque>

#include <set>

using namespace std;

int
main ()
{

  int mynumbers[] = { 8, 9, 7, 6, 4, 1 };

  vector < int >v1 (mynumbers, mynumbers + 6);

  deque < int >d1 (mynumbers, mynumbers + 6);

  set < int >s1 (mynumbers, mynumbers + 6);

  vector < int >::iterator found = find (v1.begin (), v1.end (), 3);

  if (found != v1.end ())

    cout << "found" << ", ";

  cout << find (d1.begin (), d1.end (), 9) << ", ";    //LINE I

  cout << find (s1.begin (), s1.end (), 6);    //LINE II

  return 0;

}

//Options:

/*
program output: found, 8, 9, 7, 6, 4, 1, 1, 4, 6, 7, 8, 9,
program output: 9, 6,
compilation error in LINE II
runtime error at LINE I
program output: 8, 9, 7, 6, 4, 1, 1, 4, 6, 7, 8, 9,
compilation error in LINE I
*/

//Answer: compilation error in LINE I