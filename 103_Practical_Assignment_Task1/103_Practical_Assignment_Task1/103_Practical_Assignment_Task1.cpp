// 103_Practical_Assignment_Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Kevin Karati 103 practical task 1

#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::cin;

enum position { Goalkeeper = 'G', Defender = 'D', Midfielder = 'M', Winger = 'W', Striker = 'S'};

struct football {
	int playerNum;
	float topSpeed;
	position playerPosition;
	position playerPositionTwo;
} playerOne, playerTwo;



int main()
{
	char inputPosition, inputPositionTwo;
	


	//player1
	cin >> playerOne.playerNum;
	cin >> playerOne.topSpeed;
	cin >> inputPosition;

	position playerPosition = (position)inputPosition;
	
	switch (inputPosition) {
	case Goalkeeper:
		cout << "Positon : Goalkeeper";
		break;
	case Defender:
		cout << "Position : Defender ";
		break;
	case Midfielder:
		cout << "Position : Midfield";
		break;
	case Winger:
		cout << "Position: Wing";
		break;
	case Striker:
		cout << "Position: Striker";
		break;
	}
	cout << playerOne.playerNum;
	cout << playerOne.topSpeed;
	cout << inputPosition;

	//player2
	cin >> playerTwo.playerNum;
	cin >> playerTwo.topSpeed;
	cin >> inputPositionTwo;

	position playerPositionTwo = (position)inputPositionTwo;

	switch (inputPositionTwo) {
	case Goalkeeper:
		cout << "Positon : Goalkeeper";
		break;
	case Defender:
		cout << "Position : Defender ";
		break;
	case Midfielder:
		cout << "Position : Midfield";
		break;
	case Winger:
		cout << "Position: Wing";
		break;
	case Striker:
		cout << "Position: Striker";
		break;
	}
	cout << playerTwo.playerNum;
	cout << playerTwo.topSpeed;
	cout << inputPositionTwo;
}

