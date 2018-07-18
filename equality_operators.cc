/******************************************************************************
 *  @file           equality_operators.cc
 *  @author         Addison Sears-Collins
 *  @date           7/16/2018  
 *  @version        1.0 
 *  
 *  @brief	    Demonstrates the behavior of equality expressions
 *
 *  Purpose: This program demonstrates the behavior of equality expressions.
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  

	bool equal_result {false};
	bool not_equal_result {false};
	
	int num1{}, num2{};
	
	// Will display true/false instead of 1/0 for booleans
	cout << boolalpha;
	
	cout << "Enter two integers separated by a space: ";
	cin >> num1 >> num2;
	
	// Is num1 equal to num2?
	equal_result = (num1 == num2);
	
	// Is num1 not equal to num2?
	not_equal_result = (num1 != num2);
	
	cout << "Comparison result (equals) : " << equal_result << endl;
	cout << "Comparison result (not equals) : " << not_equal_result << endl;
	
	
  // Exit the program
  return 0;
}