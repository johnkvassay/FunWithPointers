// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
/*
Create a new console project C++ program.
Create at least two pointers in main that point at variables with at least two different data types.
Make your program uses more than one function.
In one or more function(s), pass a pointer into the function.
In one or more function(s), return a pointer from the function.
Use and assin the returned pointer in your code.
Come up with a creative program
Your program should do something, in addition to demonstrate your knowledge of pointers.
Your main function should control all the other functions.
Comment your source code file (.CPP) well.
Once the program is working have tested it a few times, create a new repository in your GitHub account for your program.
Add your solution and files to your new Repository on GitHub.
Take a screenshot of this project in GitHub.
Take a screenshot of the program working.
*/


// Preprocessor Directives
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// Putting the int * is what allows the function to accept points as an argument
void swapthemoney(int* paccount1, int* paccount2);
void showmethemoney(int paccount1, int paccount2);

int main()
{
	// Initial variables
	// These Variables will be referenced using pointers
	// They will then be swaped using the pointers
	int myAccounttotal = 0;
	int isisAccounttotal = 1;

	// & in from of a variable means the address of a variable
	// pnum is pointing to the address of num
	int* pisisAccounttotal = &isisAccounttotal;
	int* pmyAccounttotal = &myAccounttotal;


	// Runs the showmethemoney function 
	showmethemoney(isisAccounttotal, myAccounttotal); 
	// Runs the swapthemoney function
	// Uses pointers as the arguments 
	swapthemoney(pisisAccounttotal, pmyAccounttotal);
	cout << endl << "===========================================================================" << endl << endl;

	string myFirstName = "Jon";
	string myLastName = "Smith";

	string* pmyFirstName = &myFirstName;
	string* pmyLastName = &myLastName;

	// Initializes swapfirstwithlast()
	string swapfirstwithlast(string* name1, string* name2);

	string lastfirst = swapfirstwithlast(pmyFirstName, pmyLastName);

	cout << "Your Name: " << myFirstName << " " << myLastName << endl;
	cout << "Your Login: " << lastfirst << endl;

	// Stops the program from closing automatically
	system("pause");
	return 0;
}

// Swaps the values of the 2 arguments
void swapthemoney(int* paccount1, int* paccount2)
{
	
	cout << "==============" << endl;
	cout << "swapthemoney()" << endl;
	cout << "==============" << endl << endl;

	cout << "Account 1 Balance: " << *paccount1 << endl; // Prints out the inital value for paccount1
	cout << "Account 2 Balance: " << *paccount2 << endl; // Prints out the initial value for paccount2
	cout << "paccount1 Address: " << paccount1 << endl; // Prints out the initial address for paccount1
	cout << "paccount2 Address: " << paccount2 << endl; // Prints out the initial address for paccount2
	
	int temp = 0; // Creates a temp variables that will give us a local place to store one of the values when swapping 
	/*
	the * in front of paccount in order to pull the variable out of the pointer
	if the pointer function argument does not have the * in it, then the address will be outputed when couting the pointer
	this is because the pointer does not store the actual value of the variable
	the pointer instead stores the address of the variable
	the pointer must be dereferenced using the * operater in order for the pointer to have the variable
	*/
	temp = *paccount1; // Stores the value of paccount1 so that it can be put into paccount2 later
	cout << "Temp Variable = " << temp << endl;
	// The line below does not contain the * sign because it is swaping the refrences
	paccount1 = paccount2; // sets the address of the argument paccount1 to paccount2
	cout << endl << "Swapping inputs.... DISPLAYING paccount values" << endl;
	cout << "paccount1 = " << *paccount1 << endl;
	*paccount2 = temp; // Sets the value of paccount2 to the original value of paccount1
	cout << "paccount2 = " << *paccount2 << endl;
	cout << "paccount1 Address: " << paccount1 << endl; // Prints out the new address for paccount1
	cout << "paccount2 Address: " << paccount2 << endl; // Prints out the new address for paccount2
}
 

void showmethemoney(int paccount1, int paccount2)
{
	cout << "================" << endl;
	cout << "showmethemoney()" << endl;
	cout << "================" << endl << endl;

	cout << "Account 1 Balance: " << paccount1 << endl;
	cout << "Account 2 Balance: "<< paccount2 << endl;
	int temp = 0;
	temp = paccount1; 
	cout << "Temp Variable = " << temp << endl;
	paccount1 = paccount2;
	cout << "Account 1 Balance: " << paccount1 << endl;
	paccount2 = temp;
	cout << "Account 2 Balance: " << paccount2 << endl;
	cout << endl; // Line included for formatting purposes
}

// Makes the name John Kvassay print out as kvassay john
string swapfirstwithlast(string* name1, string* name2)
{
	cout << "===================" << endl;
	cout << "swapfirstwithlast()" << endl;
	cout << "===================" << endl;
	
	string lastfirst;
	lastfirst = *name2 + *name1;
	cout << endl;
	return lastfirst;
}