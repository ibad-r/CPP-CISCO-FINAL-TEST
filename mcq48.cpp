//What happens if you try to compile and run this program?

#include <iostream>

using namespace std;

template < typedef T >        //LINE I
  class Pocket
{

public:

  T value;

  Pocket (T value)
  {
  };                //LINE II

};

int
main ()
{

  Pocket < double >a (7);

  cout << a.value << endl;

  return 0;

}

//Options 
/*
compilation error in LINE I
compilation error in LINE II
runtime error at LINE II
the program outputs
the program outputs 7
the program outputs 7.0000
*/

// Answer: the program outputs 7