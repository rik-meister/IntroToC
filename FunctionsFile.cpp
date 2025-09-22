//#include<fstream>
//#include<iostream>
//#include <string>
//
//using namespace std;
//
//enum trafficLightEnum
//{
//	red,
//	yellow,
//	green,
//};
//string lightAction(trafficLightEnum currentLight);
//
//string lightAction(trafficLightEnum currentLight)
//{
//	switch (currentLight)
//	{
//	case red:
//		return "stop";
//		break;
//	case yellow:
//		return "be ready to stop";
//		break;
//	case green:
//		return "GO";
//		break;
//	default:
//		"keep going";
//		break;
//	}
//}
//
//void numberPattern()
//{
//	cout << "Numbers 1 through 10: " << endl;
//
//	for (int i = 1; i <= 10; i++)
//	{
//		cout << i << endl;
//	}
//}
//void printEvenNumbers()
//{
//	cout << "Even numbers from 2 to 20: " << endl;
//	for (int i = 2; i <= 20; i += 2)
//	{
//		cout << i << endl;
//	}
//}
//
//void multiplyTable()
//{
//	int num;
//
//	cout << "Enter Number: " << endl;
//	cin >> num;
//
//	for (int i = 1; i <= 12; i++)
//	{
//		cout << num << " x " << i << " = " << num * i << endl;
//	}
//
//
//}
//
//void sumCalculator()
//{
//	int sum = 1;
//	cout << "Sum of all numbers 1 to 100: " << endl;
//
//	for (int i = 1; i <= 100; ++i)
//	{
//		sum = sum + i;
//	}
//	cout << "Sum: " << sum << endl;
//}
//
//int positiveNum(int num)
//{
//	cout << "Enter a positive number greater than 0: " << endl;
//	cin >> num;
//
//	while (num <= 0)
//	{
//		cout << "Please try again: " << endl;
//		cin >> num;
//	}
//	if (num > 0);
//	{
//		cout << "Thank you";
//	}
//	return num;
//}
//
//int countdownTimer(int num)
//{
//	cout << "Enter a number to countdown from: " << endl;
//	cin >> num;
//
//	while (num > 0)
//	{
//		num--;
//		cout << "Launching in: " << num << endl;
//	}
//	if (num <= 0)
//	{
//		cout << "Lauching.. " << endl;
//	}
//	return num;
//
//}
//
//void doWhileFunction()
//{
//	string answer;
//
//	do
//	{
//		cout << "You are in a loop, would you like to leave?" << endl;
//		cin >> answer;
//
//		cout << endl;
//
//
//	} while (answer == "no" || answer == "No");
//
//	cout << "Loop has ended." << endl;
//}
//int getLength(string name)
//{
//	cout << "Number of letters is: " << name.length() << endl;
//	return name.length();
//}
//bool ifEqual(string name1, string name2)
//{
//	if (name1 == name2)
//	{
//		cout << true;
//		return true;
//	}
//	else
//	{
//		cout << false;
//		return false;
//	}
//}
//string toLowercase(string text)
//{
//	for (int i = 0; i < text.length(); i++)
//	{
//		if (text[i] >= 'A' && text[i] <= 'Z') {
//			text[i] = text[i] + 32;
//		}
//	}
//	cout << text;
//	return text;
//}
//
//void constant()
//{
//	string userCommand;
//	const string GAME_NAME = "Adventure";
//	const int MAX_PLAYERS = 4;
//	const string VERSION = "1.0";
//
//	string playerName = "Joe Biden";
//
//	cout << "===== " << GAME_NAME << " =====" << endl;
//	cout << "Players: " << MAX_PLAYERS << endl;
//	cout << "VERSION: " << VERSION << endl;
//	cout << "Welcome, " << playerName << endl;
//
//}
//void pointer()
//{
//	int gameScore = 42;
//	int* scorePtr = &gameScore;
//
//	cout << "Value using variable: " << gameScore << endl;
//	cout << "Value using pointer: " << *scorePtr << endl;
//
//	cout << "Other Stuff: " << scorePtr << endl;
//	cout << "Other Stuff 2: " << &gameScore << endl;
//}
//void healthPointer()
//{
//	int maxHealth = 150;
//	int health = 100;
//	int* healthPtr = &health; 
//
//	cout << "Health pointer : " << *healthPtr << endl;
//	
//	healthPtr = &maxHealth;
//
//	cout << "Max Health pointer: " << *healthPtr << endl;	
//}
//void nullPointer()
//{
//	int health = 100;
//	int* healthPtr = nullptr;
//
//	if (healthPtr != nullptr)
//	{
//		cout << "Health pointer is: " << *healthPtr << endl;
//	}
//	else
//	{
//		cout << "Pointer is null" << endl;
//	}
//}
//void referencePractice(int num)
//{
//	int& numRef = num;
//	cout << numRef * 2;
//}
////void printValue(const int& ref)
////{
////	cout << ref << endl;
////	cout << "Now we'll try to change it and it should come back the same" << endl;
////	ref = 20;
////	cout << ref << endl;
////}
//void writeToFile()
//{
//	ofstream logFile("test_results.txt");
//	if (logFile.is_open())
//	{
//		const int score = 100;
//
//		logFile << "Game started!" << endl;
//		logFile << "Enemy defeated!" << endl;
//		logFile << "Game Ended!" << endl;
//		logFile << "High Score: " << score << endl;
//		logFile.close();
//		cout << "File written successfully!" << endl;
//	}
//	else
//	{
//		cout << "Error: Could not create file!" << endl;
//	}
//}
//void highScoreFile()
//{
//	ofstream logFile("High_Score.txt");
//	if (logFile.is_open())
//	{
//		logFile << 100 << endl;
//		logFile.close();
//	}
//}
//void readHighScores()
//{
//	ifstream file("High_Score.txt");
//	string line;
//
//	if(file.is_open())
//	{
//		int line;
//		file >> line;
//		cout << "High Score: " << line << endl;
//		file.close();
//	}
//}
//void logFiles()
//{
//	ofstream logFile("Results.txt", ios::app);
//	if (logFile.is_open())
//	{
//		logFile << "Joe Biden" << endl;
//		logFile.close();
//		cout << "File written successfully!" << endl;
//	}
//	else
//	{
//		cout << "Error: Could not create file!" << endl;
//	}
//}
//void printArray()
//{
//	string weapons[4] = { "Sword and Shield", "Spear", "Greatsword", "Gun" };
//	int weaponCount = 4;
//
//	int weaponChoice = 0;
//	cout << "Select a weapon by entering a number (0-4)" << endl;
//	cin >> weaponChoice;
//	
//	try
//	{
//		if (weaponChoice < 0 || weaponChoice >= weaponCount || cin.fail())
//		{
//			throw "Invalid weapon selection!";
//		}
//		cout << "You selected: " << weapons[weaponChoice] << endl;
//		cout << "I mean, that's definitely a choice." << endl;
//
//	}
//	catch (...)
//	{
//		cout << "Error: Invalid weapon selection!" << endl;
//		cout << "Please choose a valid number." << endl;
//
//		cout << "Available Weapons: " << endl;
//		for (int i = 0; i < weaponCount; i++)
//		{
//			cout << i << ": " << weapons[i] << endl;
//		}
//	}
//}
//class Player
//{
//private: // Private = only this class can access 
//	int health; // Hidden from the outside world 
//
//public: // Public = anyone can access 
//	string name; // Anyone can read/change the name
//
//	void takeDamage(int damage)
//	{ // Function that belongs to Player health -= damage; cout << name << " takes " << damage << " damage!"; } 
//
//		health -= damage;
//		cout << name << " takes " << damage << " damage!";
//	};
//		
//	int getHealth() // Safe way to read private health 
//	{
//		return health;
//	}
//
//	int setHealth(int newHealth)
//	{
//		return health = newHealth;
//	}
//};
//
//// Example //
//class BankAccount
//{
//private:
//		
//	double balance;  // Only this class can change this!
//
//public:
//		
//	void deposit(double amount)
//	{
//		if (amount > 0) balance += amount;
//	}
//
//	double getBalance() { return balance; }
//};
//struct GameCharacter
//{
//	int health;
//	string name;
//	int level;
//};
//class BankAccount2
//{
//private:
//
//	int balance = 45000;
//	int accountNumber;
//
//
//
//public:
//
//	int newAccount;
//
//	void deposit(int addNum)
//	{
//		if (balance + addNum) balance += addNum;
//	}
//
//	int getBalance() { return balance; }
//
//	int setAccountNumber(int newAccount)
//	{
//		return accountNumber = newAccount;
//	}
//};
//struct Address
//{
//	int houseNum;
//	string streetName;
//	string cityName;
//	string state;
//	int zipCode;
//};
//struct PlayerInfo
//{
//	string name;
//	int score;
//};
//class Student
//{
//private:
//	string studentName;
//	int studentId;
//	float studentGpa;
//
//public:
//	Student()
//	{
//		studentName = "Unkown";
//		studentId = 0;
//		studentGpa = 0.0;
//	}
//	Student(string Name, int Id, float Gpa)
//	{
//		studentName = Name;
//		studentId = Id;
//		studentGpa = Gpa;
//	}
//	void studentInfo()
//	{
//		cout << studentName << endl;
//		cout << studentId << endl;
//		cout << studentGpa << endl;
//	}
//};
//class Weapon
//{
//private:
//	string weaponName;
//	int weaponDamage;
//	int weaponDurability;
//
//public:
//	Weapon()
//	{
//		weaponName = "Unknown";
//		weaponDamage = 25;
//		weaponDurability = 100;
//	}
//	Weapon(string Name)
//	{
//		weaponName = Name;
//		weaponDamage = 25;
//		weaponDurability = 100;
//	}
//	Weapon(string Name, int Damage, int Durability)
//	{
//		weaponName = Name;
//		weaponDamage = Damage;
//		weaponDurability = Durability;
//	}
//	void weaponInfo()
//	{
//		cout << "===== " << weaponName << " =====" << endl;
//		cout << "Damage Per Hit: " << weaponDamage << endl;
//		cout << "Durability: " << weaponDurability << endl;
//	}
//};
//class Item
//{
//protected:
//	string name;
//
//public:
//	Item()
//	{
//		cout << "Item constructor called" << endl;
//		name = "Unknown Item";
//	}
//	Item(string itemName)
//	{
//		cout << "Item constructor with name called" << endl;
//		name = itemName;
//	}
//};
//class Sword : public Item
//{
//public:
//	Sword()
//	{
//		cout << "Sword constructor called" << endl;
//	}
//	Sword(string leName)
//	{
//		cout << "Sword with name called!" << endl;
//	}
//};
//class Animal
//{
//protected:
//	string animalName;
//	int animalAge;
//
//public:
//	Animal()
//	{
//		cout << "Animal constructor called" << endl;
//		animalName = "Unknown Animal";
//		animalAge = 0;
//	}
//	Animal(string name, int age)
//	{
//		cout << "Animal constructor with name called" << endl;
//		animalName = name;
//		animalAge = age;
//	}
//};
//class Rabbit : public Animal
//{
//public:
//	Rabbit()
//	{
//		cout << "Rabbit constructor called" << endl;
//	}
//	Rabbit(string name, int age)
//	{
//		cout << "Rabbit with name called!" << endl;
//		animalName = name;
//		animalAge = age;
//	}
//	void displayInfo()
//	{
//		cout << "Name: " << animalName << endl;
//		cout << "Age: " << animalAge << endl;
//	}
//	void bark()
//	{
//		cout << animalName << ": Woof" << endl;
//	}
//};
//class GameCharacter
//{
//protected:
//	string gameCharacterName;
//	int gameCharacterHealth;
//};
//class Warrior : protected GameCharacter
//{
//public:
//	string weapon = "Greataxe";
//	Warrior()
//	{
//		gameCharacterName = "Unknown";
//		gameCharacterHealth = 250;
//	}
//	Warrior(string name, int health)
//	{
//		gameCharacterName = name;
//		gameCharacterHealth = health;
//
//		cout << "The warrior's name is " << gameCharacterName << " and his max health is " << gameCharacterHealth << "." << endl;
//		cout << "The warrior's preferred weapon is " << weapon << endl;
//	}
//};