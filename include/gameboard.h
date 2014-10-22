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

	class GameBoard
	{
	    
	Deck deck;
	stack<Card*> discPile;
	Player players[MAX_NUMB_PLAYERS];
	
	Card* flopTurnRiver[5];
	
	
	int numPlayers();
	bool playerOnPos(const int);
	void newRound();
	
	public:
	void deal();
	
	
	
	};
#endif