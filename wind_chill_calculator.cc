/******************************************************************************
 *  @file           wind_chill_calculator.cc
 *  @author         Addison Sears-Collins
 *  @date           7/9/2018  
 *  @version        1.0 
 *  
 *  @brief	    Calculates the wind chill given a temperature and a wind speed
 *
 *  Purpose: This program reads the temperature and wind speed from
 *           the user input. It then calculates the wind speed
 *           and displays it to the console.
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Include cmath library to support exponent operations
#include <cmath>

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  

  // Prompt the user to enter the temperature in Fahrenheit
  double temperature;
  cout << "Enter the temperature in Fahrenheit: ";
  cin >> temperature;
	
  // Wind chill formula cannot be used for temperatures below -58F or above 41F
  const double MIN_TEMP = -58;
  const double MAX_TEMP = 41;
  while (temperature < MIN_TEMP || temperature > MAX_TEMP) {
    cout << "Temperature must be between -58F and 41, inclusive. " << endl;
    cout << "Please try again.\n" << endl;
		
    // Prompt the user to enter the temperature in Fahrenheit
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temperature;
  }

  // Prompt the user to enter the wind speed in miles per hour
  double wind_speed;
  cout << endl << "Enter the wind speed in miles per hour: ";
  cin >> wind_speed;

  // Wind chill formula cannot be used for wind speeds below 2 mph
  const double MIN_WIND_SPEED = 2;
  while (wind_speed < MIN_WIND_SPEED) {
    cout << "Wind speed must be greater than or equal to 2 mph. " << endl;
    cout << "Please try again.\n" << endl;
		
    // Prompt the user to enter the wind speed in miles per hour
    cout << endl << "Enter the wind speed in miles per hour: ";
    cin >> wind_speed;
  }
  
  // Calculate the wind chill index
  double wind_chill_index = (35.74 + 0.6215 * temperature - 35.75 * 
    pow(wind_speed, 0.16) + 0.4275 * temperature * pow(wind_speed, 0.16));

  // Display the wind chil index to the console
  cout << endl << "The wind chill index is " << wind_chill_index << endl  << endl;

  // Exit the program
  return 0;
}
