//============================================================================
// Name        : CheggRockPaperScissor.cpp
// Author      : DEVIL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Player.h"

using namespace std;

void displayWinner(string com, string player);

int main() {
	int flag = 0;
	string userPlay;
	int computerPlay = 0;
	int lastPlay;
	Player computer;
	Player player;

	do {

		cout << "Enter your play player (rock,paper,scissors): ";
		cin >> userPlay;
		player.setPlay(userPlay);

		do{
			computerPlay = rand() % (3-1+1) + 1;
		}while(computerPlay == lastPlay);
		lastPlay = computerPlay;

		computer.setPlay(computerPlay);
		cout << "Enter your play computer (rock,paper,scissors): "
				<< computer.getPlay() << endl;

		displayWinner(computer.getPlay(), player.getPlay());

		cout << "\nEnter 1 to continue 0 to exit: ";
		cin >> flag;
		cout << endl;
	} while (flag != 0);

	return 0;
}

void displayWinner(string com, string player) {

	if (com == "rock" && player == "rock")
		cout << "It's a tie" << endl;
	else if (com == "rock" && player == "paper")
		cout << "Player wins" << endl;
	else if (com == "rock" && player == "scissors")
		cout << "Computer wins" << endl;
	else if (com == "paper" && player == "paper")
		cout << "It's a tie" << endl;
	else if (com == "paper" && player == "scissors")
		cout << "Player wins" << endl;
	else if (com == "paper" && player == "rock")
		cout << "Computer wins" << endl;
	else if (com == "scissors" && player == "scissors")
		cout << "It's a tie" << endl;
	else if (com == "scissors" && player == "rock")
		cout << "Player wins" << endl;
	else if (com == "scissors" && player == "paper")
		cout << "Computer wins" << endl;
}
