#include <iostream>
#include "Player.h"
#include "Game.h"
using namespace std;

int main() {
	
	// Create player
	Player* Matt = new Player("Matt", 0);
	cout << "Name: " << Matt->getName() << " " << Matt->getScore() << endl;
	
	// Create game
	Game hangman;
	hangman.createWordList("words.txt");
	cout << "Today's words..." << endl;
	hangman.printWordList();
	cout << "\n\nChoosing word to guess...";
	hangman.setWordtoPlay();
	cout << "\n\nWord to Guess:";
	hangman.printWordToGuess();
	cout << "\n\n";

	// Play game
	string letter;
	Player p;
	cout << "-------------------" << endl;
	cout << "Welcome to Hangman!" << endl;
	cout << "-------------------" << endl;

	while (true) {
		cout << "Guess a letter: ";
		letter = Matt->guessLetter();

		if (hangman.getWord().find(letter)) {
			Matt->updateGuessList(letter);
		}
		else
			continue;
	}


	system("pause");
}