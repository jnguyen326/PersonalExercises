/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int getMin(int numbers[], int size){ //pass the array from main, and the array size
  
  int min = numbers[0]; //smallest value in array, set our current value to index 0/ 
                        //set to first element
                        //index 0 = 5 which is incorrect!
                        // int min = 5
                        //but don't worry because we are going to iterate through the array to find the minimum
  
  for (int i = 1; i < size; i++){   //i is our index, we start at i = 1 because we already know what is at index 0. go to index 1
        if (numbers[i] < min){          //if we find a number in the index that is less than the current(wrong min), 
            min = numbers[i];
        }
    }                               //min = the number in that index until it gets to the last index
    return min;
 
}

//let's make a function to find the max number in the array
int getMax(int numbers[], int size){
  
  int max = numbers[0]; 
  
  for (int i = 1; i < size; i++){    
        if (numbers[i] > max){         
            max = numbers[i];
        }
    }                             
    return max;
 
}

//let's make a function that does it in one function
//pass address of the two values
//pass those two values by references
//our main function will access those values through the addresses
void getMinAndMax(int numbers[], int size, int* min, int* max){ //receiving a pointer  to max and min number
  for (int i = 1; i < size; i++){    
        if (numbers[i] > *max){ //dereferencing max        
            *max = numbers[i];
        }
        if (numbers[i] < *min){ //dereferencing max        
            *min = numbers[i];
        }
    }              
     
}


int main()
{
  
  int numbers[5] = {5, 4, -2, 29, 6};
      //array of numbers with 5 elements, array size = 5
  
  //cout << "Min is " << getMin(numbers, 5);    //let's invoke getMin
                                                //get function receives/passes array "numbers 
                                                //get function also receives the  int size of the array which is 5
  //cout << "\n" << endl;
  //cout << "Max is " << getMax(numbers, 5);
  
  
  
  
  cout << "--------------------------\n";
  cout << "Testing our array with pointers function...\n";
  int min = numbers[0];
  int max = numbers[0];
  getMinAndMax(numbers, 5, &min, &max); //passing paramaters the function needs...array, array size, addresses of min and max               
                                        //&variable = passing a parameter using a references                
                                        //passing an address of a variable is helpful
                                        //because without it, your function will make a copy
                                        //and changes to the copy won't change the values in the main function
                                        
                                        
                                        //this way, we are operating on the original addresses of our variables
                                        //so main recieves directly of what those changes are
  cout << "min is " << min << endl;
  cout << "max is "  << max << endl;
  
  
  
  
  
  
  
}
