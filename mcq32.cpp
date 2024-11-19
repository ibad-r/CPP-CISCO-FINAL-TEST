//What happens if you try to compile and run this program?

#include <vector>

#include <iostream>

#include <algorithm>

#include <functional>

using namespace std;

int
Mul (int &_Left)
{

  if (_Left <= 3)

    return 2 * _Left;

  else

    return 6;

}

int
main ()
{

  int mynumbers[] = { 8, 9, 7, 2, 4, 1 };

  vector < int >v1 (mynumbers, mynumbers + 6);

  vector < int >v2 (7);

  transform (v1.begin (), v1.end (), v2.begin (), ptr_fun (Mul));    //LINE I

  vector < int >::iterator it = find_if (v2.begin (), v2.end (), bind2nd (equal_to < int >(), 4));    // LINE II

  cout << *it << endl;        // LINE III

  return 0;

}

/*
the program outputs 4
the program outputs 3
the program outputs 0
compilation error in LINE I
compilation error in LINE II
compilation error in LINE III
runtime error at LINE I
*/

// Answer: the program outputs 0