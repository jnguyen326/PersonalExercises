#include <iostream>
using namespace std;

int main()
{
  //swapping the values of two variables
  
  int a = 20;
  int b = 10;
  
  
    
  int temp = a; //temporary variable is holding value 20 from variable a
                // temp = 20

  a = b;        //putting value 10 into variable a from variable b
                // a = 10

  b = temp;     //now variable b is holding value saved in temp taken from variable a
                //b = 20
                
  
  cout << "a = " << a << " b = " << b << " temp = " << temp << endl;

}
