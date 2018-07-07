/*******************************************************************************
 *  @file           compute_average.cc
 *  @author         Addison Sears-Collins
 *  @date           7/7/2018  
 *  @version        2.0 
 *  
 *  @brief	        Computes the average of three numbers
 *
 *  Purpose: This is a program reads three separate numbers entered by the
 *           user. It then calculates the average of these three numbers 
 *           and displays the average to the console.
 ******************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  

	// Prompt the user to enter three numbers
	double number1, number2, number3;
	cout << "Enter three numbers separated by spaces: " << endl;
	cin >> number1 >> number2 >> number3;
	
	// Calculate the average
	double average = (number1 + number2 + number3) / 3;

	// Display the average to the console
	cout << "The average of " << number1 << ", " << number2 << ", and " 
		<< number3 << " is " << average << endl;
		
	// Exit the program
	return 0;
}