//*****************************************************************************
//  <assessment name example : Workshop - #1 (Part - 2)>
//  Full Name   : Pei-Ti, Chen
//  Student ID# : 133237222
//	Email       : pchen81@myseneca.ca
//	Section     : OOP244 NCC
//	Date        : 2023/09/19
//	Authenticity Declaration :
//  I have done all the coding by myself and only copied the code 
//  that my professor provided to complete my workshops and assignments.
//*****************************************************************************



#ifndef SDDS_PHONE_H
#define SDDS_PHONE_H
#define MAX_LENGTH 50

namespace sdds {

	struct phoneBook {
		char name[MAX_LENGTH + 1]; //+1 with \0
		char areaCode[MAX_LENGTH + 1];
		char prefix[MAX_LENGTH + 1];
		char number[MAX_LENGTH + 1];
	};


	// runs the phone directory application
	
	void phoneDir(const char* programTitle, const char* fileName);
	//void displayHeader(const char* programTitle);
	//void unsuccessful(const char* programTitle, const char* fileName);
	//char getInput(int fptr, const char* programTitle);
}

#endif