/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: AirlineSeating
 * This program is a simple seat reservation system for a plane.
 */

#include <iostream>
using namespace std;

//Constant variables
const int INTROWS = 12;
const int INTCOLUMNS = 6;

//Function to draw seats
void printSeats(char arySeats[INTROWS][INTCOLUMNS], int intRows)
{
	for (int intRow = 0; intRow < intRows; intRow++)
	{
		cout << "Row " << (intRow + 1);
		for (int intColumn = 0; intColumn < INTCOLUMNS; intColumn++)
		{
			cout << "\t";
			cout << arySeats[intRow][intColumn];
		}
		cout << endl;
	}
}

//Function to show empty seats
void clearSeats(char arySeats[INTROWS][INTCOLUMNS], int intRows)
{
	for (int intRow = 0; intRow < intRows; intRow++)
	{
		for (int intColumn = 0; intColumn < INTCOLUMNS; intColumn++)
		{
			arySeats[intRow][intColumn] = '-';
		}
	}
}

//Function to show filled seats
void fillSeat(char arySeats[INTROWS][INTCOLUMNS], int intRows, int intRow, int intColumn)
{
	arySeats[intRow][intColumn] = 'X';
}

//Main function
int main()
{
	char arySeats[INTROWS][INTCOLUMNS];
	
	clearSeats(arySeats, INTROWS);
	fillSeat(arySeats, INTROWS, 0, 0);
	fillSeat(arySeats, INTROWS, 1, 4);
	fillSeat(arySeats, INTROWS, 2, 2);
	fillSeat(arySeats, INTROWS, 3, 5);
	fillSeat(arySeats, INTROWS, 4, 1);
	fillSeat(arySeats, INTROWS, 5, 3);
	fillSeat(arySeats, INTROWS, 6, 0);
	fillSeat(arySeats, INTROWS, 7, 4);
	fillSeat(arySeats, INTROWS, 8, 2);
	fillSeat(arySeats, INTROWS, 9, 5);
	fillSeat(arySeats, INTROWS, 10, 1);
	fillSeat(arySeats, INTROWS, 11, 3);
	printSeats(arySeats, INTROWS);
	
	return 0;
}
