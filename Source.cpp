/*
Name: Kyle Baker
Date: 12/08/2024
Project Name: CIS 1202 Programming Assignment #15a - Exceptions
Project Description: Write a function to calculate character offsets, throwing exceptions in error conditions.
*/

// libraries

#include<iostream>
#include<stdexcept> // For exceptions

// namespace
using namespace std;

// function prototypes

char character(char start, int offset);

	//											+++Start Main+++

int main() {


	cout << "test output\n\n";

	system("pause");



	//											+++END MAIN+++

	cout << endl << endl;
	system("pause");
	return 0;

}

char character(char start, int offset) 
{
	if ((!start)) {
		//2.	If start is not a letter (A-Z, a-z), throw an invalidCharacterExcpeption.
		//3.	If the target is not a letter, throw an invalidRangeException
		//4.	Otherwise, return the letter described by the start and offset.


	}
	return 0;
}
