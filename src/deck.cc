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

void Deck::Empty()
{
	if(!deckStack.empty())
	{
		while(!deckStack.empty())
		{
			deckStack.pop();
		}
	}
}

Deck::Deck()
{
	int deckPos = 0;

	for(int cardSuit = HEARTS; cardSuit <= CLUBS; cardSuit ++)
	{
		suit_t newSuit = static_cast<suit_t>(cardSuit);
		
		for(int newValue = 2; newValue<=14;newValue++)
		{
			deck[deckPos] = Card(newValue,newSuit);
			deckPos++;
		}
	}

}


void Deck::Mix()
{

	Empty(); //Makes sure that the deckStack is empty

	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	default_random_engine generator (seed);

	vector<Card*> tempDeck;
	tempDeck.resize(52);
	
	for(int i=0; i<52;i++)
	{
		tempDeck[i]=&deck[i];
	}
	
	int deckPos;
	
	for(int i = 0;i<52;i++)
	{

		uniform_int_distribution<int> distribution(0,51-i);
		deckPos = distribution(generator);
		
		deckStack.push(tempDeck[deckPos]);
		tempDeck.erase(tempDeck.begin()+deckPos);
		
	}
}

Card* Deck::GetCard()
{
	//Should be a try catch block here if we were to pop an empty stack.
	Card* tempCard = deckStack.top();
	deckStack.pop();
	return tempCard;
}

Card* Deck::PeekCard()
{
	return deckStack.top();
}