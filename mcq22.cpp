//What happens if you try to compile and run this program?

#include <vector>

#include <iostream>

#include <algorithm>

#include <functional>

using namespace std;

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

  for_each (v1.begin (), v1.end (), bind2nd (plus < int >(), 1));    //LINE I

  for_each (v1.rbegin (), v1.rend (), printer);    // LINE II

  return 0;

}

// Options:
/*
the program outputs 1, 4, 6, 7, 9, 8,
the program outputs 2, 5, 7, 8, 10, 9,
runtime error at LINE I
compilation error in LINE I
the program outputs 8, 9, 7, 6, 4, 1,
compilation error in LINE II
*/

// Answer: compilation error in LINE I