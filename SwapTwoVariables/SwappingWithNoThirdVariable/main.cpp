#include <iostream>
using namespace std;

int main()
{
  //swapping the values of two variables with NO third variable
                      // we want:
  int a = 20;         // b = 20;   
  int b = 10;         // a = 10;
  
  a = a + b;         // a = 20 + 10
                     // a = 30
  
  b = a - b;        // b = 30 - 10
                    // b = 20  (GOOD TO GO)
  
  
  a = a - b;        // a = 30 - 20
                    // a = 10 (GOOD TO GO)
  
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}
