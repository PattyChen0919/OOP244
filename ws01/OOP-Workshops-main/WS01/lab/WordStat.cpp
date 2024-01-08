//*****************************************************************************
//  <assessment name example : Workshop - #1 (Part - 1)>
//  Full Name   : Pei-Ti, Chen
//  Student ID# : 133237222
//	Email       : pchen81@myseneca.ca
//	Section     : OOP244 NCC
//	Date        : 2023/09/14
//	Authenticity Declaration :
//I have done all the coding by myself and only copied the code 
//  that my professor provided to complete my workshops and assignments.
//*****************************************************************************

#include <iostream>
#include "Word.h"
using namespace sdds;
using namespace std;

int main() {
	char filename[256];
	programTitle();
	cout << "Enter filename: ";
	cin >> filename;
	wordStats(filename);
	return 0;
}