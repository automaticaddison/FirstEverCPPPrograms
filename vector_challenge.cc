/******************************************************************************
 *  @file           vector_challenge.cc
 *  @author         Addison Sears-Collins
 *  @date           7/16/2018  
 *  @version        1.0 
 *  
 *  @brief	    Demonstrates the basics of vectors in C++
 *
 *  Purpose: This program demonstrates the basics of vectors in C++
 *****************************************************************************/
// Include iostream library to support the console input and output
#include <iostream> 

// Need to include this so that we can use vectors
#include <vector>

// Use the standard namespace to avoid naming conflicts
using namespace std;  

// The main method that drives the program
int main() {  

	// Declare 2 empty vectors of integers named vector1 and vector2, respectively
	vector <int> vector1; 
	vector <int> vector2;
 
	// Add 10 and 20 to vector1 dynamically using push_back
	vector1.push_back(10);
	vector1.push_back(20);
	
	//Display the elements in vector1 using the at() method as well as its size using the size() method
	cout << "\nElements of vector1 are: " << endl;
	
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	
	cout << "\nThe size of vector1 is " << vector1.size() << endl;

	// Add 100 and 200 to vector2 dynamically using push_back
	vector2.push_back(100);
	vector2.push_back(200);

// Display the elements in vector2 using the at() method as well as its size using the size() method
	cout << "\nElements of vector2 are: " << endl;
	
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	
	cout << "\nThe size of vector2 is " << vector2.size() << endl;

// Declare an empty 2D vector called vector_2d
// Remember tha a 2D vector is a vector of a vector <int>
	vector <vector<int>> vector_2d;
	
// Add vector1 to vector_2d dynamically using push_back
	vector_2d.push_back(vector1);

// Add vector2 to vector_2d dynamically using push_back
	vector_2d.push_back(vector2);

// Display the elements in vector_2d using the at() method
	cout << "\nHere are the elements in vector_2d: " << endl;
	cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	
// Change vector1.at(0) to 1000
	vector1.at(0) = 1000;
	
// Display the elements in vector_2d again using the at() method
	cout << "\nHere are the updated elements in vector_2d: " << endl;
	cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

// Display the elements in vector1
	cout << "\nElements of vector1 are now: " << endl;
	
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;

	cout << endl;
	
  // Exit the program
  return 0;
}