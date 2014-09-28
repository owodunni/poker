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

Card::Card()
{
	value = 0;
	suit = NO_CARD;
}

Card::Card(const int cardValue, const suit_t cardSuit)
{
	value = cardValue;
	suit = cardSuit;
}

int Card::Value()
{
	return value;
}

suit_t Card::Suit()
{
	return suit;
}

/**
*  Card printing functionality
*/

void Card::Print(ostream& stream) 
{
	string tempSuit;

	switch(this->Suit())
	{
	case NO_CARD:
		tempSuit ="NO CARD ERROR";
		break;

	case HEARTS:
		tempSuit = "HEARTS";
		break;

	case DIAMONDS:
		tempSuit = "DIAMONDS";
		break;

	case SPADES:
		tempSuit = "SPADES";
		break;

	case CLUBS:
		tempSuit = "CLUBS";
		break;

	default:
		tempSuit = "ERROR";
		break;

	}
	
	stream << this->Value()<<" of "<< tempSuit;
}


ostream& operator << (ostream& printFunc, Card& myCard) 
{
	myCard.Print(printFunc);
	return (printFunc);
}
