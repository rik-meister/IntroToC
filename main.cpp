#include<iostream>
#include<fstream>
#include<string>
#include "Declarations.h"



int main()
{
	char operation;
	double num1, num2;

	cout << "===== Simple Calculator! =====" << endl;
	cout << "Enter an operator ( + , - , * , / ): ";
	cin >> operation;

	cout << "Enter two numbers: " << endl;
	cin >> num1 >> num2;

	switch (operation)
	{
	case '+':
		cout << "Result: " << num1 + num2 << endl;
		break;

	case '-':
		cout << "Result: " << num1 - num2 << endl;
		break;

	case '*':
		cout << "Result: " << num1 * num2 << endl;
		break;
	}
	
	

	//Intro to C++ Practice Examples//
	{

	/*cout << "You should " << lightAction(red) << endl;
	cout << "You should " << lightAction(yellow) << endl;
	cout << "You should " << lightAction(green) << endl;*/

	/*numberPattern();
	printEvenNumbers();*/

	/*multiplyTable();*/

	/*sumCalculator();*/

	/*positiveNum(num);*/

	/*countdownTimer(num);*/

	/*doWhileFunction();*/

	/*string monsterName;
	string name1;
	string name2;

	cout << "Enter monster name: ";
	cin >> monsterName;

	getLength(monsterName);

	cout << "Player 1 name: ";
	cin >> name1;

	cout << "Player 2 name: ";
	cin >> name2;

	ifEqual(name1, name2);*/

	/*string upperText;

	cout << "Enter a name in all CAPS: ";
	cin >> upperText;

	toLowercase(upperText);*/

	/*constant();*/

	/*pointer();*/

	/*healthPointer();*/

	/*nullPointer();*/

	//int takeInPointer(int healthPtr);

	/*int emptyVar;

	cout << "Enter number to double: " << endl;
	cin >> emptyVar;*/

	/*int num = 10;
	printValue(num);*/

	/*writeToFile();*/

	/*highScoreFile();*/

	/*readHighScores();*/

	/*logFiles();*/

	/*printArray();*/

	/*GameCharacter p1;
	p1.name = "Dingus";
	p1.health = 100;
	p1.level = 69;

	cout << "Name: " << p1.name << endl;
	cout << "Health: " << p1.health << endl;
	cout << "Level: " << p1.level << endl;*/

	/*BankAccount2 p1;

	int account = 0;
	int moneyDeposit = 0;


	cout << "Enter new Account Number: ";
	cin >> account;
	p1.setAccountNumber(account);
	cout << "Account Number changed to: " << account << endl;

	cout << "Current Balance: " << p1.getBalance() << endl;
	cout << "Desposit: ";

	cin >> moneyDeposit;
	p1.deposit(moneyDeposit);

	cout << "Balance after Deposit: " << p1.getBalance() << endl;*/

	/*Student jimmy("jimmy", 4020, 4.0);
	jimmy.studentInfo();

	Student james("james", 7694, 2.0);
	james.studentInfo();*/

	//Weapon sword("Steel Sword");
	//sword.weaponInfo();

	//Weapon gun("Glock", 9001, 200);
	//gun.weaponInfo();

	//Item potion("HP Potion"){name = "HP Potion" }

	//Rabbit rab("Sniffles", 7);
	//rab.displayInfo();
	//rab.bark();

	//Car a1("red", "fast");
	//a1.honk();

	/*Warrior w1("Jack", 500);*/
	}

}