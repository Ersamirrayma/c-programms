#include <iostream>

using namespace std;

int main() {
  // Declare two variables
  int num1, num2;

  // Get input from the user
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  // Add the two numbers
  int sum = num1 + num2;

  // Use the scope resolution operator to access the global variable "sum"
  cout << "The sum of " << num1 << " and " << num2 << " is: " << ::sum << endl;

  return 0;
}