#include<iostream>
#include<fstream>
#include<string>
#include "RickyString.h"
using namespace std;



int main()
{
		//StringUtility data
	StringUtility obj1;
	StringUtility obj2("Shane");
	StringUtility obj3("ATTACK");
	StringUtility obj4("Defense");
	StringUtility obj5("Black Desert Online is the best game ever.");
	StringUtility obj6("best");
	StringUtility obj7("WORST");

		//Output
	
	//	Logging Files Function
	void logFiles();
	{
		ofstream logFile("String_Library_Results.txt", ios::app);
		if (logFile.is_open())
		{
			logFile << "The Alphabetical length of '" << obj2.printDataToConsole() << "' is: " << obj2.length() << ". " << obj2.lengthTest(5) << endl;
			logFile << "The Character indexed in the word '" << obj4.printDataToConsole() << "' is '" << obj4.characterAt(0) << "'. " << obj4.characterAtTest("D") << endl;
			logFile << "The 'Equal To' boolean result of '" << obj2.printDataToConsole() << "' and '" << obj7.printDataToConsole() << "' is '" << obj2.equalTo(obj7) << "'. " << obj2.equalToTest(1) << endl;
			logFile << "The result of appending results to '" << obj2.append(obj3) << "'. " << obj2.appendTest("ShaneATTACK") << endl;
			logFile << "The result of prepending '" << obj2.preprend(obj3) << "'. " << obj2.preprendTest("ATTACKShane") << endl;
			logFile << "The result of turning '" << obj3.printDataToConsole() << "' lowercase results to '" << obj3.toLower() << "'. " << obj3.toLowerTest("attack") << endl;
			logFile << "The result of turning '" << obj6.printDataToConsole() << "' to uppercase results to '" << obj6.toUpper() << "'. " << obj6.toUpperTest("BEST") << endl;
			logFile << "The location of the word '" << obj6.printDataToConsole() << "' found in '" << obj5.printDataToConsole() << "' is: " << obj5.find(obj6) << ". " << obj5.findTest(27) << endl;
			logFile << "Using the find index function, the location of the word '" << obj6.printDataToConsole() << "' found in '" << obj5.printDataToConsole() << "' is: " << obj5.find(12, obj6) << ". " << obj5.indexFindTest(27) << endl;
			logFile << "Replacing the word '" << obj6.printDataToConsole() << "' within '" << obj5.printDataToConsole() << "' with '" << obj7.printDataToConsole() << "' results in: " << obj5.replace(obj6, obj7) << " " << obj5.replaceTest("Black Desert Online is the WORST game ever.") << endl;
			obj1.readFromConsole();
			logFile << "read.FromConsole: Type BeepBoopBEEP: " << obj1.readFromConsoleTest("BeepBoopBEEP") << endl;
			logFile << obj5.printDataToConsole() << " " << obj5.printToConsoleTest("Black Desert Online is the best game ever.") << endl;
			logFile.close();
			cout << "File written successfully!" << endl;
		}
		else
		{
			cout << "Error: Could not create file!" << endl;
		}
	}
}

