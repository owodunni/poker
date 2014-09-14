//#########################################
//#                                       #
//#       -----BEATING POKER------        #
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	deck.cc
//# creator:	Alexander Poole
//# date: 		2014.09.14
//#
//# The card class behaves like a card
//#########################################
//#
//# TODO: Generate a deck, generate a random deck.
//#

#include "../include/deck.h"
#include <cstdint>

using namespace std;

Deck::Deck()
{
	/*int deckPos = 0;
	for(int cardSuit = HEARTS; cardSuit <= CLUBS; cardSuit ++)
	{
		suit_t newSuit = static_cast<suit_t>(cardSuit);
		for(int newValue = 2; newValue<=14;newValue++)
		{
			deck[deckPos] = Card(newValue,newSuit,deckPos);
		}
	}*/
}

/*Card PeekCard(const int cardNumb)//returns first card without altering the array
{
	return deck[cardNumber];
}

Card GetCard(const int cardNumb) //returns the first card from the deck and deletes it from the array
{

}*/