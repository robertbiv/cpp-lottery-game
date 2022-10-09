//----------------------------------------------------------
//  Name: Robert Bennethum
//  E-mail Address: rmb6287@psu.edu
//  Class: CMPSC 121
//  Project # Homework 6
//  Due Date: 11/19/2021
//  Brief Project Description: Make a lottery program
//----------------------------------------------------------

#include <iostream> // for inputs
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;


// function prototypes
void userGuess(int[]);
void randomNum(int[]);
int matchCheck(int[], int[]);
void printNumbers(int [], int [], int);

// functions
int main()
{
	// initilize arrays
	int lottery[5];
	int user[5];

	// set variables
	int sameNumber;

	//set random seed
	srand(time(0));


	cout << "Welcome to the Lottery" << endl;

	//call functions for guess, random numbers and if there are matches
	userGuess(user);
	randomNum(lottery);
	sameNumber = matchCheck(user, lottery);

	// print out the numbers
	printNumbers(user, lottery, sameNumber);
	
	//give space and end program
	cout << endl << endl;

	return 0;
}

//get numbers from user and assign to array
void userGuess(int user[])
{
	cout << "Enter 5 numbers from 0 - 9: ";
	cin >> user[0] >> user[1] >> user[2] >> user[3] >> user[4];
}

// set up random numbers for lottery
void randomNum(int lottery[])
{
	for (int i = 0; i < 5; i++)
	{
		lottery[i] = rand() % (9);
	}
}

// check for matches between user and random numbers
int matchCheck(int user[], int lottery[])
{
	int num = 0;
	for (int i = 0; i < 5; i++)
	{
		if (lottery[i] == user[i])
			num++;
	}
	return num;
}

// print the numbers and matches
void printNumbers(int user[], int lottery[], int sameNumber)
{
	cout << endl << "*************** Lottery Numbers ***************" << endl;
	//print the random numbers
	cout << "Random Numbers: ";
	for (int i = 0; i < 5; i++)
	{
		cout << lottery[i] << "  ";
	}

	//print user answer
	cout << endl << "Your numbers:   ";
	for (int i = 0; i < 5; i++)
	{
		cout << user[i] << "  ";
	}

	//print how many lottery guesses are the same
	cout << endl << endl << "Number of matches: " << sameNumber << endl;

	// check for if all numbers are the same, if so print congradulations
	if (sameNumber == 5)
		cout << "*********************************************" << endl << "Congradulations, you are a grand prize winner!" << endl << "*********************************************" << endl;
}


