#pragma once
#ifndef RickyString_H
#define RickyString_H
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class StringUtility
{
protected:
	string data; //Initial data
	string data2; //Data output

public:
		//Constructors
	StringUtility();
	StringUtility(string str);

		//Get Length of String
	int length();

		//Get Character at Index
	char characterAt(int index);

		//Equal to String
	bool equalTo(StringUtility other);

		//Append and Preprend String
	string append(StringUtility other);
	string preprend(StringUtility other);

		//Lowercase and Uppercase String
	string toLower();
	string toUpper();

		//Find String either with String or Index, and Replace
	int find(StringUtility findString);
	int find(int startIndex, StringUtility findString);
	string replace(StringUtility findString, StringUtility other);

		//Console Input and Output
	void readFromConsole();
	string printDataToConsole();

		//Run Test
	string lengthTest(bool answer);
	string characterAtTest(bool answer);
	string equalToTest(bool answer);
	string appendTest(bool answer);
	string preprendTest(bool answer);
	string toLowerTest(bool answer);
	string toUpperTest(bool answer);
	string findTest(bool answer);
	string indexFindTest(bool answer);
	string replaceTest(bool answer);
	string readFromConsoleTest(bool answer);
	string printToConsoleTest(bool answer);

		//To Log results
	void logFiles();
	
};




#endif
