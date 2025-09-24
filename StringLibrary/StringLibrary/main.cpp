#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include "RickyString.h"
using namespace std;


int main()
{
	StringUtility obj1;
	StringUtility obj2("Shane");
	StringUtility obj3("ATTACK");
	StringUtility obj4("Defense");
	StringUtility obj5("Black Desert Online is the best game ever.");
	StringUtility obj6("best");
	StringUtility obj7("WORST");

	cout << "The Alphabetical length of '" << obj2.printDataToConsole() << "' is " << obj2.length() << endl;
	cout << "The Character indexed in the word '" << obj4.printDataToConsole() << "' is '" << obj4.characterAt(0) << "'." << endl;
	cout << "The 'Equal To' boolean result of '" << obj2.printDataToConsole() << "' and '" << obj4.printDataToConsole() << "' is '" << obj2.equalTo(obj4) << "'." << endl;
	cout << "The result of appending results to '" << obj2.append(obj3) << "'." << endl;
	cout << "The result of prepending '" << obj2.preprend(obj3) << "'." << endl;

}