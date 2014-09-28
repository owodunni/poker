//#########################################      
//#                                       #                     
//#       -----BEATING POKER------        # 
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	deck.h                
//# creator:	Alexander Poole     
//# date: 		2014.09.14            
//#                                       
//# The .h file for the deck class                 
//#########################################
//#
//# TODO: Lägg till en stack som består av Card pekare då kortleken blandas så läggs alla kort från deck in i stacken slumpmässigt. 
//#

#ifndef __DECK_H_INCLUDE__
#define __DECK_H_INCLUDE__

#include <vector>
#include <stack>
#include <random>
#include <chrono>
#include "card.h"


using namespace std;

	class Deck
	{
		Card deck[52];
		stack<Card*> deckStack;
		void Empty();
		
	public:
		Deck();
		void Mix();
		Card* GetCard();
		Card* PeekCard();
	};
#endif