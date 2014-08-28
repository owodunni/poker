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
using namespace Card;

/*
card::Card(const uint8_t cardValue, const uint8_t cardSuit)
{
	value = cardValue;
	suit = cardSuit;
}

*/
string 
Card::Card::Name()
{
	return name;
}

/*
uint_8 
card::Value()
{
	return value;
}

uint_8 
card::Suit()
{
	return Suit
}

/ <---->**
*  Card printing functionality
* <-----> /

void 
Print(ostream& printFunc) const
{
	print_func << This.Name();
}

namespace 
Card
{
	ostream& 
	operator << (ostream& printFunc, Card& myCard) 
	{
		myCard.Print(printFunc);
		return (printFunc);
	}
}
*/