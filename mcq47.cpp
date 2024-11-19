//What happens if you try to compile and run this program?

#include <iostream>

using namespace std;

template < class T > class Pocket
{

public:

  T value;

  Pocket (T value)

  };

template < class T > Pocket < T >::Pocket (T value):value (value)
{
}                //LINE I

int
nmain ()
{

  Pocket < double >a (7);    //LINE II

  cout << a.value << endl;

  return 0;

}

// Options 
/*
the program outputs 7
the program outputs 7.0000
the program outputs
compilation error in LINE II
compilation error in LINE I
runtime error at LINE II
*/

// Answer: the program outputs 7