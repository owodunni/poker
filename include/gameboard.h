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
#include "humanPlayer.h"
#include "aiPlayer.h"

using namespace std;

class GameBoard
{
private:

	vector<Player*> players;
	Deck deck;
	int numPlay;

public:
	GameBoard() = default;
	GameBoard(
					vector<Player*>
					);
	~GameBoard()= default;
	GameBoard(const GameBoard& otherCard) = default; //Kopieringskonstruktor
	GameBoard& operator=(const GameBoard& otherCard) = default; //kopieringstilldelning
	GameBoard(GameBoard&& rhs) = default; //flyttkonstruktor
	GameBoard& operator=(GameBoard&& rhs) = default; //flyttilldelning

	void Deal();
	void Flop();
	void River();
	void Turn();
	void ResolveRound();
	bool MakeActions();
	};
#endif
