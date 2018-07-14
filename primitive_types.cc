/******************************************************************************
 *  @file           primitive_types.cc
 *  @author         Addison Sears-Collins
 *  @date           7/13/2018  
 *  @version        1.0 
 *  
 *  @brief	    Demonstrates the different kind of primitive types in C++
 *
 *  Purpose: This program is a demonstration of the different kind 
 * 		of primitive types in C++
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  

  /****************************************************************************
	 * Character type
	 * *************************************************************************/
  // Note the single quotes around characters
	char middle_initial {'J'};
  cout << "My middle initial is: " << middle_initial << endl;

  /****************************************************************************
	 * Integer types
	 * *************************************************************************/
	 // same as unsigned short exam_score {55}
	 unsigned short int exam_score {55};
	 cout << "My exam score was " << exam_score << endl;
	 
	 int countries_represented {65};
	 cout << "There were " << countries_represented << " countries represented" 
	 << " in my meeting" << endl;
	 
	 long people_in_florida {20'610'000};
	 cout << "There are about " << people_in_florida << " people in florida" << endl;
	 
	long long people_on_earth {7'600'000'000};
	cout << "There are about " << people_on_earth << " people on earth" << endl;
	
	long long distance_to_alpha_centauri {9'461'000'000'000};
	cout << "The distance to alpha centauri is " << distance_to_alpha_centauri 
	<< " kilometers" << endl;

  /****************************************************************************
	 * Floating point types
	 * *************************************************************************/
	 float car_payment {401.23};
	 cout << "My car payment is " << car_payment << endl;

	 double pi {3.14159};
	 cout << "PI is " << pi << endl;
	 
	 long double large_amount {2.7e120};
	 cout << large_amount << " is a very big number" << endl;	 
	 
	/****************************************************************************
	 * Boolean types
	 * *************************************************************************/
	 
	 bool game_over {false};
	 cout << "The value of game_over is " << game_over << endl;
	  
	 
  // Exit the program
  return 0;
}
