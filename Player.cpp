/*
 * Player.cpp
 *
 *  Created on: Oct 24, 2020
 *      Author: DEVILsPC
 */

#include "Player.h"

using namespace std;

string Player::getPlay() {
	if (this->play == 1) {
		return "rock";
	} else if (this->play == 2) {
		return "paper";
	} else if (this->play == 3) {
		return "scissors";
	}
	return "Invalid";
}

void Player::setPlay(string play) {
	if (play == "rock") {
		this->play = 1;
	} else if (play == "paper") {
		this->play = 2;
	} else if (play == "scissors") {
		this->play = 3;
	}
}

void Player::setPlay(int play) {
	this->play = play;
}
/* namespace std */
