//#########################################
//#                                       #
//#       -----BEATING POKER------        #
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	main.h
//# creator:	Alexander Poole
//# date: 		2014.08.27
//#
//# The .h file for the main file
//#########################################
//#
//# TODO:
//#

#ifndef __MAIN_H_INCLUDED__
#define __MAIN_H_INCLUDED__


#include "gameboard.h"
using namespace std;

enum state_t {PREFLOP,FLOP,RIVER,TURN,ENDROUND};
vector<Player*> SetUp();


#endif
