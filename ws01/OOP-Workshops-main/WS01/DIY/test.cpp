
// THIS IS CORRECT!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
////from directory
//using namespace std;
//namespace sdds {
//
//
//	void phoneDir(const char* programTitle, const char* fileName) {
//		struct phoneBook phoneBook[MAX_LINE];
//		char namesearch[MAX_LENGTH + 1];
//		char lowername[MAX_LENGTH + 1];
//		char lowerPhoneBookName[MAX_LENGTH + 1];
//		bool valid = true; // Flag, bool valid = true
//		const char* filePointer = 0;
//
//		cout << programTitle << " phone direcotry search" << endl;
//		cout << "-------------------------------------------------------" << endl;
//
//		FILE* fptr = fopen(fileName, "r");
//
//		if (fptr != NULL) {
//			int i = 0, j = 0;
//			for (i = 0; i < MAX_LINE && !feof(fptr); i++)
//			{
//				fscanf(fptr, "%[^\t]\t%s\t%s\t%s\n", phoneBook[i].name, phoneBook[i].areaCode, phoneBook[i].prefix, phoneBook[i].number);
//				j++;
//			}
//			do {
//				cout << "Enter a partial name to search (no spaces) or enter '!' to exit" << endl;
//				cout << "> ";
//				cin >> namesearch;
//				toLowerCaseAndCopy(lowername, namesearch);
//
//				if (strCmp(namesearch, "!") == 0) {
//					cout << "Thank you for using " << programTitle << " directory." << endl;
//					valid = false;
//				}
//				else {
//					for (i = 0; i < j; i++)
//					{
//						toLowerCaseAndCopy(lowerPhoneBookName, phoneBook[i].name);
//						filePointer = strStr(lowerPhoneBookName, lowername);
//						if (filePointer != NULL)
//						{
//							cout << phoneBook[i].name << ": (" << phoneBook[i].areaCode << ") " << phoneBook[i].prefix << "-" << phoneBook[i].number << endl;
//						}
//					}
//					valid = true;
//				}
//			} while (valid);
//
//			fclose(fptr);
//		}
//		else {
//			cout << fileName << " file not found!" << endl;
//			cout << "Thank you for using " << programTitle << " directory." << endl;
//		}
//	}
//}


//using namespace std;
//
//namespace sdds {
//
//	void phoneDir(const char* programTitle, const char* fileName) {
//		struct phoneBook phonebook[MAX_LINE];
//		char namesearch[MAX_LENGTH + 1];
//		char lowername[MAX_LENGTH + 1];
//		char lowerPhoneBookName[MAX_LENGTH + 1];
//		bool valid = true; //flag
//		const char* filePtr = 0;//create vars
//		cout << programTitle << " phone direcotry search" << endl;
//		cout << "-------------------------------------------------------" << endl;
//
//		FILE* fptr = NULL;
//		fptr = fopen(fileName, "r");
//
//		if (fptr != NULL)
//		{
//			int i = 0;
//			for (i = 0; !feof(fptr) && i < MAX_LINE; i++) {
//				/*fscanf(fptr, "%[^\t]\t%s\t%s\t%s\n",
//					phonebook[i].name, phonebook[i].areaCode, phonebook[i].prefix, phonebook[i].number); */
//
//
//					//create var, to check if those are true 
//				fscanf(fptr, "%[^\t]\t%s\t%s\t%s\n",
//					phonebook[i].name, phonebook[i].areaCode, phonebook[i].prefix, phonebook[i].number);
//
//
//			}
//			//for (i = 0; i < MAX_LINE; i++)
//			//{
//			//}
//
//			do
//			{
//				cout << "Enter a partial name to search (no spaces) or enter '!' to exit" << endl;
//				cout << "> ";
//				cin >> namesearch;
//				toLowerCaseAndCopy(lowername, namesearch);
//
//				if (strCmp(lowername, "!") != 0)
//				{
//					
//					
//					//toLowerCaseAndCopy(name, name);
//					for (i = 0; i < MAX_LINE; i++)
//					{
//						toLowerCaseAndCopy(lowerPhoneBookName, phonebook[i].name);
//						filePtr = strStr(lowerPhoneBookName, lowername); //to check if phonebook name and enter name is match
//						if (filePtr != nullptr)
//						{
//							cout << phonebook[i].name << ": (" << phonebook[i].areaCode
//								<< ") " << phonebook[i].prefix << "-" << phonebook[i].number << endl;
//
//						}
//					}
//					
//
//					
//
//
//					//fseek(fptr, 0, SEEK_SET);
//					/*valid = false;*/
//				}
//				else {
//					cout << "Thank you for using " << programTitle << " direcotry." << endl;
//					valid = false;
//				}
//
//			} while (valid);
//
//			fclose(fptr);
//		}
//
//		else
//		{
//			//cout << "Failed to open file :(" << endl; //put error here 
//			//cout << programTitle << " phone directory search" << endl;
//			//cout << "-------------------------------------------------------" << endl;
//			cout << fileName << "file not found!" << endl;
//			cout << "Thank you for using Broken Phone Book directory." << endl;
//		}
//	}
//}

























//void displayHeader(const char* programTitle) {
//	cout << programTitle << " phone directory search" << endl;
//	cout << "-------------------------------------------------------" << endl;
//}
//void unsuccessful(const char* programTitle, const char* fileName) {
//	cout << fileName << " file not found!" << endl;
//	cout << "Thank you for using Star Wars directory." << endl;
//}












//// runs the phone directory application
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstdio>
//#include "cStrTools.h"
//#include "Phone.h"
//#define MAX_LINE 50
//
//using namespace std;
//
//namespace sdds {
//
//	void phoneDir(const char* programTitle, const char* fileName) {
//		struct phoneBook phonebook[MAX_LINE];
//		char namesearch[MAX_LENGTH + 1];
//		char lowername[MAX_LENGTH + 1];
//		char lowerPhoneBookName[MAX_LINE][MAX_LENGTH + 1];
//		bool valid = true; //flag
//		const char* filePtr = 0;//create vars
//		cout << programTitle << " phone direcotry search" << endl;
//		cout << "-------------------------------------------------------" << endl;
//
//		FILE* fptr = NULL;
//		fptr = fopen(fileName, "r");
//
//		if (fptr != NULL) 
//		{
//			do 
//			{
//				cout << "Enter a partial name to search (no spaces) or enter '!' to exit" << endl;
//				cout << "> ";
//				cin >> namesearch;
//				toLowerCaseAndCopy(lowername, namesearch);
//				
//				if (strCmp(lowername, "!") != 0)
//				{
//					int i = 0;
//					for (i = 0; i < MAX_LINE; i++) {
//						/*fscanf(fptr, "%[^\t]\t%s\t%s\t%s\n",
//							phonebook[i].name, phonebook[i].areaCode, phonebook[i].prefix, phonebook[i].number); */
//
//							
//							//create var, to check if those are true 
//						fscanf(fptr, "%[^\t]\t%s\t%s\t%s\n",
//							phonebook[i].name, phonebook[i].areaCode, phonebook[i].prefix, phonebook[i].number);
//							
//						
//					}
//					//toLowerCaseAndCopy(name, name);
//					for (int i = 0; i < MAX_LINE; i++)
//					{
//						cout << phonebook[i].name << endl;
//					}
//						toLowerCaseAndCopy(lowerPhoneBookName[i], phonebook[i].name);
//					filePtr = strStr(lowerPhoneBookName[i], lowername); //to check if phonebook name and enter name is match
//
//					if (filePtr != nullptr)
//					{
//						cout << phonebook[i].name << ": (" << phonebook[i].areaCode
//							<< ") " << phonebook[i].prefix << "-" << phonebook[i].number << endl;
//
//					}
//
//					
//					//fseek(fptr, 0, SEEK_SET);
//					valid = false;
//				}
//				else {
//					cout << "Thank you for using " << programTitle << " direcotry." << endl;
//					valid = true;
//				}
//
//			} while (!valid);
//		
//			fclose(fptr);
//		}
//
//		else 
//		{
//			//cout << "Failed to open file :(" << endl; //put error here 
//			//cout << programTitle << " phone directory search" << endl;
//			//cout << "-------------------------------------------------------" << endl;
//			cout << fileName << "file not found!" << endl;
//			cout << "Thank you for using Broken Phone Book directory." << endl;
//		}
//	}
//}






















////from directory
//void phoneDir(const char* programTitle, const char* fileName) {
//	phoneBook phoneBook;
//	char name[MAX_LENGTH + 1];
//	bool valid = true; // Flag, bool valid = true
//	const char* filePointer = 0;

//	cout << programTitle << " phone directory search" << endl;
//	cout << "-------------------------------------------------------" << endl;

//	FILE* fptr = fopen(fileName, "r");

//	if (fptr != NULL) {
//		do {
//			cout << "Enter a partial name to search (no spaces) or enter '!' to exit" << endl;
//			cout << "> ";
//			cin >> name;
//			toLowerCaseAndCopy(name, name);

//			if (strCmp(name, "!") == 0) {
//				cout << "Thank you for using " << programTitle << " directory." << endl;
//				valid = 0;
//			}
//			else {
//				while (fscanf(fptr, "%[^\t]\t%s\t%s\t%s\n", phoneBook.name, phoneBook.areaCode, phoneBook.prefix, phoneBook.number) != EOF)
//				{
//					toLowerCaseAndCopy(phoneBook.name, phoneBook.name);
//					filePointer = strStr(phoneBook.name, name);

//					if (filePointer != NULL)
//					{
//						cout << phoneBook.name << ": (" << phoneBook.areaCode << ") " << phoneBook.prefix << "-" << phoneBook.number << endl;

//					}
//				}
//				//fseek(fptr, 0, SEEK_SET);
//			}
//		} while (valid);

//		fclose(fptr);
//	}
//	else {
//		cout << fileName << " file not found!" << endl;
//		cout << "Thank you for using Star Wars directory." << endl;
//	}
//}


//void displayHeader(const char* programTitle) {
//	cout << programTitle << " phone directory search" << endl;
//	cout << "-------------------------------------------------------" << endl;
//}
//void unsuccessful(const char* programTitle, const char* fileName) {
//	cout << fileName << " file not found!" << endl;
//	cout << "Thank you for using Star Wars directory." << endl;
//}

