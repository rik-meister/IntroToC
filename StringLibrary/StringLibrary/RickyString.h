#pragma once
#ifndef RickyString_H
#define RickyString_H
#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;

class StringUtility
{
protected:
	string data;
	
public:
	StringUtility();
	StringUtility(string str);
	int length();
	char characterAt(int index);
	bool equalTo(StringUtility other);
	string append(StringUtility other);
	string preprend(StringUtility other);
	string toLower();
	string toUpper();
};


#endif
