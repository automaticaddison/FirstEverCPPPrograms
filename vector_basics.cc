/******************************************************************************
 *  @file           vector_basics.cc
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

	// vector <char> vowels;  // empty vector of characters
	// vector <char> vowels (5); // 5 characters long, initialized to 0
	
	vector <char> vowels {'a','e','i','o','u'};
	
	cout << vowels[0] << endl;
	cout << vowels[4] << endl;
	
	// vector <int> test_scores;  // 3 elements all initialized to 0
	// vector <int> test_scores (3, 100); // 3 elements all initialized to 100
	
	vector <int> test_scores {100, 98, 89};
	
	cout << "\nTest scores using array syntax:" << endl;
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;
	
	cout << "\nTest scores using vector syntax:" << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	
	cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
	
	cout << "\nEnter 3 test scores: ";
	cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);
	
	cout <<"\nUpdated test scores: " << endl;
	
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	
	cout <<"\nEnter a test score to add to the vector: " << endl;
	
	int score_to_add {0};
	cin >> score_to_add;
	
	// Add a new test score to the vector
	test_scores.push_back(score_to_add);
	
	cout << "\nEnter one more test score to add to the vector: ";
	
	cin >> score_to_add;
	
	// Add another score to the vector
	test_scores.push_back(score_to_add);

	cout << "\nTest scores are now: " << endl;
	
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl;
	
	cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;
	
	// Example of a two-dimensional vector (e.g. spreadsheet)
	// A 2D vector is a vector of vectors
	vector <vector<int>> movie_ratings {
		{1, 2, 3, 4},
		{1, 2, 4, 4},
		{1, 3, 4, 5},
	};
	
	cout << "\nHere are the movie ratings for reviewer #1 using array syntax: " << endl;
	cout << movie_ratings[0][0] << endl;
	cout << movie_ratings[0][1] << endl;
	cout << movie_ratings[0][2] << endl;
	cout << movie_ratings[0][3] << endl;
	
	cout << "\nHere are the movie ratings for reviewer #1 using vector syntax: " << endl;
	cout << movie_ratings.at(0).at(0) << endl;
	cout << movie_ratings.at(0).at(1) << endl;
	cout << movie_ratings.at(0).at(2) << endl;
	cout << movie_ratings.at(0).at(3) << endl;
	
	cout << "\nEnter four new movie ratings for reviewer #1: ";
	cin >> movie_ratings.at(0).at(0);
	cin >> movie_ratings.at(0).at(1);
	cin >> movie_ratings.at(0).at(2);
	cin >> movie_ratings.at(0).at(3);
	
	cout <<"\nUpdated movie ratings: " << endl;
	
	cout << movie_ratings.at(0).at(0) << endl;
	cout << movie_ratings.at(0).at(1) << endl;
	cout << movie_ratings.at(0).at(2) << endl;
	cout << movie_ratings.at(0).at(3) << endl;
	
	cout << endl;
	
  // Exit the program
  return 0;
}