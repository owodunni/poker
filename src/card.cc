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
//# TODO: 
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
		tempSuit ="NO CARD";
		break;

	case HEARTS:
		tempSuit = "Hearts";
		break;

	case DIAMONDS:
		tempSuit = "Diamonds";
		break;

	case SPADES:
		tempSuit = "Spades";
		break;

	case CLUBS:
		tempSuit = "Clubs";
		break;

	default:
		tempSuit = "ERROR";
		break;

	}
	
	if(this->Value()>10)
	{
		
		string tempValue;
		
		switch(this->Value())
		{
		case 11:
			tempValue ="Jack";
			break;

		case 12:
			tempValue = "Queen";
			break;

		case 13:
			tempValue = "King";
			break;

		case 14:
			tempValue = "Ace";
			break;

		default:
			tempValue = "ERROR";
			break;

		}
		
		stream << tempValue<<setw(3)<<" Of "<<setw(3)<< tempSuit;
		
	}
	else 
	{

		stream << this->Value()<<setw(3)<<" Of "<<setw(3)<< tempSuit;
	}
}


ostream& operator << (ostream& printFunc, Card& myCard) 
{
	myCard.Print(printFunc);
	return (printFunc);
}
