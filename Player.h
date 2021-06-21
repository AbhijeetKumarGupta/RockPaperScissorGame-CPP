/*
 * Player.h
 *
 *  Created on: Oct 24, 2020
 *      Author: DEVILsPC
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include<string>
using namespace std;

class Player{
	private:
		int play;

	public:
		string getPlay();
		void setPlay(string play);
		void setPlay(int play);
};

#endif /* PLAYER_H_ */
