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

// classes

// exception for invalid character
class invalidCharacterException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid character. Use a letter (A-Z, a-z).";
    }
};

// exception for invalid range
class invalidRangeException : public exception {
public:
    const char* what() const noexcept override {
        return "Out of range. Use a letter (A-Z, a-z).";
    }
};

// functions

// calculate the character offset
char character(char start, int offset) {
    // Check if start character is a valid letter
    if (!(isalpha(start))) {
        throw invalidCharacterException();
    }

    // Calculate the value of the character
    char value = start + offset;

    // Check if the value of the character is a valid letter
    if (!(isalpha(value))) {
        throw invalidRangeException();
    }

    return value;
}

	//											+++Start Main+++

int main() {

    try {
        cout << character('a', 2);
    }
    catch (const invalidCharacterException& nope) {
        cerr << nope.what() << endl;
    }
    catch (const invalidRangeException& nope) {
        cerr << nope.what() << endl;
    }

	//											+++END MAIN+++

	cout << endl << endl;
	system("pause");
	return 0;

}

