#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include "RickyString.h"
using namespace std;

StringUtility::StringUtility()
{
	data = " ";
}
StringUtility::StringUtility(string str)
{
	data = str; 
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
int StringUtility::find(StringUtility findString)
{
	int pos = data.find(findString.data);
	if (pos >= 0)
	{
		return pos;
	}
	return -1;
}
int StringUtility::find(int startIndex, StringUtility findString)
{
	if (startIndex < 0 || startIndex >= data.length())
	{
		return -1;
	}

	int pos = data.find(findString.data, startIndex);
	if (pos >= 0)
	{
		return pos;
	}
	else
	{
		return -1;
	}
}
string StringUtility::replace(StringUtility findString, StringUtility other)
{
	int pos = 0;
	
	while ((pos = data.find(findString.data, pos)) >= 0)
	{
		data.replace(pos, findString.data.length(), other.data);
		pos += other.data.length(); 
	}
	return data;
}
void StringUtility::readFromConsole()
{
	getline(cin, data);
}
void StringUtility::writeToConsole()
{
	cout << data;
}
string StringUtility::printDataToConsole()
{
	return data;
}
void StringUtility::logFiles()
{
	ofstream logFile("String_Library_Results.txt", ios::app);
	if (logFile.is_open())
	{
		logFile << data << endl;
		logFile.close();
		cout << "File written successfully!" << endl;
	}
	else
	{
		cout << "Error: Could not create file!" << endl;
	}
}

void StringUtility::readStringLibrary()
{
	ifstream file("String_Library.txt");
	string data;

	if (file.is_open())
	{
		string data;
		file >> data;
		cout << "Result: " << data << endl;
		file.close();
	}
}