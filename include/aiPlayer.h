//#########################################
//#                                       #
//#       -----BEATING POKER------        #
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	player.h
//# creator:	Alexander Poole
//# date: 		2015.06.24
//#
//# The .h file for the Ai-player class
//#########################################
//#
//# TODO:
//#

#ifndef __AIPLAYER_H_INCLUDE__
#define __AIPLAYER_H_INCLUDE__

#include "player.h"
using namespace std;

class AiPlayer : public Player
{
public:
	AiPlayer() = default; //Konstruktor
	AiPlayer(const int,const string, int);
	~AiPlayer() = default; //Destruktor
	AiPlayer(const AiPlayer&) = default;
	AiPlayer(AiPlayer&&) = default; //Move-kopiering
	AiPlayer& operator=(const AiPlayer&) = default; //Tilldelningskonstruktor
	AiPlayer& operator=(AiPlayer&&) = default; // Move-tilldelning

	int MakeAction();
};
#endif
