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


// runs the phone directory application
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include "cStrTools.h"
#include "Phone.h"

using namespace std;
namespace sdds {
	void phoneDir(const char* programTitle, const char* fileName)
	{
		phoneBook phoneBook;
		char nameSearch[MAX_LENGTH + 1];
		char lowerName[MAX_LENGTH + 1]; //to store temp name
		bool valid = true; // Flag
		const char* filePtr = 0;

		cout << programTitle << " phone direcotry search" << endl;
		cout << "-------------------------------------------------------" << endl;

		FILE* fptr = fopen(fileName, "r");

		if (fptr != NULL)
		{
			do {
				cout << "Enter a partial name to search (no spaces) or enter '!' to exit" << endl;
				cout << "> ";
				cin >> nameSearch;
				toLowerCaseAndCopy(nameSearch, nameSearch); //make it lower and copy nameSearch to nameSearch

				if (strCmp(nameSearch, "!") == 0)
				{
					cout << "Thank you for using " << programTitle << " directory." << endl;
					valid = false;
				}
				else
				{
					while (fscanf(fptr, "%[^\t]\t%s\t%s\t%s\n",
						phoneBook.name, phoneBook.areaCode, phoneBook.prefix, phoneBook.number) != EOF)
					{
						toLowerCaseAndCopy(lowerName, phoneBook.name); //copy phoneBook.name to lowerName
						filePtr = strStr(lowerName, nameSearch); //if nameSearch found in lowerName it will return
						if (filePtr != nullptr) //nullptr in c++
						{
							cout << phoneBook.name << ": (" << phoneBook.areaCode <<
								") " << phoneBook.prefix << "-" << phoneBook.number << endl;
						}
					}
					rewind(fptr); //to rewind, otherwise will stop and won't go back to top 
				}
			} while (valid);
			fclose(fptr);
		}
		else
		{
			cout << fileName << " file not found!" << endl;
			cout << "Thank you for using " << programTitle << " directory." << endl;
		}
	}
}


