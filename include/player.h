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
//# Playes should be handled directly by main.cc
//# and player pointers should be given to gameboard.h

#ifndef __PLAYER_H_INCLUDE__
#define __PLAYER_H_INCLUDE__

#include "card.h"
#include <vector>
using namespace std;

class Player
{
	Card* cards[2];
	string name = "";
	int id = 0;
	int bankroll = 0;
	bool playing = false;
	
public:
	Player();
	Player(const int,const string, int);
	void NewCard(Card*,int);
	vector<Card*> Cards();
	int Bet(int);
	void Win(int);
	void Fold();
	bool Playing();
	
	void ShowCards();
	
	int id();
	
};
#endif