/******************************************************************************
 *  @file           square_footage.cc
 *  @author         Addison Sears-Collins
 *  @date           7/12/2018  
 *  @version        1.0 
 *  
 *  @brief	    Calculates the square footage of a room
 *
 *  Purpose: This program reads in the length and width of a room and
 *           calculates the square footage.
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  

  // Prompt the user to enter the length
  double room_length {0};
  cout << "Enter the length of the room: ";
  cin >> room_length;

  // Prompt the user to enter the width
  double room_width {0}; 
  cout << "Enter the width of the room: ";
  cin >> room_width;

  // Display the square footage to the console
  cout << "The room is " << room_length * room_width << " square feet." 
		<< endl << endl;

  // Exit the program
  return 0;
}