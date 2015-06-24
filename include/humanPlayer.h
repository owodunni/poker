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

#ifndef __HUMANPLAYER_H_INCLUDE__
#define __HUMANPLAYER_H_INCLUDE__

#include "player.h"
using namespace std;

class HumanPlayer: public Player
{
public:
  HumanPlayer() = default;
  Player(const int,const string, int);
  ~HumanPlayer();
  int MakeAction();
};
#endif
