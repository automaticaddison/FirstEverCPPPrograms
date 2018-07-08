/******************************************************************************
 *  @file           calculate_change.cc
 *  @author         Addison Sears-Collins
 *  @date           7/8/2018  
 *  @version        1.0 
 *  
 *  @brief	    Converts an amount into dollar bills, quarters, dimes, nickels,
 *                  and pennies             
 *  Purpose: This program reads in a given amount of money and converts
 *           it into smaller monetary units: dollar bills, quarters, dimes,
 *           nickels, and pennies.
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  

  cout << "This program reads in a given amount of money and converts it"
    << endl << "into smaller monetary units: dollar bills, quarters, dimes," 
    << endl << "nickels, and pennies.\n" << endl;

  // Prompt the user to enter the monetary amount
  double initial_amount;
  cout << "Enter an amount (e.g. 12.90): ";
  cin >> initial_amount;
	cout << endl;

  // Convert the amount into cents
  initial_amount = initial_amount * 100;
	int amount_remaining = static_cast<int>(initial_amount);

  // Calculate the number of twenty dollar bills
  int twenty_dollars = amount_remaining / 2000;

  // Update the amount remaining
  amount_remaining = amount_remaining % 2000;
	
  // Calculate the number of ten dollar bills
  int ten_dollars = amount_remaining / 1000;

  // Update the amount remaining
  amount_remaining = amount_remaining % 1000;
	
  // Calculate the number of five dollar bills
  int five_dollars = amount_remaining / 500;

  // Update the amount remaining
  amount_remaining = amount_remaining % 500;
	
  // Calculate the number of one dollar bills
  int one_dollars = amount_remaining / 100;

  // Update the amount remaining
  amount_remaining = amount_remaining % 100;

  // Calculate the number of quarters
  int quarters = amount_remaining / 25;

  // Update the amount remaining
  amount_remaining = amount_remaining % 25;

  // Calculate the number of dimes
  int dimes = amount_remaining / 10;

  // Update the amount remaining
  amount_remaining = amount_remaining % 10;

  // Calculate the number of nickels
  int nickels = amount_remaining / 5;

  // Update the amount remaining
  amount_remaining = amount_remaining % 5;	

  // Calculate the number of pennies
  int pennies = amount_remaining / 1;

  // Update the amount remaining
  amount_remaining = amount_remaining % 1;

  // Print the amounts of each currency to the console
  cout << "The change is:\n" << endl 
    << twenty_dollars << " twenty dollar bills" << endl 
    << ten_dollars << " ten dollar bills" << endl 
    << five_dollars << " five dollar bills" << endl 
    << one_dollars << " one dollar bills" << endl 
    << quarters << " quarters" << endl 
    << dimes << " dimes" << endl 
    << nickels << " nickels" << endl 
    << pennies << " pennies\n" << endl;

  // Exit the program
  return 0;
}
