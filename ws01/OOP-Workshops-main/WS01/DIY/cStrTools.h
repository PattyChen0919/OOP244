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

#pragma once
#ifndef SDDS_CSTRTOOLS_H // replace with relevant names
#define SDDS_CSTRTOOLS_H
//#include<iostream>
namespace sdds {

	// Your header file content goes here
	char toLower(char ch);
	int strCmp(const char* s1, const char* s2);
	int strnCmp(const char* s1, const char* s2, int len);
	void strCpy(char* des, const char* src);
	int strLen(const char* str);
	const char* strStr(const char* str, const char* find);
	int isAlpha(char ch);
	int isSpace(char ch);
	void trim(char word[]);
	void toLowerCaseAndCopy(char des[], const char source[]);
}
#endif