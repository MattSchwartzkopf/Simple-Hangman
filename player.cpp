#include <iostream>
#include <string>
#include "Player.h";
using namespace std;

string Player::getName()
{
	return this->name;
}

int Player::getScore() {
	return this->playerScore;
}

string Player::guessLetter()
{
	string letter;
	cin >> letter;
	return letter;
}

void Player::updateGuessList(string letter)
{
	this->guessedList.push_back(letter);
}
