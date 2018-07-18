/******************************************************************************
 *  @file           array_basics.cc
 *  @author         Addison Sears-Collins
 *  @date           7/15/2018  
 *  @version        1.0 
 *  
 *  @brief	    Demonstrates the basics of arrays in C++
 *
 *  Purpose: This program demonstrates the basics of arrays in C++
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  

	// Array named vowels with 5 characters
	char vowels[] {'a','e','i','o','u'};
	cout << "\nThe first vowel is: " << vowels[0] << endl;
	cout << "The last vowel is: " << vowels[4] << endl;
	
	// Creates an array of four doubles
	double hi_temps [] {90.1, 89.8, 77.5, 81.6};
	cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
	
	// Change the 90.1 to 100.7
	hi_temps[0] = 100.7; 
	
	cout << "The first high temperature is now: " << hi_temps[0] << endl;
	
	// Create an array of 5 integers initialized to zero
	int test_scores [5] {};
	
	cout << "\nFirst score at index 0: " << test_scores[0] << endl;
	cout << "\nFirst score at index 1: " << test_scores[1] << endl;
	cout << "\nFirst score at index 2: " << test_scores[2]<< endl;
	cout << "\nFirst score at index 3: " << test_scores[3] << endl;
	cout << "\nFirst score at index 4: " << test_scores[4] << endl;

	// Read integers from the console and store them in the test scores array
	cout << "\nEnter 5 test scores: ";
	cin >> test_scores[0];
	cin >> test_scores[1];
	cin >> test_scores[2];
	cin >> test_scores[3];
	cin >> test_scores[4];
	
	cout << "\nThe updated array is:" << endl;
	cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Third score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3: " << test_scores[3] << endl;
	cout << "Fifth score at index 4: " << test_scores[4] << endl;
	
	// Output the address of the array in memory
	cout << "\nNotice what the value of the array name is: " << test_scores << endl;
	
	// Integers take up 4 bytes of memory, so test_scores[1] is 4 bytes away from 
	// test_scores[0]
	cout << "An integer on this compiler is: " << sizeof(int) << " bytes" << endl;
	cout << "So the second value in the array is an offset of " << sizeof(int) 
		<< " bytes from the memory address " << test_scores << endl;
	
	// Declare a two-dimensional array for movie ratings given by three
	// different movie critics.
	// A two-dimensional array is like a spreadsheet
	// Each row is a different movie critic. Each column is a different movie.
	// The data in each cell of the array is the movie rating that was given.
	// rows = movie critic; column = movie name; data = movie rating
	// Movie rating scale is 1-10
	// Provide the rows to initialize a two-dimensional array
	int movie_rating [3][4] {
		{7, 3, 10, 6},
		{5, 4, 8, 7},
		{7, 3, 10, 6},
	};
	
	cout << "\nReviewer 2 gave a rating of " << movie_rating[2][3] 
		<< " to movie number 3" << endl;
		
	cout << "\nReviewer 2 would like to change his rating of movie 3" << endl;
	cout << "What is the new rating on a scale of 1-10?" << endl;
	cin >> movie_rating[2][3];

	cout << "\nReviewer 2's new rating of movie number 3 is " 
		<< movie_rating[2][3] << endl << endl;
	
	cout << "=================================" << endl;
	// Create a Jeopardy board like the one on the television show
	string categories [] {"Ax", "Bx", "Cx", "Dx","Ex","Fx"};
	
	int number_of_categories = sizeof(categories)/sizeof(categories[0]);
	
	// Print the categories to the console
	for (int i = 0; i < number_of_categories; i++) {
		cout << categories[i] << "   ";
	}
	
	cout << endl;
	cout << "=================================" << endl;

	// Create a 5 row and 6 column matrix of point values
	int point_values [5][6] {
		{200, 200, 200, 200, 200, 200},
		{400, 400, 400, 400, 400, 400},
		{600, 600, 600, 600, 600, 600},
		{800, 800, 800, 800, 800, 800},
		{1000, 1000, 1000, 1000, 1000, 1000},
	};
	
	// Display point values to the console
	for (int row = 0; row < 4; row++) {
		for (int column = 0; column < 6; column++) {
			cout << point_values[row][column] << "  ";
		}
		cout << endl;
	}
		for (int row = 4; row < 5; row++) {
		for (int column = 0; column < 6; column++) {
			cout << point_values[row][column] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	
  // Exit the program
  return 0;
}