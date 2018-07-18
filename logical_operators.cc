/******************************************************************************
 *  @file           logical_operators.cc
 *  @author         Addison Sears-Collins
 *  @date           7/16/2018  
 *  @version        1.0 
 *  
 *  @brief	    Demonstrates the behavior of logical operators
 *
 *  Purpose: This program demonstrates the behavior of logical operators
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  

	int num {};
	const int lower{10};
	const int upper{20};
	
	cout << boolalpha;
	
	// Determine if an entered integer is between two other integers
	// assume lower < upper
	cout << "Enter an integer - the bounds are " << lower << " and " << upper
		<< " : ";
	cin >> num;
	
	bool within_bounds{false};
	
	// Is the number greater than the lower bound and less than the upper bound?
	// If yes, true; else, false.
	within_bounds = ((num > lower) && (num < upper));
	
	cout << num << " is between " << lower << " and " << upper << " : " 
		<< within_bounds << endl;
		
		
	// Determine if an entered integer is outside of two other integers
	// assume lower < upper
	cout << "\nEnter an integer - the bounds are " << lower << " and " << upper
		<< " : ";
	cin >> num;
	
	bool outside_bounds{false};
	
	// Is the number less than the lower bound or greater than the upper bound?
	// If yes, true; else, false.
	outside_bounds = ((num < lower) || (num > upper));
	
	cout << num << " is outside " << lower << " and " << upper << " : " 
		<< outside_bounds << endl;
	
	// Determine if an entered integer is exactly on the boundary...10 or 20
	// assume lower < upper
	cout << "\nEnter an integer - the bounds are " << lower << " and " << upper
		<< " : ";
	cin >> num;
	
	bool on_bounds{false};
	
	// Is the number on the boundary?
	// If yes, true; else, false.
	on_bounds = ((num == lower) || (num == upper));
	
	cout << num << " is on one of the bounds which are " << lower << " and " << upper 
		<< " : " << on_bounds << endl;

	// Determine if you need to wear a coat based on temperature and wind speed
	bool wear_coat {false};
	double temperature {};
	int wind_speed {};
	
	// wind over this value requires a coat
	const int wind_speed_for_coat {25}; 
	
	// temperature below this value requires a coat
	const double temperature_for_coat {45}; 
	
	// Require a coat if either wind is too high AND temperature is too low
	cout << "\nEnter the current temperature in (F) : " ;
	cin >> temperature;
	cout << "Enter the windspeed in (mph) : " ;
	cin >> wind_speed;
	
	wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
	cout << "\nDo you need to wear a coat? " << wear_coat << endl;
	
	cout << endl;
	
  // Exit the program
  return 0;
}