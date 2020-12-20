#include "Game.h"
#include <string>
#include <iostream>
#include <fstream>
#include<time.h>
using namespace std;

void Game::createWordList(string filename)
{
	ifstream file;
	string word;

	file.open(filename);
	if (file.is_open()) {
		while (getline(file, word))
		{
			this->wordList.push_back(word);
		}
		file.close();
	}
	else
		cout << "Failed to open file";
}

void Game::printWordList()
{
	for (int i = 0; i < this->wordList.size(); i++) {
		cout << wordList.at(i) + " ";
	}
}

void Game::setWordtoPlay()
{
	srand(time(0));
	int randomNumber = rand() % wordList.size();
	wordToGuess = wordList[randomNumber];
}

void Game::printWordToGuess()
{
	cout << wordToGuess;
}

string Game::getWord()
{
	return wordToGuess;
}
