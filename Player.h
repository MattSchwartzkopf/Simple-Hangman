#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
public:
	Player(string name, int score) {
		this->name = name;
		this->playerScore = score;
	};
	Player() {};
	~Player() {};

	string getName();
	int getScore();
	string guessLetter();
	void updateGuessList(string letter);

private:
	string name;
	int score;
	int playerScore;
	vector<string> guessedList;
};