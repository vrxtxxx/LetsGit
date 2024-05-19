#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, mul;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  mul = first_number * second_number;

  // prints sum 
  cout << first_number << " * " <<  second_number << " : " << mul;     

  return 0;
}
