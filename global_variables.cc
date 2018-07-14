/******************************************************************************
 *  @file           global_variables.cc
 *  @author         Addison Sears-Collins
 *  @date           7/12/2018  
 *  @version        2.0 
 *  
 *  @brief	    Demonstrates the use of global variables
 *
 *  Purpose: This program demonstrates the use of global variables
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

	// This is a global variable. It is not good practice to use these a lot.
	int age {18};
	
// The main method that drives the program
int main() {  
	
	// This is a local variable. It is local to this function.
	int age {16};
	
	// The compiler will give preference to the local variable 16
	cout << age << endl;
	
  // Exit the program
  return 0;
}