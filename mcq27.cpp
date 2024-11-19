//What happens when you attempt to compile and run the following code?

#include <iostream>

#include <set>

#include <vector>

using namespace std;

int
main ()
{

  int mynumbers[] = { 8, 9, 7, 6, 4, 1 };

  vector < int >v (mynumbers, mynumbers + 6);

  set < int >s1 (v.begin (), v.end ());

  s1.erase (s1.lower_bound (4), s1.upper_bound (9));    // LINE I

  s1.insert (10);        //LINE II

  s1.insert (v.begin (), v.end ());

  for (set < int >::iterator i = s1.begin (); i != s1.end (); i++)

    cout << *i << ", ";

  return 0;

}


// Options 
/*
program output: 1, 4, 6, 7, 8, 9, 10,
program output: 1, 10,
program output: 1, 4, 6, 7, 8, 9,
program output: 1, 4, 9, 10,
compilation error in LINE I
runtime error at LINE II
compilation error in LINE II
*/

// Answer: program output: 1, 4, 6, 7, 8, 9, 10,