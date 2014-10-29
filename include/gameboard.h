//#########################################      
//#                                       #                     
//#       -----BEATING POKER------        # 
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	gameboard.h                
//# creator:	Alexander Poole     
//# date: 		2014.09.28           
//#                                       
//# The .h file for the gameboard class                 
//#########################################
//#
//# TODO: 
//#

#ifndef __GAMEBOARD_H_INCLUDE__
#define __GAMEBOARD_H_INCLUDE__

#include "deck.h"
#include "player.h"

#define MAX_NUMB_PLAYERS 8

using namespace std;

	class Gameboard
	{
	    
	Deck deck;
	Player* seats[8];
	vector<Card*> flopTurnRiver;
	
	//Private functions
	bool PlayerOnPos(const int);
	void Shuffle();
	
	public:
	Gameboard();
	
	void Deal();
	void Flop();
	void Turn();
	void River();
	
	vector<Card*> FlopTurnRiver();
	
	bool SeatPlayer(Player*, const int );
	bool RemovePlayer(Player*,Player*);
	
	};
#endif