//#########################################
//#                                       #
//#       -----BEATING POKER------        #
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	card.cc
//# creator:	Alexander Poole
//# date: 		2014.08.27
//#
//# The card class behaves like a card
//#########################################
//#
//# TODO: Take a look at the namespace it's giving me compilor errors.. 
//#

#include "../include/card.h"
#include <cstdint>

using namespace std;

Card::Card(const int cardValue, const suit_t cardSuit, const int cardId)
{
	value = cardValue;
	suit = cardSuit;
	id = cardId;
}

int Card::Value()
{
	return value;
}

suit_t Card::Suit()
{
	return suit;
}

int Card::Id()
{
return id;
}


/**
*  Card printing functionality
*/
/*
void 
Print(ostream& printFunc) const
{
	print_func << This.Name();
}


	ostream& 
	operator << (ostream& printFunc, Card& myCard) 
	{
		myCard.Print(printFunc);
		return (printFunc);
	}

*/