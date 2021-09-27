#include <iostream>

/*void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;

}*/

/*void Swap(char& a, char& b) { //function overloading
    char temp = a;
    a = b;
    b = temp;

}*/

//these two functions are inefficient bc we have to repeat it for each data type
// Instead use generics
// same logic, handling different data types as one

//use it with templates!
template<typename T>  //T represents the datatype and handles all of them easy
                      //T is used commonly, but can be anyname
void Swap(T& a, T& b) { //function overloading
    T temp = a;
    a = b;
    b = temp;
}
//this template replaces the two swap functions above!
int main() {

    int a = 5, b = 7;
    /////////////////////////////*
/*  std:: cout << a << " - " << b << std::endl;  //print values before swap!
    Swap(a, b);
    std:: cout << a << " - " << b << std::endl;  //print results after swap!
    std:: cout << "-------------" << std::endl;
               //swapping char values
    char c = 'c', d = 'd';
    std:: cout << c << " - " << d << std::endl;
    Swap(c, d);
    std:: cout << c << " - " << d << std::endl;

    */
    ///updated output using generics
    //really just add carats with the desired data type inside them after the function "Swap"
    std:: cout << a << " - " << b << std::endl;  //print values before swap!
    Swap<int>(a, b);
    std:: cout << a << " - " << b << std::endl;  //print results after swap!
    std:: cout << "-------------" << std::endl;
    //swapping char values
    char c = 'c', d = 'd';
    std:: cout << c << " - " << d << std::endl;
    Swap<char>(c, d);
    std:: cout << c << " - " << d << std::endl;


    return 0;
}
