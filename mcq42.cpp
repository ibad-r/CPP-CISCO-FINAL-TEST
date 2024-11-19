// What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: i j k jk q<enter> ?\

#include <iostream>

#include <string>

#include <vector>

#include <algorithm>

using namespace std;

void
printer (string i) 
{

  cout << i << ", ";

}

int
main ()
{

  vector <string > v1;

   string s;

  do

    {

        cin >> s;

        v1.push_back (s);        // LINE I

    }
  while (s != "q" && cin.good ());    //LINE II

  for_each (v1.begin (), v1.end (), printer);

  return 0;

}

// Options
/*
the program outputs i, j, k, jk, q,
the program outputs i, j, k, jk, q, q,
the program outputs i, j, k, jk,
compilation error in LINE I
compilation error in LINE II
runtime error at LINE I
*/

// Answer: the program outputs i, j, k, jk, q,