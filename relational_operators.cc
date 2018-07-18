/******************************************************************************
 *  @file           relational_operators.cc
 *  @author         Addison Sears-Collins
 *  @date           7/17/2018  
 *  @version        1.0 
 *  
 *  @brief	    Demonstrates the behavior of relational operators
 *
 *  Purpose: This program demonstrates the behavior of relational operators
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  
	
	int num1{}, num2{};
	
	// Will display true/false instead of 1/0 for booleans
	cout << boolalpha;
	
	cout << "Enter two integers separated by a space: ";
	cin >> num1 >> num2;
	
	cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
	cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
	cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
	cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;
	
	cout << endl;
	
  // Exit the program
  return 0;
}