/*
Name: Kyle Baker
Date: 12/08/2024
Project Name: CIS 1202 Programming Assignment #15a - Exceptions
Project Description: Write a function to calculate character offsets, throwing exceptions in error conditions.
*/

// libraries

#include<cctype>   
#include<iostream>
#include<stdexcept> // For exceptions


// namespace
using namespace std;

// function prototypes

char character(char start, int offset);

// classes
class invalidCharacterException : public std::exception {
	const char* what() const noexcept override {
		return "invalid letter use (A-Z or a-z).";
	}
};

	//											+++Start Main+++

int main() {


	cout << "test output\n\n";


	system("pause");

	cout << character(4, 32);


	//											+++END MAIN+++

	cout << endl << endl;
	system("pause");
	return 0;

}

// Function to calculate the character after applying the offset
char character(char start, int offset) {
    // Check if the start character is a valid letter
    if (!isalpha(start)) {
        throw invalidCharacterException();
    }

    // Calculate the target character using the offset
    char range;

    // Determine if the start is an uppercase or lowercase letter
    if (isupper(start)) {
        range = 'A' + (start - 'A' + offset) % 26;
    }
    else if (islower(start)) {
        range = 'a' + (start - 'a' + offset) % 26;
    }

    // Check if the target character is a valid letter
    if (!isalpha(range)) {
       // throw invalidRangeException();
    }

    return range;
}
