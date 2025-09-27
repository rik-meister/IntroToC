#include<iostream>
#include<fstream>
#include<string>
#include "RickyString.h"
using namespace std;



					//	Constructor
StringUtility::StringUtility()
{
	data = " ";
}


					//	String Input Function
StringUtility::StringUtility(string str)
{
	data = str; 
}


					//	Get Length Function
int StringUtility::length()
{
	return data.length();
}


					//	Get Character Function
char StringUtility::characterAt(int index)
{
	if (index < 0 || index >= data.length())
	{
		return '\0';
	}
	return data[index];
}	


					//	Eqaul To Function
bool StringUtility::equalTo(StringUtility other)
{
	return data == other.data;
}


					//	Append String Function
string StringUtility::append(StringUtility other)
{
	return data2 = data + other.data;
}


					//	Preprend String Function
string StringUtility::preprend(StringUtility other)
{
	return data = other.data + data;
}


					//	To Lowercase Function
string StringUtility::toLower()
{
	data2 = data;
	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] >= 'A' && data[i] <= 'Z') {
			data2[i] = data[i] + 32;
		}
	}
	return data2;
}


					//	To Uppcase Function
string StringUtility::toUpper()
{
	data2 = data;
	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] >= 'a' && data[i] <= 'z') {
			data2[i] = data[i] - 32;
		}
	}
	return data2;
}


					//	Find Function
int StringUtility::find(StringUtility findString)
{
	int pos = data.find(findString.data);
	if (pos >= 0)
	{
		return pos;
	}
	return -1;
}


					//	Find Function with Index
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


					//	Replace String Function
string StringUtility::replace(StringUtility findString, StringUtility other)
{
	int pos = 0;
	data2 = data;
	while ((pos = data.find(findString.data, pos)) >= 0)
	{
		data2.replace(pos, findString.data2.length(), other.data);
		pos += other.data.length(); 
	}
	return data2;
}


					//	Console Input Function
void StringUtility::readFromConsole()
{
	cout << "Type: BeepBoopBEEP" << endl;
	getline(cin, data);
}


					//	Output Data To Console Function
string StringUtility::printDataToConsole()
{
	return data;
}


					//	Logging Files Function
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



					//Run Test
string StringUtility::lengthTest(bool answer)
{
	if (data.length() == 5)
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}
string StringUtility::characterAtTest(bool answer)
{
	if (answer = "D")
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}
string StringUtility::equalToTest(bool answer)
{
	if (answer == 1)
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}
string StringUtility::appendTest(bool answer)
{
	if (answer = "ShaneATTACK")
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}
string StringUtility::preprendTest(bool answer)
{
	if (answer = "ATTACKShane")
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}
string StringUtility::toLowerTest(bool answer)
{
	if (answer = "attack")
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}
string StringUtility::toUpperTest(bool answer)
{
	if (answer = "BEST")
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}
string StringUtility::findTest(bool answer)
{
	if (answer = 27)
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}
string StringUtility::indexFindTest(bool answer)
{
	if (answer = 27)
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}
string StringUtility::replaceTest(bool answer)
{
	if (answer = "Black Desert Online is the WORST game ever.")
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}
string StringUtility::readFromConsoleTest(bool answer)
{
	if (data == "BeepBoopBEEP")
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}
string StringUtility::printToConsoleTest(bool answer)
{
	if (answer = "Black Desert Online is the best game ever.")
	{
		return "Test: PASS";
	}
	else
	{
		return "Test: FAIL";
	}
}