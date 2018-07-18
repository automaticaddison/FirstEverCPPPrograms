/******************************************************************************
 *  @file           mixed_expressions.cc
 *  @author         Addison Sears-Collins
 *  @date           7/16/2018  
 *  @version        1.0 
 *  
 *  @brief	    Demonstrates the behavior of mixed type expressions
 *
 *  Purpose: This program asks the user to enter 3 integers. Calculates the
 *           sum of the integers then calculates the average of the 3 integers.
 *           Display the 3 integers entered; the sum of the 3 integers and
 *           the average of the 3 integers.
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  
	int total {};
	int num1 {}, num2{}, num3{};
	const int count {3};
	
	cout << "Enter 3 integers separated by spaces: ";
	cin >> num1 >> num2 >> num3;
	
	total = num1 + num2 + num3;
	
	double average {0.0};
	
	average = (static_cast<double>(total)) / count;
	// averagae = (double)total/count; Old C-style casting
	
	cout << "The three numbers were: " << num1 << "," << num2 << "," << num3 
		<< endl;
		
	cout << "The sum of the numbers is " << total << endl;
	cout << "The average is " << average << endl;
	

	
	cout << endl;
	
  // Exit the program
  return 0;
}