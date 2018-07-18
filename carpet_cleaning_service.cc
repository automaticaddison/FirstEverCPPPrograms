/******************************************************************************
 *  @file           carpet_cleaning_service.cc
 *  @author         Addison Sears-Collins
 *  @date           7/14/2018  
 *  @version        1.0 
 *  
 *  @brief	    Provides a cost estimate for large and small rooms
 *
 *  Purpose: This program prompts the user for the number of small and large
 *           rooms they would like cleaned and provides an estimate.
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  

  cout << "Hello, welcome to Addison's Carpet Cleaning Service" << endl;
  
	int small_rooms{0};
	cout << "\nHow many small rooms would you like cleaned?" << endl;
	cin >> small_rooms;

	int large_rooms{0};
	cout << "\nHow many large rooms would you like cleaned?" << endl;
	cin >> large_rooms;
	
	const double price_per_small_room {25.0};
	const double price_per_large_room {35.0};
	
	const double sales_tax {0.06};
	const int estimate_expiry {30};
	
	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << small_rooms << endl;
	cout << "Number of large rooms: " << large_rooms << endl;
	
	cout << "Price per small room: $" << price_per_small_room << endl;
	cout << "Price per large room: $" << price_per_large_room << endl;
	
	cout << "Cost : $"
		<< (price_per_small_room * small_rooms) + 
			(price_per_large_room * large_rooms)
		<< endl;
			
	cout << "Tax : $"
		<< ((price_per_small_room * small_rooms) + 
			(price_per_large_room * large_rooms)) * sales_tax
		<< endl;
	
	cout << "====================================" << endl;
	cout << "Total estimate : $"
		<< ((price_per_small_room * small_rooms) + 
			(price_per_large_room * large_rooms)) + 
			((price_per_small_room * small_rooms) + 
			(price_per_large_room * large_rooms)) * sales_tax
		<< endl;
	cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
	cout << endl;

  // Exit the program
  return 0;
}