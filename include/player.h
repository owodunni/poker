//#########################################
//#                                       #
//#       -----BEATING POKER------        #
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	player.h
//# creator:	Alexander Poole
//# date: 		2014.09.28
//#
//# The .h file for the player class
//#########################################
//#
//# TODO:
//#

#ifndef __PLAYER_H_INCLUDE__
#define __PLAYER_H_INCLUDE__

#include "card.h"
#include <vector>
using namespace std;

class Player
{

protected:
	vector<Card*> cards;
	string name = "";
	int id = 0;
	int bankroll = 0;
	bool playing = false;

public:
	Player() = default; //Konstruktor
	~Player() = default; //Destruktor
	Player(const Player&) = default;
	Player(Player&&) = default; //Move-kopiering
	Player& operator=(const Player&) = default; //Tilldelningskonstruktor
	Player& operator=(Player&&) = default; // Move-tilldelning


	void NewCard(Card*,int);
	vector<Card*> Cards();
	void Win(int);
	bool Playing();
	void ShowCards();

	virtual int MakeAction() = 0;

};
#endif
