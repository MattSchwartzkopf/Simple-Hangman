#pragma once
#include <string>
#include <vector>
using namespace std;

class Game {
public:
	Game() {};
	~Game() {};

	void createWordList(string filename);
	void printWordList();
	void setWordtoPlay();
	void printWordToGuess();
	string getWord();

private:
	vector<string> wordList;
	string wordToGuess;
};