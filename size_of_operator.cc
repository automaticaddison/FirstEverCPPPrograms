/******************************************************************************
 *  @file           sizeof_operator.cc
 *  @author         Addison Sears-Collins
 *  @date           7/14/2018  
 *  @version        1.0 
 *  
 *  @brief	    Computes the size in bytes of a type or variable
 *
 *  Purpose: This program demonstrates the functionality of the sizeof
 *           operator. The sizeof operator determines the size in bytes 
 *           of a type or variable on this specific machine and compiler.
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// climits provides information about integral types
#include <climits> 

// cfloat provides information about floating point types
#include <cfloat> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  

	cout << "sizeof information" << endl;
	cout << "=============================" << endl;
	
	cout << "char: " << sizeof(char) << " bytes." << endl;
	cout << "int: " << sizeof(int) << " bytes." << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
	cout << "short: " << sizeof(short) << " bytes." << endl;
	cout << "long: " << sizeof(long) << " bytes." << endl;
	cout << "long long: " << sizeof(long long) << " bytes." << endl;

	cout << "=============================" << endl;
	
	cout << "float: " << sizeof(float) << " bytes." << endl;
	cout << "double: " << sizeof(double) << " bytes." << endl;
	cout << "long double: " << sizeof(long double) << " bytes." << endl;
	
	cout << "=============================" << endl;
	
	cout << "Minimum values:" << endl;
	
	// What is the minimum value that can be stored in each data type
	cout << "char: " << CHAR_MIN << endl;
	cout << "int: " << INT_MIN << endl;
	cout << "short: " << SHRT_MIN << endl;
	cout << "long: " << LONG_MIN << endl;
	cout << "long long: " << LLONG_MIN << endl;

	cout << "=============================" << endl;
	
	cout << "Maximum values:" << endl;
	
	// What is the maximum value that can be stored in each data type
	cout << "char: " << CHAR_MAX << endl;
	cout << "int: " << INT_MAX << endl;
	cout << "short: " << SHRT_MAX << endl;
	cout << "long: " << LONG_MAX << endl;
	cout << "long long: " << LLONG_MAX << endl;
	
	cout << "=============================" << endl;
	
	// Calculate the size of variable names
	
	cout << "sizeof using variable names" << endl;
	
	int age{21};
	cout << "age is " << sizeof(age) << " bytes." << endl;
	cout << "age is " << sizeof age << " bytes." << endl;
	
	double wage{22.24};
	cout << "wage is " << sizeof(wage) << " bytes." << endl;
	cout << "wage is " << sizeof wage << " bytes." << endl;
	
  // Exit the program
  return 0;
}