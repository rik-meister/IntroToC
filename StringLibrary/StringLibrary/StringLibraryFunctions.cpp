#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include "RickyString.h"
using namespace std;

StringUtility::StringUtility()
{
	data = " ";
	cout << "Default constructor called." << endl;
}
StringUtility::StringUtility(string str)
{
	data = str; 
	cout << "Parameterized constructor called with value: " << str << endl;
}
int StringUtility::length()
{
	return data.length();
}
char StringUtility::characterAt(int index)
{
	if (index < 0 || index >= data.length())
	{
		return '\0';
	}
	return data[index];
}	
bool StringUtility::equalTo(StringUtility other)
{
	return data == other.data;
}
string StringUtility::append(StringUtility other)
{
	return data = data + other.data;
}
string StringUtility::preprend(StringUtility other)
{
	return data = other.data + data;
}
string StringUtility::toLower()
{
	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] >= 'A' && data[i] <= 'Z') {
			data[i] = data[i] + 32;
		}
	}
	return data;
}
string StringUtility::toUpper()
{
	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] >= 'a' && data[i] <= 'z') {
			data[i] = data[i] - 32;
		}
	}
	return data;
}
